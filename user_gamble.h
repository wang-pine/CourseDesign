#ifndef USER_GAMBLE_H
#define USER_GAMBLE_H

#include <QMainWindow>
#include <QWidget>
#include <QDialog>

class user_gamble:QDialog
{
public:
    explicit user_gamble(QWidget *parent = 0);
    void showGamble();
    void hideGamble();
};
#endif // USER_GAMBLE_H
