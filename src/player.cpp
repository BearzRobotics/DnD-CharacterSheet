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
#include "player.h"
#include "ui_player.h"
#include <QFile>
#include <QDataStream>
#include <QMessageBox>


Player::Player(QWidget *parent) :
  QDialog(parent), ui(new Ui::Player),
  name(""), alignment(""), playersRace(""),playersSubRace(""), Background(""),
  BackgroundText(""), hitDice(""), dugeonPack(""), experience(0), level(0),
  initative(0), armorClass(0), speed(0), Proficiency(0), hp(0), strenght(0),
  intelligence(0), dexterity(0), wisdom(0), constitution(0), charisma(0)
{
  ui->setupUi(this);
}

Player::~Player()
{
  delete ui;
}

void Player::genPlayer(){

  // furtue note I problay should use working in class only varibles
  name           = ui->le_name->text();
  playerClass    = ui->cb_class->currentText();
  alignment      = ui->cb_alignment->currentText();
  playersRace    = ui->cb_race->currentText();
  playersSubRace = ui->cb_subRace->currentText();
  Background     = ui->cb_background->currentText();
  BackgroundText = "";
  dugeonPack     = ui->cb_DugeonPack->currentText();
  strenght       = ui->vlb_Str->text().toInt();
  intelligence   = ui->vlb_Int->text().toInt();
  dexterity      = ui->vlb_Dex->text().toInt();
  wisdom         = ui->vlb_Wis->text().toInt();
  constitution   = ui->vlb_Con->text().toInt();
  charisma       = ui->vlb_Cha->text().toInt();
  hp             = ui->vlb_hitPoints->text().toInt();

  raceStatBoost(playersRace);
  checkLevel(experience);
  checkSpeed(playersRace);
  close();
}


void Player::on_bt_genStats_clicked()
{
  ui->vlb_Str->setText(QString::number( (qrand()%6+1) + (qrand()%6+1) + (qrand()%6+1) ));
  ui->vlb_Int->setText(QString::number( (qrand()%6+1) + (qrand()%6+1) + (qrand()%6+1) ));
  ui->vlb_Dex->setText(QString::number( (qrand()%6+1) + (qrand()%6+1) + (qrand()%6+1) ));
  ui->vlb_Wis->setText(QString::number( (qrand()%6+1) + (qrand()%6+1) + (qrand()%6+1) ));
  ui->vlb_Con->setText(QString::number( (qrand()%6+1) + (qrand()%6+1) + (qrand()%6+1) ));
  ui->vlb_Cha->setText(QString::number( (qrand()%6+1) + (qrand()%6+1) + (qrand()%6+1) ));
}

void Player::on_bt_rollHp_clicked()
{
  playerClass  = ui->cb_class->currentText();
  checkHp(playerClass);
}

void Player::on_bt_done_clicked()
{
  genPlayer();
}

void Player::raceStatBoost(QString playersRace){
  // refer to page 12 of the 5e players handbook

  if (playersRace == "Mountain Dwarf" || playersRace == "Half-Orc" || playersRace == "Dragonborn"){
     strenght += 2;
    } else if (playersRace == "Human"){
      strenght += 1;
    }else{
      strenght = strenght;
    }

  if (playersRace == "Elf" || playersRace == "Halfling"){
      dexterity += 2;
    }else if( playersRace == "Forest Gnome" || playersRace =="Human"){
      dexterity += 1;
    }else{
      dexterity = dexterity;
    }

  if (playersRace == "Dwarf"){
      constitution += 2;
    }else if(playersRace =="Half-Orc" || playersRace == "Stout Halfling" || playersRace == "Human" || playersRace == "Rock Gnome"){
      constitution += 1;
    }else{
      constitution = constitution;
    }

  if (playersRace == "High Elf" || playersRace == "Human" || playersRace == "Tiefling" ){
      intelligence += 1;
    }else if (playersRace == "Gnome"){
      intelligence += 2;
    }else{
      intelligence = intelligence;
    }

  if (playersRace == "Hill Dwarf"  || playersRace == "Human" || playersRace == "Wood Elf"){
      wisdom += 1;
    }else{
      wisdom = wisdom;
    }
  if (playersRace == "Half-Elf" || playersRace == "Tiefling"){
      charisma += 2;
    }else if(playersRace == "Dragonborn" || playersRace == "Drow" || playersRace == "Human" || playersRace == "Lightfoot Halfling"){
      charisma += 1;
    }else{
      charisma = charisma;
    }
}

