#include "user_buy.h"

user_buy::user_buy(QWidget *parent):
    QDialog(parent)
{
    this->setWindowTitle(tr("user_buy"));
    this->resize(350,300);
    this->setParent(parent);
    //this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool);
    this->hide();
    this->setStyleSheet("background-color:blue");
    //this -> show();
}
void user_buy::showBuy()
{
    this -> show();
}
void user_buy::hideBuy()
{
    this->hide();
}
