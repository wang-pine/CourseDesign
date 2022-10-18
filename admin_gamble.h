#ifndef ADMIN_GAMBLE_H
#define ADMIN_GAMBLE_H

#include <QMainWindow>
#include <QWidget>
#include <QDialog>

class admin_gamble:QDialog
{
public:
    explicit admin_gamble(QWidget *parent = 0);
    void showGamble();
    void hideGamble();
};

#endif // ADMIN_GAMBLE_H
