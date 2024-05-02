#ifndef SQLCONNECT_H
#define SQLCONNECT_H

#include <QObject>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>

class SqlConnect : public QObject
{
    Q_OBJECT
public:
    explicit SqlConnect(QObject *parent = nullptr);
    QSqlDatabase db;
    virtual bool connect2Sql() = 0;
    virtual QString returnError() = 0;
    virtual bool login(QString account,QString password)=0;
    QString account;
    QString password;
    QString IDNumber;

    virtual bool mregister(QString mIDNumber,QString maccount,QString mpassword) = 0;

    virtual bool addItem(QString tag,QString IDNumber,QString itemName) =0;

    virtual QStringList showItem() = 0;

    virtual QStringList searchItem(QString itemName) = 0;

    virtual bool record(QString itemName,QString actualStorage=QString()) =0;

    virtual bool updateStatistics() = 0;

    virtual bool searchItemByID(QString id) =0;

    virtual bool delItemByID(QString id)=0;

    virtual bool addPosition(QString id,QString pos) =0;

    virtual bool delPosition(QString id) = 0;

    virtual bool addPerson(QString name,QString id,QString gender,int age,QString memory=QString()) = 0;

    virtual bool searchPersonByID(QString id)=0;

    virtual bool delPersonByID(QString id) = 0;

    virtual QString getPosByID(QString id) = 0;

    virtual bool recordByID(QString id,QString actualPos) =0;

    virtual QString searchUsernameByID(QString id) =0;

    virtual ~SqlConnect();


//    virtual bool addPerson()
signals:

};

#endif // SQLCONNECT_H
