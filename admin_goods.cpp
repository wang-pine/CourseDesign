#include "admin_goods.h"

admin_goods::admin_goods(QWidget *parent):
    QDialog(parent)
{
    this->setWindowTitle(tr("admin_goods"));
    this->resize(350,300);
    this->setParent(parent);
    this->setFixedSize(400,300);
    //this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool);
    this->hide();
    this->setStyleSheet("background-color:blue");
    //this -> show();
}
void admin_goods::showGoods()
{
    this -> show();
}
void admin_goods::hideGoods()
{
    this->hide();
}
