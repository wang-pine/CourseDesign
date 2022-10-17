#ifndef USERMAINWINDOW_H
#define USERMAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QDialog>
class UserMainWindow:public QMainWindow
{
public:
    explicit UserMainWindow(QWidget *parent = 0);
signals:

public slots:
private:
    QLabel *tipLbl;  //"欢迎登录"标签
    QLabel *tipFunction;//"功能提示"标签
    QLabel *funLabel;
    int loginJud; //判断登录者是admin还是user
};

#endif // USERMAINWINDOW_H
