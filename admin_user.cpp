#include "admin_user.h"
#include <QDebug>
#include <QStandardItemModel>
#include <QTableView>
#include <QTableWidgetItem>

admin_user::admin_user(QWidget *parent):
    QDialog(parent)
{
    this->setWindowTitle(tr("admin_user"));
    this->resize(400,300);
    this->setParent(parent);
    this->setFixedSize(400,300);
    //this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool);
    this->hide();
    this->setStyleSheet("background-color:red");
    //this -> show();
    QStandardItemModel *model=new QStandardItemModel(TABLE_ROWS,TABLE_COLUMNS,this);
    QTableView *tableView=new QTableView(this);
    tableView->setModel(model);
    tableView -> resize(400,300);
    //设置表头
    model->setHeaderData(0,Qt::Horizontal,tr("ID"));
    model->setHeaderData(1,Qt::Horizontal,tr("name"));
    model->setHeaderData(2,Qt::Horizontal,tr("info"));
    model->setHeaderData(3,Qt::Horizontal,tr("score"));
    model->setHeaderData(4,Qt::Horizontal,tr("Lv"));
    //设置列宽
    tableView->setColumnWidth(0,80);
    tableView->setColumnWidth(1,100);
    tableView->setColumnWidth(2,100);
    tableView->setColumnWidth(3,100);
    tableView->setColumnWidth(4,100);

    model->setItem(0,0,new QStandardItem("123"));

}
void admin_user::showUser()
{
    this -> show();


}
void admin_user::hideUser()
{
    this->hide();
}
