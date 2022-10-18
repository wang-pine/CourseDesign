#include "usermainwindow.h"
#include <QDebug>

UserMainWindow::UserMainWindow(QWidget *parent):
    QMainWindow(parent)
{
    setUserJud();
    buy = new class::user_buy(this);
    gamble = new class::user_gamble(this);
    this->setWindowTitle("主界面");
    this->resize(600,500);
    tipLbl = new QLabel(this);
    tipLbl->setText(tr("请选择功能"));
    funLabel = new QLabel(this);
    //qDebug()<< "MainWindow里面loginJud变化值"<< this->loginJud << endl;
    funLabel->setText(tr("user"));
    funLabel->move(20,60);

    userBuyBtn = new QPushButton(this);
    userBuyBtn -> setText("购物");
    userBuyBtn -> move(0,90);

    userGambleBtn = new QPushButton(this);
    userGambleBtn ->setText("抽奖");
    userGambleBtn ->move(0,120);


    connect(userBuyBtn,&QPushButton::clicked,this,&UserMainWindow::user_buy);
    connect(userGambleBtn,&QPushButton::clicked,this,&UserMainWindow::user_gamble);
}
void UserMainWindow::setUserJud(){
    userJud = 0;
    qDebug() << "userJud设置初始值" << userJud <<endl;
};
void UserMainWindow::user_buy(){
    userJud = 1;
    qDebug() << "userJud在buy按钮中设置值" << userJud << endl;
    buy ->showBuy();
    gamble->hideGamble();
}
void UserMainWindow::user_gamble(){
    userJud = 2;
    qDebug() << "userJud在gamble按钮中设置值" << userJud << endl;
    buy->hideBuy();
    gamble->showGamble();
};
