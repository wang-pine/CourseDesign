#include "user_gamble.h"

user_gamble::user_gamble(QWidget *parent):
    QDialog(parent)
{
    this->setWindowTitle(tr("user_gamble"));
    this->resize(350,300);
    this->setParent(parent);
    //this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool);
    this->hide();
    this->setStyleSheet("background-color:red");
    //this -> show();
}
void user_gamble::showGamble()
{
    this -> show();
}
void user_gamble::hideGamble()
{
    this->hide();
}