void Player::checkLevel(int experience){
  // page15 of players handbook
  if (experience <= 299){
      level = 1;
    }else if ((experience >= 300) & (experience <= 899)){
      level = 2;
    }else if ((experience >= 900) & (experience <= 2699)){
      level = 3;
    }else if ((experience >= 2700) & (experience <= 6599)){
      level = 4;
    }else if ((experience >= 6500) & (experience <= 1399)){
      level = 5;
    }else if ((experience >= 14000) & (experience <= 22999)){
      level = 6;
    }else if ((experience >= 23000) & (experience <= 33999)){
      level = 7;
    }else if ((experience >= 34000) & (experience <= 47999)){
      level = 8;
    }else if ((experience >= 48000) & (experience <= 63999)){
      level = 9;
    }else if ((experience >= 64000) & (experience <= 84999)){
      level = 10;
    }else if ((experience >= 85000) & (experience <= 99999)){
      level = 11;
    }else if ((experience >= 100000) & (experience <= 119999)){
      level = 12;
    }else if ((experience >= 120000) & (experience <= 139999)){
      level = 13;
    }else if ((experience >= 140000) & (experience <= 164999)){
      level = 14;
    }else if ((experience >= 165000) & (experience <= 194999)){
      level = 15;
    }else if ((experience >= 195000) & (experience <= 224999)){
      level = 16;
    }else if ((experience >= 225000) & (experience <= 264999)){
      level = 17;
    }else if ((experience >= 265000) & (experience <= 304999)){
      level = 18;
    }else if ((experience >= 305000) & (experience <= 354999)){
      level = 19;
    }else{
      level = 20;
    }
}

void Player::checkHp(QString playerClass){
  // Refer to page 45 of the players handbook
  if (playerClass == "Wizard" || playerClass == "Sorcerer"){
      hitDice = "1d6";
      ui->vlb_hitPoints->setText(QString::number((qrand()%6+1)));
    }else if (playerClass == "Bard" || playerClass == "Cleric" || playerClass == "Druid" || playerClass == "Monk" || playerClass == "Rogue" || playerClass == "Warlock"){
      hitDice = "1d8";
      ui->vlb_hitPoints->setText(QString::number((qrand()%8+1)));
    } else if(playerClass == "Fighter" || playerClass == "Paladin" || playerClass == "Ranger"){
      hitDice = "1d10";
      ui->vlb_hitPoints->setText(QString::number((qrand()%10+1)));
    } else{
      hitDice = "1d12";
      ui->vlb_hitPoints->setText(QString::number((qrand()%12+1)));
    }
}

void Player::checkSpeed(QString playersRace){
  if (playersRace == "Halfling" || playersRace =="Stout Halfling" || playersRace =="Lightfoot Halfling" || playersRace == "Dwarf" || playersRace == "Mountain Dwarf" || playersRace == "Hill Dwarf"){
      speed = 25;
    } else if (playersRace == "Human" || playersRace == "Elf" || playersRace == "Half-Elf" || playersRace == "High Elf" || playersRace == "Wood Elf" || playersRace == "Dragonborn" || playersRace == "Black Dragonborn" || playersRace == "Blue Dragonborn" || playersRace == "Brass Dragonborn" || playersRace == "Bronze Dragonborn" || playersRace == "Copper Dragonborn" || playersRace == "Gold Dragonborn" || playersRace == "Green Dragonborn" || playersRace == "Red Dragonborn" || playersRace == "Silver Dragonborn" || playersRace == "White Dragonborn" || playersRace == "Half-Orc" || playersRace == "Tiefling"){
      speed = 30;
    } else{
      speed = 25;
    }
}

void Player::savePlayer(QString name, QString playerClass, QString alignment, QString playersRace, QString playersSubRace,
                        QString background, QString BackgroundText, QString hitDice, QString dugeonPack, int experience, short level, short initative,
                        short armorClass, short speed, short Proficiency, short hp, short strenght, short intelligence,
                        short dexterity, short wisdom, short constitution, short charisma){
  QString fileName = QFileDialog::getSaveFileName(this,
                                                    tr("Save Player"), "",
                                                    tr("Player File(*.dat)"));
  QFile file(fileName + ".dnd");

 file.open(QIODevice::WriteOnly);
 QDataStream out(&file);
 out.setVersion(QDataStream::Qt_5_9);
 out << name << playerClass << alignment << playersRace << playersSubRace << background << BackgroundText << hitDice << dugeonPack << experience << level << initative << armorClass << speed << Proficiency << hp << strenght << intelligence << dexterity << wisdom << constitution << charisma;
}

void Player::loadPlayer(){

  QString fileName = QFileDialog::getOpenFileName(this, "Open Player File", QDir::currentPath(), "Player Files (*.dat, *.dnd)");
  QFile file(fileName);

  if (!file.open(QIODevice::ReadOnly)){
        qDebug() << "Couldn't open file";
        file.errorString();
      return;
  }

  QDataStream in(&file);
  in.setVersion(QDataStream::Qt_5_9);
  in >> name >> playerClass >> alignment >> playersRace >> playersSubRace >> Background >> BackgroundText >> hitDice >> dugeonPack >> experience >> level >> initative >> armorClass >> speed >> Proficiency >> hp >> strenght >> intelligence >> dexterity >> wisdom >> constitution >> charisma;
}

void Player::resetPlayer(){
  name  = "";
  playerClass  = "";
  alignment = "";
  playersRace = "";
  playersSubRace = "";
  Background = "";
  BackgroundText = "";
  hitDice = "";
  experience = 0;
  level = 0;
  initative = 0;
  armorClass = 0;
  speed = 0;
  Proficiency = 0;
  hp = 0;
  strenght = 0;
  intelligence = 0;
  dexterity = 0;
  wisdom = 0;
  constitution = 0;
  charisma = 0;
}

