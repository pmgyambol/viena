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
}

MainWindow::~MainWindow()
{
    delete ui;
}
