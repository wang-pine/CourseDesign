#include "adminmainwindow.h"
#include "QDebug"
#include <QAction>

AdminMainWindow::AdminMainWindow(QWidget *parent):
    QMainWindow(parent)
{
    setAdminJud();
    user = new admin_user(this);
    goods = new admin_goods(this);
    gamble = new admin_gamble(this);

    /*在user中创建表格*/


    //user = show();
    this->setWindowTitle("主界面");
    this->resize(600,500);
    tipLbl = new QLabel(this);
    tipLbl->setText(tr("请选择功能"));
    funLabel = new QLabel(this);
    //qDebug()<< "MainWindow里面loginJud变化值"<< this->loginJud << endl;
    funLabel->setText(tr("admin"));
    funLabel->move(40,40);
    userManageBtn = new QPushButton(this);
    userManageBtn->setText(tr("用户管理"));
    userManageBtn->move(0,90);
    goodsManageBtn = new QPushButton(this);
    goodsManageBtn->setText(tr("商品管理"));
    goodsManageBtn->move(0,120);
    gambleManageBtn = new QPushButton(this);
    gambleManageBtn->setText(tr("抽奖管理"));
    gambleManageBtn->move(0,150);
    connect(userManageBtn,&QPushButton::clicked,this,&AdminMainWindow::admin_userManage);
    connect(goodsManageBtn,&QPushButton::clicked,this,&AdminMainWindow::admin_goodsManage);
    connect(gambleManageBtn,&QPushButton::clicked,this,&AdminMainWindow::admin_gambleManage);


//    if(adminJud == 1){
//        qDebug() << "adminJud目前已经是1" << endl;
//    }else if(adminJud == 2){
//        qDebug() << "adminJud目前已经是2" << endl;
//    }else if(adminJud == 3){
//        qDebug() << "adminJud目前已经是3" << endl;
//    }else{
//        qDebug() << "adminJud 仍然是0" << endl;
//    }
}
void AdminMainWindow::setAdminJud(){
    adminJud = 0;
    qDebug() << "adminJud赋予初值" << adminJud << endl;
};
void AdminMainWindow::admin_userManage(){
    adminJud = 1;
    qDebug() << "adminJud在按下用户管理之后的数值" << adminJud <<endl;
    user->showUser();
    goods->hideGoods();
    gamble->hideGamble();


};
void AdminMainWindow::admin_goodsManage(){
    adminJud = 2;
    qDebug() << "adminJud在按下商品管理之后的数值" << adminJud <<endl;
    user->hideUser();
    goods->showGoods();
    gamble->hideGamble();
};
void AdminMainWindow::admin_gambleManage(){
    adminJud = 3;
    qDebug() << "adminJud在按下抽奖管理之后的数值" << adminJud <<endl;
    user->hideUser();
    goods->hideGoods();
    gamble->showGamble();
};
