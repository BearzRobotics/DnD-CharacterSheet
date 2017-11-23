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
#include "mw.h"
#include "ui_mw.h"
#include "player.h"

#include <QDebug>


mw::mw(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mw)
{
    ui->setupUi(this);
    player = new Player(this);
    Dice = new dice(this);
}

mw::~mw()
{
    delete ui;
}

void mw::on_actionNew_triggered()
{
  newChar();
}

void mw::on_actionDice_triggered()
{
  rollDice();
}

void mw::on_bt_dice_clicked()
{
  rollDice();
}

void mw::on_bt_new_clicked()
{
  newChar();
}
void mw::newChar(){
    player->resetPlayer();
    player->show();

}
void mw::rollDice(){
  Dice->show();
}

void mw::statUpdate(){
  QString name           = player->name;
  QString playerClass    = player->playerClass;
  QString alignment      = player->alignment;
  QString playersRace    = player->playersRace;
  QString playersSubRace = player->playersSubRace;
  QString background     = player->Background;
  QString BackgroundText = player->BackgroundText;
  QString hitDice        = player->hitDice;
  int experience         = player->experience;
  short int level        = player->level;
  short int initative    = player->initative;
  short int armorClass   = player->armorClass;
  short int speed        = player->speed;
  short int Proficiency  = player->Proficiency;
  short int hp           = player->hp;
  short int strenght     = player->strenght;
  short int intelligence = player->intelligence;
  short int dexterity    = player->dexterity;
  short int wisdom       = player->wisdom;
  short int contitution  = player->constitution;
  short int charisma     = player->charisma;



  ui->vlb_name->setText(name);
  ui->vlb_Class->setText(playerClass);
  ui->vlb_alignment->setText(alignment);
  ui->vlb_race->setText(playersRace);
  ui->vlb_background->setText(background);
  ui->pte_BackgroundText->appendPlainText(BackgroundText);
  ui->vlb_subRace->setText(playersSubRace);
  ui->vlb_HitDice->setText(hitDice);
  ui->vlb_experience->setText(QString::number(experience));
  ui->vlb_level->setText(QString::number(level));
  ui->vlb_initiative->setText(QString::number(initative));
  ui->vlb_armorClass->setText(QString::number(armorClass));
  ui->vlb_speed->setText(QString::number(speed));
  ui->vlb_proficiency->setText(QString::number(Proficiency));
  ui->vlb_hp->setText(QString::number(hp));
  ui->vlb_str->setText(QString::number(strenght));
  ui->vlb_int->setText(QString::number(intelligence));
  ui->vlb_dex->setText(QString::number(dexterity));
  ui->vlb_wis->setText(QString::number(wisdom));
  ui->vlb_con->setText(QString::number(contitution));
  ui->vlb_cha->setText(QString::number(charisma));


}

void mw::on_bt_update_clicked()
{
    statUpdate();
}

void mw::on_bt_save_clicked()
{

  QString name           = player->name;
  QString playerClass    = player->playerClass;
  QString alignment      = player->alignment;
  QString playersRace    = player->playersRace;
  QString playersSubRace = player->playersSubRace;
  QString background     = player->Background;
  QString BackgroundText = player->BackgroundText;
  QString hitDice        = player->hitDice;
  QString dugeonPack     = player->dugeonPack;
  int experience         = player->experience;
  short int level        = player->level;
  short int initative    = player->initative;
  short int armorClass   = player->armorClass;
  short int speed        = player->speed;
  short int Proficiency  = player->Proficiency;
  short int hp           = player->hp;
  short int strenght     = player->strenght;
  short int intelligence = player->intelligence;
  short int dexterity    = player->dexterity;
  short int wisdom       = player->wisdom;
  short int contitution  = player->constitution;
  short int charisma     = player->charisma;

 player->savePlayer(name, playerClass, alignment, playersRace, playersSubRace, background, BackgroundText, hitDice, dugeonPack ,experience, level, initative,
                    armorClass, speed, Proficiency, hp, strenght, intelligence, dexterity, wisdom, contitution, charisma);
}

void mw::on_bt_open_clicked()
{
  player->loadPlayer("Dakota");
  statUpdate();
}
