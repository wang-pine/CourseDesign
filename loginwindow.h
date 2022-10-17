#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class LoginWindow; }
QT_END_NAMESPACE

class LoginWindow : public QDialog
{
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();
    int loginJud;               //用于判定登录的是user还是admin
signals:

public slots:
    void login();//点击登录按钮后执行的槽函数

private:
    QLabel *userNameLbl;         //"用户名"标签
    QLabel *pwdLbl;              //"密码"标签
    QLineEdit *userNameLEd;      //用户名编辑行
    QLineEdit *pwdLEd;           //密码编辑行
    QPushButton *loginBtn;       //登录按钮
    QPushButton *exitBtn;        //退出按钮
    QPushButton *forgetPwd;      //忘记密码
    QPushButton *registerAccount;//注册账号
    Ui::LoginWindow *ui;
};
#endif // LOGINWINDOW_H
