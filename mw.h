/*
KNOW ALL MEN BY THESE PRESENTS: 'i': man [Dakota James Owen Keeler]
Copyright this software in the year of our lord 2017 under the GNU
Public License version 3.
Contact: bearzrobotics@gmail.com

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef MW_H
#define MW_H

#include <QMainWindow>
#include "dice.h"
#include "player.h"

namespace Ui {
class mw;
}

class mw : public QMainWindow
{
    Q_OBJECT

public:
    explicit mw(QWidget *parent = 0);
    ~mw();

private slots:
    void on_actionNew_triggered();
    void on_actionDice_triggered();
    void on_bt_dice_clicked();
    void on_bt_new_clicked();
    void on_bt_update_clicked();
    void on_bt_save_clicked();
    void on_bt_open_clicked();

private:
    Ui::mw *ui;
    dice *Dice;
    Player *player;
    void newChar();
    void rollDice();
    void statUpdate();
};

#endif // MW_H
