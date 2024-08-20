#include "sql/sqlitedb.h"


SQLiteDB::SQLiteDB(const QString& path)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(path);
    const bool success = db.open();

    if (!success)
    {
       qDebug() << "Database connection error:" << db.lastError();
    }
}


bool SQLiteDB::addUser(const QString& username, const QString& realName, const QString& email)
{
    QSqlQuery query;

    query.prepare("INSERT INTO users VALUES (:username, :realName, :email)");
    query.bindValue(":username", username);
    query.bindValue(":realName", realName);
    query.bindValue(":email", email);

    return query.exec();
}


void SQLiteDB::updateUserModel(QSqlQueryModel* model)
{
    model->clear();
    model->setQuery("SELECT username, fullname, email FROM users");
}
