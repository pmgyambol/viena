#include "sql/sqlitedb.h"

bool SQLiteDB::addUser(const QString& username, const QString& realName, const QString& email)
{
    QSqlQuery query;

    query.prepare("INSERT INTO users "
                  "VALUES (:username, :realName, :email)");
    query.bindValue(":username", username);
    query.bindValue(":realName", realName);
    query.bindValue(":email", email);

    return query.exec();
}
