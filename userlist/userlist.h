#ifndef USERLIST_H
#define USERLIST_H

#include <QMainWindow>

#include <QDebug>
#include <QListWidgetItem>
#include <QTreeWidgetItem>
#include <QTableWidgetItem>

namespace Ui {
class UserList;
}

class UserList : public QMainWindow
{
	Q_OBJECT

public:
	explicit UserList(QWidget *parent = 0);
	~UserList();

private:
	Ui::UserList *ui;
};

#endif // USERLIST_H
