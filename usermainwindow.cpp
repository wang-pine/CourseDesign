#include "usermainwindow.h"
#include <QDebug>
UserMainWindow::UserMainWindow(QWidget *parent):
    QMainWindow(parent)
{
    this->setWindowTitle("主界面");
    this->resize(600,500);
    tipLbl = new QLabel(this);
    tipLbl->setText(tr("请选择功能"));
    funLabel = new QLabel(this);
    //qDebug()<< "MainWindow里面loginJud变化值"<< this->loginJud << endl;
    funLabel->setText(tr("user"));
    funLabel->move(20,60);
}
