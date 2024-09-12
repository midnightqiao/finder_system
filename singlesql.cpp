#include "singlesql.h"

SingleSql::SingleSql(QObject *parent) : QObject(parent)
{

}

SqlConnect* SingleSql::sql = nullptr;

SqlConnect *SingleSql::getSql()
{
    if(sql == nullptr)
    {
        sql = new MySqlConnect();
        return sql;
    }
    else
        return sql;
}
