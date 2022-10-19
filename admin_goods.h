#ifndef ADMIN_GOODS_H
#define ADMIN_GOODS_H

#include <QMainWindow>
#include <QDialog>
#include <QWidget>

class admin_goods:public QDialog
{
public:
    explicit admin_goods(QWidget *parent = 0);
    void showGoods();
    void hideGoods();

};

#endif // ADMIN_GOODS_H
