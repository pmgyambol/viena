#include "mainwindow.h"
#include "ui_mainwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
class QAction;
class QMdiArea;
class QMenu;
}
QT_END_NAMESPACE


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow),
    dbManager("db/viena.db")
{
    ui->setupUi(this);

    mdiArea = new QMdiArea;
    setCentralWidget(mdiArea);
    connect(mdiArea, SIGNAL(subWindowActivated(QMdiSubWindow*)), this, SLOT(updateActions()));

    createActions();
    createMenus();
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::updateActions()
{
}


void MainWindow::createMenus()
{
    // order here define the order in the final look
    usersMenu = menuBar()->addMenu(tr("&User"));
    usersMenu->addAction( newUserAction);
    usersMenu->addAction(listUserAction);
}


void MainWindow::createActions()
{
    newUserAction = new QAction(tr("&New"), this);
    connect(newUserAction, SIGNAL(triggered()), this, SLOT(newUser()));

    listUserAction = new QAction(tr("&List"), this);
    connect(listUserAction, SIGNAL(triggered()), this, SLOT(listUsers()));
}


void MainWindow::listUsers()
{
    UserList *userList = new UserList;
    QMdiSubWindow *subWindow = mdiArea->addSubWindow(userList);
    subWindow->show();
}


void MainWindow::newUser()
{
    NewUserDialog newUserDialog(this, &dbManager);
    newUserDialog.setModal(true);
    newUserDialog.exec();
}
