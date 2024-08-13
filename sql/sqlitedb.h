#ifndef SQLITEDB_H
#define SQLITEDB_H

#include <QDebug>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QVariant>

class SQLiteDB
{
public:
    SQLiteDB(const QString& path);

    bool addUser(const QString& username, const QString& realName, const QString& email);
};

#endif // SQLITEDB_H
