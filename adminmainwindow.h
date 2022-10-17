#ifndef ADMINMAINWINDOW_H
#define ADMINMAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QDialog>
class AdminMainWindow:public QMainWindow
{
public:
    explicit AdminMainWindow(QWidget *parent = 0);
signals:

public slots:
private:
    QLabel *tipLbl;  //"欢迎登录"标签
    QLabel *tipFunction;//"功能提示"标签
    QLabel *funLabel;
    int loginJud; //判断登录者是admin还是user
};

#endif // ADMINMAINWINDOW_H
