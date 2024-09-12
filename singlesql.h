#ifndef SINGLESQL_H
#define SINGLESQL_H

#include <QObject>
#include "sqlconnect.h"
#include "mysqlconnect.h"


class SingleSql : public QObject
{
    Q_OBJECT
private:
    explicit SingleSql(QObject *parent = nullptr);
    static SqlConnect* sql ;
public:
    static SqlConnect* getSql();

signals:

};



#endif // SINGLESQL_H
