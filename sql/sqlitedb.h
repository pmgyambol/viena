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
    enum RowEntry { username, realname, email, entryID, entryTitle, entryYear, entryGenre, entryRuntime };

    SQLiteDB(const QString& path);

    bool addUser(const QString& username, const QString& realName, const QString& email);
    void updateUserModel(QSqlQueryModel* model);
};

#endif // SQLITEDB_H
