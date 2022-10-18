#ifndef USERMAINWINDOW_H
#define USERMAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QDialog>
#include <QPushButton>

#include "user_buy.h"
#include "user_gamble.h"
class UserMainWindow:public QMainWindow
{
public:
    explicit UserMainWindow(QWidget *parent = 0);
    void setUserJud();
signals:

public slots:
    void user_buy();
    void user_gamble();
private:
    QLabel *tipLbl;  //"欢迎登录"标签
    QLabel *tipFunction;//"功能提示"标签
    QLabel *funLabel;
    int loginJud; //判断登录者是admin还是user
    QPushButton *userGambleBtn;     //抽奖按钮
    QPushButton *userBuyBtn;        //购物按钮
    class::user_buy *buy;
    class::user_gamble *gamble;

    int userJud;                //用户判定按钮
};

#endif // USERMAINWINDOW_H
