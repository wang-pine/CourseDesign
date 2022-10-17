#include "loginwindow.h"
#include "usermainwindow.h"
#include "adminmainwindow.h"
#include <QApplication>
#include<QDebug>
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    LoginWindow login;
    login.show();
    AdminMainWindow *adminwin = new AdminMainWindow();
    UserMainWindow *userwin = new UserMainWindow();
    if (login.exec() == QDialog::Accepted)//调用login.exec()，阻塞主控制流，直到完成返回，继续执行主控制流
    {
        //main->setWindowTitle("欢迎界面");//设置窗体标题
        qDebug()<< "login窗口对象里面loginJud接收到值"<< login.loginJud << endl;
       if(login.loginJud == 1){
           adminwin ->show();
       }else if(login.loginJud == 2){
           userwin -> show();
       }
        return app.exec();
    }
    else return 0;
}
