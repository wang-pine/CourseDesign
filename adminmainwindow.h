#ifndef ADMINMAINWINDOW_H
#define ADMINMAINWINDOW_H



#include <QMainWindow>
#include <QLabel>
#include <QDialog>
#include <QPushButton>

#include "admin_user.h"
#include "admin_goods.h"
#include "admin_gamble.h"

class AdminMainWindow:public QMainWindow
{
public:
    explicit AdminMainWindow(QWidget *parent = 0);
    void setAdminJud();
signals:

public slots:
    void admin_userManage();
    void admin_goodsManage();
    void admin_gambleManage();
private:
    QLabel *tipLbl;  //"欢迎登录"标签
    QLabel *tipFunction;//"功能提示"标签
    QLabel *funLabel;
    int loginJud; //判断登录者是admin还是user
    QPushButton *userManageBtn; //用户管理Btn
    QPushButton *goodsManageBtn;//商品管理Btn
    QPushButton *gambleManageBtn;//抽奖管理Btn
    admin_user *user;           //创建子类user管理
    admin_goods *goods;         //创建子类goods管理
    admin_gamble *gamble;       //创建子类抽奖管理
    int adminJud;               //用于判定admin选择了哪个功能
};

#endif // ADMINMAINWINDOW_H
