#include "admin_user.h"
#include <QDebug>
#include <QStandardItemModel>
#include <QTableView>
#include <QTableWidgetItem>
#include <string>
#include <QObject>
#include <vector>

admin_user::admin_user(QWidget *parent):
    QDialog(parent)
{
    addRowsBtn = new QPushButton(this);
    addRowsBtn -> setText("增加行数");
    addRowsBtn -> move(0,300);

    this->setWindowTitle(tr("admin_user"));
    this->resize(400,300);
    this->setParent(parent);
    this->setFixedSize(400,330);
    //this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool);
    this->hide();
    this->setStyleSheet("background-color:red");
    //this -> show();

    //QStandardItemModel *model=new QStandardItemModel(TABLE_ROWS,TABLE_COLUMNS,this);

    model=new QStandardItemModel(this); //设置数据模型
    tableView=new QTableView(this);
    tableView->setModel(model);     //使用tableView对数据模型进行显示
    tableView -> resize(400,300);

    //设置表头
    model->setHorizontalHeaderItem(0,new QStandardItem(tr("ID")));
    model->setHorizontalHeaderItem(1,new QStandardItem(tr("name")));
    model->setHorizontalHeaderItem(2,new QStandardItem(tr("info")));
    model->setHorizontalHeaderItem(3,new QStandardItem(tr("score")));
    model->setHorizontalHeaderItem(4,new QStandardItem(tr("Lv")));
    //设置列宽
    tableView->setColumnWidth(0,80);
    tableView->setColumnWidth(1,80);
    tableView->setColumnWidth(2,50);
    tableView->setColumnWidth(3,60);
    tableView->setColumnWidth(4,50);

    model->setItem(1,0,new QStandardItem("123"));
    QString a[5] = {"000","111","222","333","444"};
    for(int i = 0;i < 5; i ++){
        model->setItem(2,i,new QStandardItem(a[i]));
    }

    setVaribleRows();//获取当前行数

    connect(addRowsBtn,&QPushButton::clicked,this,&admin_user::addRowsSolts);
}
void admin_user::showUser()
{
    this -> show();

}
void admin_user::hideUser()
{
    this->hide();

}
void admin_user::addRowsSolts(){
    qDebug() << "在addRowsSlots函数中开始varibleRows的值是" << this->varibleRows << endl;
    QString a[5] = {"000","111","222","333","444"};
    for(int i = 0;i < 5; i ++){
        model->setItem(getVaribleRows(),i,new QStandardItem(a[i]));
    }
    this->varibleRows += 1;
    qDebug() << "在addRowsSlots函数中结束varibleRows的值是" << this->varibleRows << endl;
}
int admin_user::getVaribleRows(){
    qDebug() << "目前情况varibleRows的值是" << varibleRows << endl;
    return varibleRows;

}
void admin_user::setVaribleRows(){
    varibleRows = tableView->model()->rowCount();
    qDebug() << "varibleRows当前的值" << varibleRows << endl;
}
void admin_user::saveFile(){
    //此处填写文件保存函数


    qDebug() << "调用文件保存函数" << endl;
}
void admin_user::autoSave(){
    //在此处实现输入检测

    saveFile();
    qDebug() << "调用自动保存函数" << endl;
}
