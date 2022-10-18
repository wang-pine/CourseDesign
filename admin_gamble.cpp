#include "admin_gamble.h"

admin_gamble::admin_gamble(QWidget *parent):
    QDialog(parent)
{
    this->setWindowTitle(tr("admin_gamble"));
    this->resize(350,300);
    this->setParent(parent);
    this->setFixedSize(400,300);
    //this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool);
    this->hide();
    this->setStyleSheet("background-color:yellow");
    //this -> show();
}
void admin_gamble::showGamble()
{
    this -> show();
}
void admin_gamble::hideGamble()
{
    this->hide();
}
