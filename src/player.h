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
#ifndef PLAYER_H
#define PLAYER_H
#include <QDialog>
#include <QFileDialog>
#include <QDebug>

namespace Ui {
  class Player;
}

class Player : public QDialog
{
  Q_OBJECT

public:
  explicit Player(QWidget *parent = 0);
  ~Player();
   void genPlayer();
   void raceStatBoost(QString playersRace);
   void checkLevel(int experience);
   void checkHp(QString playerClass);
   void checkSpeed(QString playersRace);


   // set of functions for loading and saving characters.
   void loadPlayer();
   void savePlayer(QString name, QString playerClass, QString alignment, QString playersRace, QString playersSubRace, QString background, QString BackgroundText, QString hitDice, QString dugeonPack, int experience, short level, short initative, short armorClass, short speed, short Proficiency, short hp, short strenght, short intelligence, short dexterity, short wisdom, short constitution, short charisma);
   void resetPlayer(); // resets the player data

   QString filePath = "";

   // Probaly not the best choice, but
   // Hey it works for now.
   QString name  = "";
   QString playerClass  = "";
   QString alignment = "";
   QString playersRace = "";
   QString playersSubRace = "";
   QString Background = "";
   QString BackgroundText = "";
   QString hitDice = "";
   QString dugeonPack = "";
   int experience = 0;
   short int level = 0;
   short int initative = 0;
   short int armorClass = 0;
   short int speed = 0;
   short int Proficiency = 0;
   short int hp = 0;
   short int strenght = 0;
   short int intelligence = 0;
   short int dexterity = 0;
   short int wisdom = 0;
   short int constitution = 0;
   short int charisma = 0;

private slots:
   void on_bt_genStats_clicked();
   void on_bt_rollHp_clicked();
   void on_bt_done_clicked();

private:
  Ui::Player *ui;

};

#endif // PLAYER_H
