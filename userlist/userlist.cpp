#include "userlist.h"
#include "ui_userlist.h"

UserList::UserList(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::UserList)
{
	ui->setupUi(this);

	// Table Widget
	QTableWidgetItem* tableItem = new QTableWidgetItem;
	tableItem->setText("Testing");
	ui->tableWidget->setItem(0, 0, tableItem);

	QTableWidgetItem* tableItem2 = new QTableWidgetItem;
	tableItem2->setText("Testing");
	ui->tableWidget->setItem(1, 2, tableItem2);
}

UserList::~UserList()
{
	delete ui;
}
