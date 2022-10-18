#ifndef ADMIN_USER_H
#define ADMIN_USER_H

#define TABLE_ROWS 10 //设置表格行数
#define TABLE_COLUMNS 5 //设置列数

#include <QMainWindow>
#include <QDialog>
#include <QWidget>


class admin_user:QDialog
{
public:
    explicit admin_user(QWidget *parent = 0);
    void showUser();
    void hideUser();

};

#endif // ADMIN_USER_H
