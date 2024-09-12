#include "statisticsview.h"
#include "ui_statisticsview.h"
#include <QFile>
#include <QFileDialog>
#include <QDebug>
#include "singlesql.h"
#include <QTextStream>
#include <QMessageBox>

StatisticsView::StatisticsView(QWidget *parent) :
    QTableView(parent),
    ui(new Ui::StatisticsView)
{
    ui->setupUi(this);
    model = new QSqlTableModel(this);
    model->setTable("statistics");
    model->setSort(2,Qt::DescendingOrder);

//    QString fil = QString();
//    model->setFilter(fil);
    model->select();
    setModel(model);

    setEditTriggers(QAbstractItemView::NoEditTriggers);


    connect(ui->pushButton_2,&QPushButton::clicked,this,[=](){
        if(!SingleSql::getSql()->updateStatistics()){
            QMessageBox::warning(this,"更新失败","数据库更新失败");
        }
    });


    connect(ui->pushButton,&QPushButton::clicked,this,[=](){
//        int i=0;
//        QString filename1("C:\\ProgramData\\MySQL\\MySQL Server 8.0\\Uploads\\b%1.xls");
//        QString filename2= filename1.arg(i);
//        while(QFile::exists(filename2)){
//            i++;
//            qDebug()<<filename2<<"     file exists;";
//            filename2=filename1.arg(i);
//        }
//        qDebug()<<filename2;
//        QString saveName = QFileDialog::getSaveFileName(this,"保存文件",QString(),tr("xlsx Files(*.xls *.xlsx)"));
//        qDebug()<<saveName;
//        QSqlQuery query;
////        if(query.exec("select * from record  into outfile 'C:\\ProgramData\\MySQL\\MySQL Server 8.0\\Uploads\\b5.xls';")){
////            qDebug()<<"导出statistic成功";
////        }else{
////            qDebug()<<"执行失败"<<query.lastError().text();
////        }

//        query.prepare("select * from record  into outfile ? ;");
//        query.addBindValue(filename2);
//        if(query.exec()){
//            qDebug()<<"数据库文件已到位置1";
//        }else{
//            qDebug()<<"数据库文件没到位置1，执行失败"<<query.lastError().text();
//        }
//tr("xlsx Files(*.xls *.xlsx)")
          QString saveName = QFileDialog::getSaveFileName(this,"保存文件",QString(),tr("text(*.txt)"));
          if(saveName.isEmpty()){
              return;
          }else{
              QFile file(saveName);
              if(file.open(QIODevice::WriteOnly)){
                  qDebug()<<"文件创建成功";
              }else{
                  qDebug()<<"文件创建成功";
                  return;
              }
              QTextStream stream(&file);
              stream<<QString("所有人")<<'\t'<<QString("物品ID")<<'\t'<<QString("查询次数")<<'\t'<<"\n\n";
              for(int i=0;i<model->rowCount();i++){
                  for(int j=0;j<model->columnCount();j++){
//                      stream<<
                        stream<<model->data(model->index(i,j)).toString();
                        stream<<'\t';
                  }
                  stream<<'\n';
              }
              file.close();
          }

    });
}

StatisticsView::~StatisticsView()
{
    delete ui;
}

void StatisticsView::updateStatistic()
{
    model->select();
    setModel(model);
}
