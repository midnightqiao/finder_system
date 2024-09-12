#include "mysqlconnect.h"
#include <QDebug>
#include <QMessageBox>

MySqlConnect::MySqlConnect(SqlConnect *parent) : SqlConnect(parent)
{
    qDebug()<<QSqlDatabase::drivers();
}

bool MySqlConnect::connect2Sql()
{
    db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("localhost");
    db.setPort(3306);
    db.setDatabaseName("finder_system");
    db.setUserName("root");
    db.setPassword("123456");
    if(db.open())
        return true;
    else
        return false;
}

QString MySqlConnect::returnError()
{
    return db.lastError().text();
}

bool MySqlConnect::login(QString account,QString password)
{
    QSqlQuery query;
    query.prepare("select account,password,IDNumber from login where account=? and password=?");
    query.addBindValue(account);
    query.addBindValue(password);
    if(query.exec()){
        if(query.first()){
            this->account = query.value(0).toString();
            this->password = query.value(1).toString();
            this->IDNumber = query.value(2).toString();
            qDebug()<<account<<password<<IDNumber;
            return true;
        }
        qDebug()<<"login失败，账号或密码错误";
        return false;
    }else{
        qDebug()<<"执行失败"<<query.lastError();
        QMessageBox::warning(nullptr,"login执行失败",query.lastError().text());
        return false;
    }
}

bool MySqlConnect::mregister(QString mIDNumber, QString maccount, QString mpassword)
{
    QSqlQuery query;
    query.prepare("insert into login(account,password,IDNumber) values(?,?,?)");
    query.addBindValue(maccount);
    query.addBindValue(mpassword);
    query.addBindValue(mIDNumber);
    if(query.exec()){
        qDebug()<<"register成功";
        return true;
    }else{
        qDebug()<<"注册失败";
//        QMessageBox::warning(nullptr,"注册失败",query.lastError().text());
        return false;
    }
}

bool MySqlConnect::addItem(QString tag, QString IDNumber, QString itemName)
{
    QSqlQuery query;
    query.prepare("insert into Tag(TagID,IDNumber,ItemName) values(?,?,?)");
    query.addBindValue(tag);
    if(!IDNumber.isEmpty())
        query.addBindValue(IDNumber);
    else
        query.addBindValue(this->IDNumber);
    query.addBindValue(itemName);
    if(query.exec()){
        qDebug()<<"addItem成功";
        return true;
    }else{
        qDebug()<<"addItem失败";
        QMessageBox::warning(nullptr,"新增物品失败",query.lastError().text());
        return false;
    }
}

QStringList MySqlConnect::showItem()
{
    QSqlQuery query;
    QStringList result;
    query.prepare("select TagID,ItemName from Tag where IDNumber=?");
    query.addBindValue(IDNumber);

    if(query.exec()){
        qDebug()<<"showItem成功";
        while(query.next()){
            QString str;
            str.append(query.value(0).toString());
            str.append('#');
            str.append(query.value(1).toString());
            qDebug()<<"tag名称"<<str;
            result.append(str);
        }
        return result;

    }else{
        qDebug()<<"showItem失败";
        QMessageBox::warning(nullptr,"显示物品失败",query.lastError().text());
        return QStringList();
    }
}

QStringList MySqlConnect::searchItem(QString itemName)
{
    QSqlQuery query;
    QStringList result;
    QString preparation = "select StorageID from Tag,TagPosition where Tag.TagID = TagPosition.TagID and ItemName = ? and IDNumber = ?";
    query.prepare(preparation);
    query.addBindValue(itemName);
    query.addBindValue(IDNumber);
    if(query.exec()){
        qDebug()<<"searchItem成功";
        while(query.next()){
            result.append(query.value(0).toString());
        }
        return result;
    }else{
        qDebug()<<"searchItem失败";
        QMessageBox::warning(nullptr,"显示物品失败",query.lastError().text());
        return QStringList();
    }
}

