#ifndef ADMIN_USER_H
#define ADMIN_USER_H

#define TABLE_ROWS 10 //设置表格行数
#define TABLE_COLUMNS 5 //设置列数

#include <QMainWindow>
#include <QDialog>
#include <QWidget>
#include <QPushButton>
#include <QStandardItem>
#include <QTableView>
class admin_user:public QDialog
{


public slots:
    void addRowsSolts();
    void saveFile();

public:
    explicit admin_user(QWidget *parent = 0);
    void showUser();    //显示窗口
    void hideUser();    //关闭窗口
    void autoSave();    //自动保存函数

    int getVaribleRows();
    void setVaribleRows();
    QPushButton *saveBtn;   //保存按钮
    QPushButton *loadBtn;   //加载按钮
    QPushButton *addRowsBtn;   //增加行数按钮

    QStandardItemModel *model;  //新建数据模型
    QTableView *tableView;      //数据模型的显示

private:
    int varibleRows;        //设置可变的行数，用于动态的增减,初始值为10

};

#endif // ADMIN_USER_H
