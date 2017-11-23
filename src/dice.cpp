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
#include "dice.h"
#include "ui_dice.h"
#include <QDebug>

dice::dice(QWidget *parent) :
  QDialog(parent), ui(new Ui::dice),
  lastRoll(0), TotalRolls(0),
  totalScore(0), nTimes(0)
{
  ui->setupUi(this);
}

dice::~dice()
{
  delete ui;
}

// r is a repeat peramitor
// if r is 0 or 1, it means not to repeat at all
// if r is 2 it means do it twice, etc
void dice::roll(int dN){
  lastRoll = 0;
  TotalRolls++;

  int wnum = (qrand()%dN)+1;
  lastRoll = 0;
  totalScore += lastRoll;

  if (dN == 2) {
    ui->vlb_d2->setText(QString::number(wnum));
  }else if(dN == 4) {
    ui->vlb_d4->setText(QString::number(wnum));
  }else if(dN == 6) {
    ui->vlb_d6->setText(QString::number(wnum));
  }else if(dN == 10) {
    ui->vlb_d10->setText(QString::number(wnum));
  }else if(dN == 12) {
    ui->vlb_d12->setText(QString::number(wnum));
  }else if(dN == 20) {
    ui->vlb_d20->setText(QString::number(wnum));
  }else if(dN == 100) {
    ui->vlb_d100->setText(QString::number(wnum));
  }else{
    reset();
  }

}

void dice::reset(){
  lastRoll   = 0;
  TotalRolls = 0;
  totalScore = 0;
  nTimes     = 0;
  ui->vlb_d2->setText("");
  ui->vlb_d4->setText("");
  ui->vlb_d6->setText("");
  ui->vlb_d10->setText("");
  ui->vlb_d12->setText("");
  ui->vlb_d20->setText("");
  ui->vlb_d100->setText("");
}

void dice::on_bt_d2_clicked()
{
  int nd2 = ui->sp_d2->value();
  roll(2);
  nTimes = 0;
}

void dice::on_bt_d4_clicked()
{
  int nd4 = ui->sp_d4->value();
  roll(4);
  nTimes = 0;
}

void dice::on_bt_d6_clicked()
{
  int nd6 = ui->sp_d6->value();
  roll(6);
  nTimes = 0;
}

void dice::on_bt_d10_clicked()
{
  int nd10 = ui->sp_d10->value();
  roll(10);
  nTimes = 0;
}

void dice::on_bt_d12_clicked()
{
  int nd12 = ui->sp_d12->value();
  roll(12);
  nTimes = 0;
}

void dice::on_bt_d20_clicked()
{
  int nd20 = ui->sp_d20->value();
  roll(20);
  nTimes = 0;
}

void dice::on_bt_d100_clicked()
{

  int nd100 = ui->sp_d100->value();
  roll(100);
  nTimes = 0;
}

void dice::on_bt_clear_clicked()
{
    reset();
}