bool MySqlConnect::record(QString itemName,QString actualStorage)
{
    QSqlQuery query;
    if(!actualStorage.isEmpty()){
        QString preparation = "insert into "
                              "record(TagID,SetStorage,ActualStorage,IsException)"
                              "select "
                              "Tag.TagID,TagPosition.StorageID,?,'1' "
                              "from Tag,TagPosition "
                              "where "
                              "Tag.TagID = TagPosition.TagID and Tag.ItemName = ? ";
        query.prepare(preparation);
        query.addBindValue(actualStorage);
        query.addBindValue(itemName);
    }else {
        QString preparation = "insert into "
                              "record(TagID,SetStorage,ActualStorage)"
                              "select "
                              "Tag.TagID,TagPosition.StorageID,TagPosition.StorageID "
                              "from Tag,TagPosition "
                              "where "
                              "Tag.TagID = TagPosition.TagID and Tag.ItemName = ? ";
        query.prepare(preparation);
        query.addBindValue(itemName);
    }
    if(query.exec()){
        qDebug()<<"record成功";
        return true;
    }else{
        qDebug()<<"record失败";
        QMessageBox::warning(nullptr,"增加记录失败",query.lastError().text());
        return false;
    }
}

bool MySqlConnect::updateStatistics()
{
    db.transaction();
    QSqlQuery query;
    if(!query.exec("delete from statistics where 1 = 1")){
        qDebug()<<"更新数据统计表失败1";
        QMessageBox::warning(nullptr,"更新失败","数据库更新失败1");
        db.rollback();
        return false;
    }
    QString test("insert into statistics(TagID,HolderName,Count)"
                 " select a.TagID,person.name,a.searchCount "
                 "from "
                 "(select record.TagID as TagID,count(*) as searchCount,Tag.IDNumber as IDNumber "
                 "from Tag,record where Tag.TagID = record.TagID and Tag.IDNumber = ? "
                 "group by record.TagID) "
                 "as a,person "
                    "where a.IDNumber=person.IDnumber;");
    query.prepare(test);
    /*
     * "insert into statistics(TagID,HolderName,Count)"
               " select a.TagID,person.name,a.searchCount "
               "from "
               "(select record.TagID,count(*) as searchCount,Tag.IDNumber "
               "from Tag,record where Tag.TagID = record.TagID and Tag.IDNumber = ? "
               "group by record.TagID) "
               "as a,person "
                  "where a.IDNumber=person.IDnumber;"
                  */
    query.addBindValue(this->IDNumber);
    if(!query.exec()){
        qDebug()<<"更新数据统计表失败2";
        QMessageBox::warning(nullptr,"更新失败",QString("数据库更新失败2").append(query.lastError().text()));
        db.rollback();
        return false;
    }
    qDebug()<<"更新数据统计表成功";
    db.commit();
    return true;
}

bool MySqlConnect::searchItemByID(QString id)
{
    QSqlQuery query;
    query.prepare("select * from Tag where TagID=? and IDNumber = ?;");
    query.addBindValue(id);
    query.addBindValue(this->IDNumber);
    query.exec();
    if(query.next())
        return true;
    else
        return false;
}

bool MySqlConnect::delItemByID(QString id)
{
    QSqlQuery query;
    query.prepare("delete from Tag where TagID=? and IDNumber=?");
    query.addBindValue(id);
    query.addBindValue(this->IDNumber);
    if(query.exec()){
        return true;
    }else{
        return false;
    }

}

bool MySqlConnect::addPosition(QString id, QString pos)
{
    QSqlQuery query;
    query.prepare("insert into TagPosition(TagID,StorageID) values(?,?);");
    query.addBindValue(id);
    query.addBindValue(pos);


    if(query.exec()){
        qDebug()<<"addPos成功";
        return true;
    }else{
        qDebug()<<"addPos失败";
        QMessageBox::warning(nullptr,"新增物品位置失败",query.lastError().text());
        return false;
    }
}

