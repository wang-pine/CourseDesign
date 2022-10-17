#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QMessageBox>
#include <QDebug>
LoginWindow::LoginWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    //设置窗体标题
    this->setWindowTitle(tr("登录界面"));
    this->resize(350,350);
    //用户名Label
    userNameLbl = new QLabel(this);   //new一个标签对象
    userNameLbl->move(70,80);         //移动到(70,80)位置(Label左上角坐标，相对于父窗体)
    userNameLbl->setText("用户名:");  //设置标签文本

    //用户名输入框
    userNameLEd = new QLineEdit(this);
    userNameLEd->move(120,80);
    userNameLEd->setPlaceholderText(tr("请输入用户名!"));//占位符

    //密码Label
    pwdLbl = new QLabel(this);
    pwdLbl->move(80,130);
    pwdLbl->setText("密码:");

    //密码输入框
    pwdLEd = new QLineEdit(this);
    pwdLEd->move(120,130);
    pwdLEd->setPlaceholderText("请输入密码!");
    pwdLEd->setEchoMode(QLineEdit::Password);//输入的密码以圆点显示

    //登录按钮
    loginBtn = new QPushButton(this);
    loginBtn->move(80,200);
    loginBtn->setText("登录");

    //退出按钮
    exitBtn = new QPushButton(this);
    exitBtn->move(170,200);
    exitBtn->setText("退出");

    //忘记密码
    forgetPwd = new QPushButton(this);
    forgetPwd->move(80,230);
    forgetPwd->setText("忘记密码");

    //注册账号
    registerAccount = new QPushButton(this);
    registerAccount->move(170,230);
    registerAccount->setText("注册账号");

    //单击登录按钮时 执行 LoginForm::login 槽函数(自定义)；单击退出按钮时 执行 LoginForm::close 槽函数(窗体的关闭函数，不用自己写)
    connect(loginBtn,&QPushButton::clicked,this,&LoginWindow::login);
    connect(exitBtn,&QPushButton::clicked,this,&LoginWindow::close);

}

LoginWindow::~LoginWindow()
{
    delete ui;
}
void LoginWindow::login()
{
    //获得userNameLEd输入框的文本：userNameLEd->text()；
    //trimmed()去掉前后空格
    //tr()函数，便于汉化
    this->loginJud = 0;
    qDebug() << "loginJud在loginWindow的cpp文件中的初始值" << this->loginJud << endl;
    if(userNameLEd->text().trimmed() == tr("admin") && pwdLEd->text() == tr("admin"))
    {
        accept();//关闭窗体，并设置返回值为Accepted
        this->loginJud = 1;
        qDebug() <<"loginWindow里面对loginJud赋初值"<< this->loginJud << endl;
    }else if(userNameLEd->text().trimmed() == tr("user") && pwdLEd->text() == tr("user"))
    {

        accept();//同上
        this->loginJud = 2;
        qDebug() <<"loginWindow里面对loginJud赋初值"<< this->loginJud << endl;
    }
    else
    {                              //标题              内容                OK按钮
        QMessageBox::warning(this, tr("警告！"),tr("用户名或密码错误！"),QMessageBox::Yes);
        // 清空输入框内容
        userNameLEd->clear();
        pwdLEd->clear();
        //光标定位
        userNameLEd->setFocus();
    }
}
