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
#ifndef DICE_H
#define DICE_H

#include <QDialog>

namespace Ui {
  class dice;
}

class dice : public QDialog
{
  Q_OBJECT

public:
  explicit dice(QWidget *parent = 0);
  ~dice();
  void roll(int dN);
  void reset();

private slots:
  void on_bt_d2_clicked();
  void on_bt_d4_clicked();
  void on_bt_d6_clicked();
  void on_bt_d10_clicked();
  void on_bt_d12_clicked();
  void on_bt_d20_clicked();
  void on_bt_d100_clicked();
  void on_bt_clear_clicked();

private:
  Ui::dice *ui;
  int added_rolls;
  int lastRoll;
  int TotalRolls;
  int totalScore;
  int nTimes;

};

#endif // DICE_H