bool MySqlConnect::delPosition(QString id)
{
    QSqlQuery query;
    query.prepare("delete from TagPosition where TagID= ? ;");
    query.addBindValue(id);

    if(query.exec()){
        qDebug()<<"delPos成功";
        return true;
    }else{
        qDebug()<<"delPos失败";
        QMessageBox::warning(nullptr,"删除物品位置失败",query.lastError().text());
        return false;
    }

}

bool MySqlConnect::addPerson(QString name, QString id, QString gender, int age, QString memory)
{
    if(!searchPersonByID(id)){
        QSqlQuery query;
        query.prepare("insert into person(Name,IDNumber,Gender,Age,MemoryDecline) values(?,?,?,?,?);");
        query.addBindValue(name);
        query.addBindValue(id);
        query.addBindValue(gender);
        query.addBindValue(age);
        query.addBindValue(memory);
        if(query.exec()){
            qDebug()<<"添加成功";
            return true;
        }else{
            QMessageBox::warning(nullptr,"添加失败",query.lastError().text());
            return false;
        }
    }
    QString text = "姓名:";
    text+=name;
    text+=" ID:";
    text+=id;
    text+=" 已在系统中，无需录入";
    QMessageBox::warning(nullptr,"增加失败",text);
    return false;
}

bool MySqlConnect::searchPersonByID(QString id)
{
    QSqlQuery query;
    query.prepare("select * from person where IDNumber = ? ;");
    query.addBindValue(id);
    query.exec();
    if(query.next()){
        return true;
    }else{
        return false;
    }
}

bool MySqlConnect::delPersonByID(QString id)
{
    if(searchPersonByID(id)){
        QSqlQuery query;
        query.prepare("delete from person where IDNumber= ? ;");
        query.addBindValue(id);
        if(query.exec()){
            qDebug()<<"删除人员成功";
            return true;
        }else{
            QMessageBox::warning(nullptr,"删除失败",query.lastError().text());
            return false;
        }
    }else{
        QString test("ID:");
        test+=id;
        test+=" 未在系统中";
        QMessageBox::warning(nullptr,"删除失败",test);
        return false;
    }
}

QString MySqlConnect::getPosByID(QString id)
{
    QSqlQuery query;
    query.prepare("select TagPosition.StorageID "
                  "from Tag,TagPosition "
                  "where Tag.TagID= ? and Tag.TagID = TagPosition.TagID and "
                  "Tag.IDNumber = ?");
    query.addBindValue(id);
    query.addBindValue(IDNumber);
    if(query.exec()){
        qDebug()<<"找到位置成功";
        if(query.first()){
            return query.value(0).toString();
        }
        return QString();
    }else{
        QMessageBox::warning(nullptr,"位置错位",query.lastError().text());
        return QString();
    }

}

bool MySqlConnect::recordByID(QString id, QString actualPos)
{
    QString preparation = "insert into "
                          "record(TagID,SetStorage,ActualStorage,IsException)"
                          "select "
                          "Tag.TagID,TagPosition.StorageID,?,'1' "
                          "from Tag,TagPosition "
                          "where "
                          "Tag.TagID = TagPosition.TagID and Tag.TagID = ? and Tag.IDnumber = ?";
    QSqlQuery query;
    query.prepare(preparation);
    query.addBindValue(actualPos);
    query.addBindValue(id);
    query.addBindValue(IDNumber);
    if(query.exec()){
        qDebug()<<"recordByID成功";
        return true;
    }else{
        qDebug()<<"recordByID失败";
        QMessageBox::warning(nullptr,"增加记录失败",query.lastError().text());
        return false;
    }
}

QString MySqlConnect::searchUsernameByID(QString id)
{
    QSqlQuery query;
    query.prepare("select Name from person where IDNumber = ? ;");
    query.addBindValue(id);
    query.exec();
    if(query.first()){
        return query.value(0).toString();
    }else{
        return QString();
    }

}
