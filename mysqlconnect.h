#ifndef MYSQLCONNECT_H
#define MYSQLCONNECT_H

#include <QObject>
#include <sqlconnect.h>
#include <QSqlDatabase>
#include <QSqlRecord>
#include <QSqlQuery>


class MySqlConnect : public SqlConnect
{
    Q_OBJECT
public:
    explicit MySqlConnect(SqlConnect *parent = nullptr);

    bool connect2Sql () override;

    QString returnError() override;

    bool login(QString account,QString password) override;

    bool mregister(QString mIDNumber, QString maccount, QString mpassword) override;

    bool addItem(QString tag, QString IDNumber, QString itemName) override;

    QStringList showItem() override;

    QStringList searchItem(QString itemName) override;

    bool record(QString itemName,QString actualStorage = QString()) override;

    bool updateStatistics() override;

    bool searchItemByID(QString id) override;

    bool delItemByID(QString id) override;


    bool addPosition(QString id, QString pos) override;

    bool delPosition(QString id) override;

    bool addPerson(QString name, QString id, QString gender, int age, QString memory =QString()) override;

    bool searchPersonByID(QString id) override;

    bool delPersonByID(QString id) override;

    QString getPosByID(QString id) override;

    bool recordByID(QString id, QString actualPos) override;

    QString searchUsernameByID(QString id) override;
signals:

};

#endif // MYSQLCONNECT_H
