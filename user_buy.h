#ifndef USER_BUY_H
#define USER_BUY_H

#include <QMainWindow>
#include <QWidget>
#include <QDialog>

class user_buy:QDialog
{
public:
    explicit user_buy(QWidget *parent = 0);
    void showBuy();
    void hideBuy();
};
#endif // USER_BUY_H
