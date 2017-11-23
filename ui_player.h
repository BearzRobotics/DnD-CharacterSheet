/********************************************************************************
** Form generated from reading UI file 'player.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYER_H
#define UI_PLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Player
{
public:
    QPushButton *bt_genStats;
    QLabel *lb_equipment;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *bt_rollHp;
    QHBoxLayout *horizontalLayout_14;
    QLabel *lb_hitPoints;
    QLabel *vlb_hitPoints;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *lb_race;
    QComboBox *cb_race;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lb_background;
    QComboBox *cb_background;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lb_subRace;
    QComboBox *cb_subRace;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lb_class;
    QComboBox *cb_class;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lb_Str;
    QLabel *vlb_Str;
    QHBoxLayout *horizontalLayout_8;
    QLabel *lb_Int;
    QLabel *vlb_Int;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lb_Dex;
    QLabel *vlb_Dex;
    QHBoxLayout *horizontalLayout_9;
    QLabel *lb_Wis;
    QLabel *vlb_Wis;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lb_Con;
    QLabel *vlb_Con;
    QHBoxLayout *horizontalLayout_10;
    QLabel *lb_Cha;
    QLabel *vlb_Cha;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_2;
    QLabel *lb_select;
    QRadioButton *rb_greataxe;
    QRadioButton *rb_martialWeapon;
    QPushButton *bt_cMartialWeapon;
    QWidget *layoutWidget7;
    QVBoxLayout *verticalLayout_3;
    QLabel *lb_select_2;
    QRadioButton *rb_handAxe;
    QRadioButton *rb_simpleWeapon;
    QPushButton *bt_cSimpleWeapon;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_17;
    QHBoxLayout *horizontalLayout_16;
    QLabel *lb_choosDP;
    QComboBox *cb_DugeonPack;
    QPushButton *bt_done;
    QWidget *layoutWidget9;
    QHBoxLayout *horizontalLayout_18;
    QLabel *lb_name;
    QLineEdit *le_name;
    QWidget *layoutWidget10;
    QHBoxLayout *horizontalLayout_19;
    QLabel *lb_alignment;
    QComboBox *cb_alignment;

    void setupUi(QDialog *Player)
    {
        if (Player->objectName().isEmpty())
            Player->setObjectName(QStringLiteral("Player"));
        Player->resize(410, 384);
        Player->setMinimumSize(QSize(410, 354));
        Player->setMaximumSize(QSize(410, 384));
        bt_genStats = new QPushButton(Player);
        bt_genStats->setObjectName(QStringLiteral("bt_genStats"));
        bt_genStats->setGeometry(QRect(270, 10, 96, 34));
        lb_equipment = new QLabel(Player);
        lb_equipment->setObjectName(QStringLiteral("lb_equipment"));
        lb_equipment->setGeometry(QRect(170, 200, 81, 18));
        layoutWidget = new QWidget(Player);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(270, 140, 149, 36));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        bt_rollHp = new QPushButton(layoutWidget);
        bt_rollHp->setObjectName(QStringLiteral("bt_rollHp"));

        horizontalLayout_15->addWidget(bt_rollHp);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        lb_hitPoints = new QLabel(layoutWidget);
        lb_hitPoints->setObjectName(QStringLiteral("lb_hitPoints"));

        horizontalLayout_14->addWidget(lb_hitPoints);

        vlb_hitPoints = new QLabel(layoutWidget);
        vlb_hitPoints->setObjectName(QStringLiteral("vlb_hitPoints"));
        vlb_hitPoints->setMinimumSize(QSize(40, 0));

        horizontalLayout_14->addWidget(vlb_hitPoints);


        horizontalLayout_15->addLayout(horizontalLayout_14);

        layoutWidget1 = new QWidget(Player);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 40, 153, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lb_race = new QLabel(layoutWidget1);
        lb_race->setObjectName(QStringLiteral("lb_race"));

        horizontalLayout->addWidget(lb_race);

        cb_race = new QComboBox(layoutWidget1);
        cb_race->setObjectName(QStringLiteral("cb_race"));

        horizontalLayout->addWidget(cb_race);

        layoutWidget2 = new QWidget(Player);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 130, 255, 28));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lb_background = new QLabel(layoutWidget2);
        lb_background->setObjectName(QStringLiteral("lb_background"));

        horizontalLayout_3->addWidget(lb_background);

        cb_background = new QComboBox(layoutWidget2);
        cb_background->setObjectName(QStringLiteral("cb_background"));

        horizontalLayout_3->addWidget(cb_background);

        layoutWidget3 = new QWidget(Player);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 70, 211, 28));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        lb_subRace = new QLabel(layoutWidget3);
        lb_subRace->setObjectName(QStringLiteral("lb_subRace"));

        horizontalLayout_4->addWidget(lb_subRace);

        cb_subRace = new QComboBox(layoutWidget3);
        cb_subRace->setObjectName(QStringLiteral("cb_subRace"));

        horizontalLayout_4->addWidget(cb_subRace);

        layoutWidget4 = new QWidget(Player);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(0, 100, 123, 28));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lb_class = new QLabel(layoutWidget4);
        lb_class->setObjectName(QStringLiteral("lb_class"));

        horizontalLayout_2->addWidget(lb_class);

        cb_class = new QComboBox(layoutWidget4);
        cb_class->setObjectName(QStringLiteral("cb_class"));

        horizontalLayout_2->addWidget(cb_class);

        layoutWidget5 = new QWidget(Player);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(270, 50, 135, 80));
        verticalLayout = new QVBoxLayout(layoutWidget5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        lb_Str = new QLabel(layoutWidget5);
        lb_Str->setObjectName(QStringLiteral("lb_Str"));

        horizontalLayout_5->addWidget(lb_Str);

        vlb_Str = new QLabel(layoutWidget5);
        vlb_Str->setObjectName(QStringLiteral("vlb_Str"));
        vlb_Str->setMinimumSize(QSize(30, 0));

        horizontalLayout_5->addWidget(vlb_Str);


        horizontalLayout_11->addLayout(horizontalLayout_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        lb_Int = new QLabel(layoutWidget5);
        lb_Int->setObjectName(QStringLiteral("lb_Int"));

        horizontalLayout_8->addWidget(lb_Int);

        vlb_Int = new QLabel(layoutWidget5);
        vlb_Int->setObjectName(QStringLiteral("vlb_Int"));
        vlb_Int->setMinimumSize(QSize(30, 0));

        horizontalLayout_8->addWidget(vlb_Int);


        horizontalLayout_11->addLayout(horizontalLayout_8);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        lb_Dex = new QLabel(layoutWidget5);
        lb_Dex->setObjectName(QStringLiteral("lb_Dex"));

        horizontalLayout_6->addWidget(lb_Dex);

        vlb_Dex = new QLabel(layoutWidget5);
        vlb_Dex->setObjectName(QStringLiteral("vlb_Dex"));
        vlb_Dex->setMinimumSize(QSize(30, 0));

        horizontalLayout_6->addWidget(vlb_Dex);


        horizontalLayout_12->addLayout(horizontalLayout_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        lb_Wis = new QLabel(layoutWidget5);
        lb_Wis->setObjectName(QStringLiteral("lb_Wis"));

        horizontalLayout_9->addWidget(lb_Wis);

        vlb_Wis = new QLabel(layoutWidget5);
        vlb_Wis->setObjectName(QStringLiteral("vlb_Wis"));
        vlb_Wis->setMinimumSize(QSize(30, 0));

        horizontalLayout_9->addWidget(vlb_Wis);


        horizontalLayout_12->addLayout(horizontalLayout_9);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        lb_Con = new QLabel(layoutWidget5);
        lb_Con->setObjectName(QStringLiteral("lb_Con"));

        horizontalLayout_7->addWidget(lb_Con);

        vlb_Con = new QLabel(layoutWidget5);
        vlb_Con->setObjectName(QStringLiteral("vlb_Con"));
        vlb_Con->setMinimumSize(QSize(30, 0));

        horizontalLayout_7->addWidget(vlb_Con);


        horizontalLayout_13->addLayout(horizontalLayout_7);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        lb_Cha = new QLabel(layoutWidget5);
        lb_Cha->setObjectName(QStringLiteral("lb_Cha"));

        horizontalLayout_10->addWidget(lb_Cha);

        vlb_Cha = new QLabel(layoutWidget5);
        vlb_Cha->setObjectName(QStringLiteral("vlb_Cha"));
        vlb_Cha->setMinimumSize(QSize(30, 0));

        horizontalLayout_10->addWidget(vlb_Cha);


        horizontalLayout_13->addLayout(horizontalLayout_10);


        verticalLayout->addLayout(horizontalLayout_13);

        layoutWidget6 = new QWidget(Player);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(20, 220, 164, 118));
        verticalLayout_2 = new QVBoxLayout(layoutWidget6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lb_select = new QLabel(layoutWidget6);
        lb_select->setObjectName(QStringLiteral("lb_select"));

        verticalLayout_2->addWidget(lb_select);

        rb_greataxe = new QRadioButton(layoutWidget6);
        rb_greataxe->setObjectName(QStringLiteral("rb_greataxe"));

        verticalLayout_2->addWidget(rb_greataxe);

        rb_martialWeapon = new QRadioButton(layoutWidget6);
        rb_martialWeapon->setObjectName(QStringLiteral("rb_martialWeapon"));

        verticalLayout_2->addWidget(rb_martialWeapon);

        bt_cMartialWeapon = new QPushButton(layoutWidget6);
        bt_cMartialWeapon->setObjectName(QStringLiteral("bt_cMartialWeapon"));

        verticalLayout_2->addWidget(bt_cMartialWeapon);

        layoutWidget7 = new QWidget(Player);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(220, 220, 161, 118));
        verticalLayout_3 = new QVBoxLayout(layoutWidget7);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lb_select_2 = new QLabel(layoutWidget7);
        lb_select_2->setObjectName(QStringLiteral("lb_select_2"));

        verticalLayout_3->addWidget(lb_select_2);

        rb_handAxe = new QRadioButton(layoutWidget7);
        rb_handAxe->setObjectName(QStringLiteral("rb_handAxe"));

        verticalLayout_3->addWidget(rb_handAxe);

        rb_simpleWeapon = new QRadioButton(layoutWidget7);
        rb_simpleWeapon->setObjectName(QStringLiteral("rb_simpleWeapon"));

        verticalLayout_3->addWidget(rb_simpleWeapon);

        bt_cSimpleWeapon = new QPushButton(layoutWidget7);
        bt_cSimpleWeapon->setObjectName(QStringLiteral("bt_cSimpleWeapon"));

        verticalLayout_3->addWidget(bt_cSimpleWeapon);

        layoutWidget8 = new QWidget(Player);
        layoutWidget8->setObjectName(QStringLiteral("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(50, 340, 302, 36));
        horizontalLayout_17 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        lb_choosDP = new QLabel(layoutWidget8);
        lb_choosDP->setObjectName(QStringLiteral("lb_choosDP"));

        horizontalLayout_16->addWidget(lb_choosDP);

        cb_DugeonPack = new QComboBox(layoutWidget8);
        cb_DugeonPack->setObjectName(QStringLiteral("cb_DugeonPack"));

        horizontalLayout_16->addWidget(cb_DugeonPack);


        horizontalLayout_17->addLayout(horizontalLayout_16);

        bt_done = new QPushButton(layoutWidget8);
        bt_done->setObjectName(QStringLiteral("bt_done"));

        horizontalLayout_17->addWidget(bt_done);

        layoutWidget9 = new QWidget(Player);
        layoutWidget9->setObjectName(QStringLiteral("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(0, 0, 187, 36));
        horizontalLayout_18 = new QHBoxLayout(layoutWidget9);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        lb_name = new QLabel(layoutWidget9);
        lb_name->setObjectName(QStringLiteral("lb_name"));

        horizontalLayout_18->addWidget(lb_name);

        le_name = new QLineEdit(layoutWidget9);
        le_name->setObjectName(QStringLiteral("le_name"));

        horizontalLayout_18->addWidget(le_name);

        layoutWidget10 = new QWidget(Player);
        layoutWidget10->setObjectName(QStringLiteral("layoutWidget10"));
        layoutWidget10->setGeometry(QRect(0, 160, 241, 28));
        horizontalLayout_19 = new QHBoxLayout(layoutWidget10);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        lb_alignment = new QLabel(layoutWidget10);
        lb_alignment->setObjectName(QStringLiteral("lb_alignment"));
        lb_alignment->setMinimumSize(QSize(60, 0));

        horizontalLayout_19->addWidget(lb_alignment);

        cb_alignment = new QComboBox(layoutWidget10);
        cb_alignment->setObjectName(QStringLiteral("cb_alignment"));

        horizontalLayout_19->addWidget(cb_alignment);

#ifndef QT_NO_SHORTCUT
        lb_hitPoints->setBuddy(bt_rollHp);
        lb_race->setBuddy(cb_race);
        lb_background->setBuddy(cb_background);
        lb_subRace->setBuddy(cb_subRace);
        lb_class->setBuddy(cb_class);
        lb_choosDP->setBuddy(cb_DugeonPack);
#endif // QT_NO_SHORTCUT

        retranslateUi(Player);

        QMetaObject::connectSlotsByName(Player);
    } // setupUi

    void retranslateUi(QDialog *Player)
    {
        Player->setWindowTitle(QApplication::translate("Player", "Dialog", Q_NULLPTR));
        bt_genStats->setText(QApplication::translate("Player", "Gen Stats", Q_NULLPTR));
        lb_equipment->setText(QApplication::translate("Player", "Equipment", Q_NULLPTR));
        bt_rollHp->setText(QApplication::translate("Player", "Roll Hp", Q_NULLPTR));
        lb_hitPoints->setText(QString());
        vlb_hitPoints->setText(QString());
        lb_race->setText(QApplication::translate("Player", "Race", Q_NULLPTR));
        cb_race->clear();
        cb_race->insertItems(0, QStringList()
         << QApplication::translate("Player", "Aarakocra", Q_NULLPTR)
         << QApplication::translate("Player", "Aasimar", Q_NULLPTR)
         << QApplication::translate("Player", "Bugbear", Q_NULLPTR)
         << QApplication::translate("Player", "Dragonborn", Q_NULLPTR)
         << QApplication::translate("Player", "Dwarf", Q_NULLPTR)
         << QApplication::translate("Player", "Elf", Q_NULLPTR)
         << QApplication::translate("Player", "Firbolg", Q_NULLPTR)
         << QApplication::translate("Player", "Genasi", Q_NULLPTR)
         << QApplication::translate("Player", "Gnome", Q_NULLPTR)
         << QApplication::translate("Player", "Goblin", Q_NULLPTR)
         << QApplication::translate("Player", "Goliath", Q_NULLPTR)
         << QApplication::translate("Player", "Half-Elf", Q_NULLPTR)
         << QApplication::translate("Player", "Half-Orc", Q_NULLPTR)
         << QApplication::translate("Player", "Halfling", Q_NULLPTR)
         << QApplication::translate("Player", "Hobgoblin", Q_NULLPTR)
         << QApplication::translate("Player", "Human", Q_NULLPTR)
         << QApplication::translate("Player", "Kenku", Q_NULLPTR)
         << QApplication::translate("Player", "Kobold", Q_NULLPTR)
         << QApplication::translate("Player", "Lizardfolk", Q_NULLPTR)
         << QApplication::translate("Player", "Orc", Q_NULLPTR)
         << QApplication::translate("Player", "Serpenthblood", Q_NULLPTR)
         << QApplication::translate("Player", "Tabaxi", Q_NULLPTR)
         << QApplication::translate("Player", "Tiefling", Q_NULLPTR)
         << QApplication::translate("Player", "Triton", Q_NULLPTR)
         << QApplication::translate("Player", "Turtle", Q_NULLPTR)
        );
        lb_background->setText(QApplication::translate("Player", "Background", Q_NULLPTR));
        cb_background->clear();
        cb_background->insertItems(0, QStringList()
         << QApplication::translate("Player", "Acolyte", Q_NULLPTR)
         << QApplication::translate("Player", "Barbarian Tribe Member", Q_NULLPTR)
         << QApplication::translate("Player", "Charlatan", Q_NULLPTR)
         << QApplication::translate("Player", "City Watch", Q_NULLPTR)
         << QApplication::translate("Player", "Clan Crafter", Q_NULLPTR)
         << QApplication::translate("Player", "Cloistered Scholar", Q_NULLPTR)
         << QApplication::translate("Player", "Courtier", Q_NULLPTR)
         << QApplication::translate("Player", "Criminal", Q_NULLPTR)
         << QApplication::translate("Player", "Entertainer", Q_NULLPTR)
         << QApplication::translate("Player", "Faction Agent", Q_NULLPTR)
         << QApplication::translate("Player", "Far Traveler", Q_NULLPTR)
         << QApplication::translate("Player", "Folk Hero", Q_NULLPTR)
         << QApplication::translate("Player", "Guild Artisan", Q_NULLPTR)
         << QApplication::translate("Player", "Haunted One", Q_NULLPTR)
         << QApplication::translate("Player", "Hermit", Q_NULLPTR)
         << QApplication::translate("Player", "Inheritor", Q_NULLPTR)
         << QApplication::translate("Player", "Knight", Q_NULLPTR)
         << QApplication::translate("Player", "Mercenary Veteran", Q_NULLPTR)
         << QApplication::translate("Player", "Noble", Q_NULLPTR)
         << QApplication::translate("Player", "Outlander", Q_NULLPTR)
         << QApplication::translate("Player", "Port City Noble", Q_NULLPTR)
         << QApplication::translate("Player", "Sage", Q_NULLPTR)
         << QApplication::translate("Player", "Sailor", Q_NULLPTR)
         << QApplication::translate("Player", "Soldier", Q_NULLPTR)
         << QApplication::translate("Player", "Urban Bounty Hunter", Q_NULLPTR)
         << QApplication::translate("Player", "Urchin", Q_NULLPTR)
        );
        lb_subRace->setText(QApplication::translate("Player", "Sub Race", Q_NULLPTR));
        cb_subRace->clear();
        cb_subRace->insertItems(0, QStringList()
         << QApplication::translate("Player", "None", Q_NULLPTR)
         << QApplication::translate("Player", "Forest Gnome", Q_NULLPTR)
         << QApplication::translate("Player", "Mountain Dwarf", Q_NULLPTR)
         << QApplication::translate("Player", "Rock Gnome", Q_NULLPTR)
         << QApplication::translate("Player", "Stout Halfling", Q_NULLPTR)
         << QApplication::translate("Player", "High Elf", Q_NULLPTR)
         << QApplication::translate("Player", "Wood Elf", Q_NULLPTR)
         << QApplication::translate("Player", "Hill Dwarf", Q_NULLPTR)
         << QApplication::translate("Player", "Lightfoot Halfling", Q_NULLPTR)
         << QApplication::translate("Player", "Black Dragonborn", Q_NULLPTR)
         << QApplication::translate("Player", "Blue Dragonborn", Q_NULLPTR)
         << QApplication::translate("Player", "Brass Dragonborn", Q_NULLPTR)
         << QApplication::translate("Player", "Bronze Dragonborn", Q_NULLPTR)
         << QApplication::translate("Player", "Copper Dragonborn", Q_NULLPTR)
         << QApplication::translate("Player", "Gold Dragonborn", Q_NULLPTR)
         << QApplication::translate("Player", "Green Dragonborn", Q_NULLPTR)
         << QApplication::translate("Player", "Red Dragonborn", Q_NULLPTR)
         << QApplication::translate("Player", "Silver Dragonborn", Q_NULLPTR)
         << QApplication::translate("Player", "White Dragonborn", Q_NULLPTR)
         << QApplication::translate("Player", "Drow", Q_NULLPTR)
        );
        lb_class->setText(QApplication::translate("Player", "Class", Q_NULLPTR));
        cb_class->clear();
        cb_class->insertItems(0, QStringList()
         << QApplication::translate("Player", "Barbarian", Q_NULLPTR)
         << QApplication::translate("Player", "Bard", Q_NULLPTR)
         << QApplication::translate("Player", "Cleric", Q_NULLPTR)
         << QApplication::translate("Player", "Druid", Q_NULLPTR)
         << QApplication::translate("Player", "Fighter", Q_NULLPTR)
         << QApplication::translate("Player", "Monk", Q_NULLPTR)
         << QApplication::translate("Player", "Paladin", Q_NULLPTR)
         << QApplication::translate("Player", "Ranger", Q_NULLPTR)
         << QApplication::translate("Player", "Rogue", Q_NULLPTR)
         << QApplication::translate("Player", "Sorcerer", Q_NULLPTR)
         << QApplication::translate("Player", "Warlock", Q_NULLPTR)
         << QApplication::translate("Player", "Wizard", Q_NULLPTR)
        );
        lb_Str->setText(QApplication::translate("Player", "Str", Q_NULLPTR));
        vlb_Str->setText(QString());
        lb_Int->setText(QApplication::translate("Player", "Int", Q_NULLPTR));
        vlb_Int->setText(QString());
        lb_Dex->setText(QApplication::translate("Player", "Dex", Q_NULLPTR));
        vlb_Dex->setText(QString());
        lb_Wis->setText(QApplication::translate("Player", "Wis", Q_NULLPTR));
        vlb_Wis->setText(QString());
        lb_Con->setText(QApplication::translate("Player", "Con", Q_NULLPTR));
        vlb_Con->setText(QString());
        lb_Cha->setText(QApplication::translate("Player", "Cha", Q_NULLPTR));
        vlb_Cha->setText(QString());
        lb_select->setText(QApplication::translate("Player", "Select:", Q_NULLPTR));
        rb_greataxe->setText(QApplication::translate("Player", "Greataxe", Q_NULLPTR));
        rb_martialWeapon->setText(QApplication::translate("Player", "Martial Melle weapon", Q_NULLPTR));
        bt_cMartialWeapon->setText(QApplication::translate("Player", "Chose Martial weapon", Q_NULLPTR));
        lb_select_2->setText(QApplication::translate("Player", "Select:", Q_NULLPTR));
        rb_handAxe->setText(QApplication::translate("Player", "HandAxe(2)", Q_NULLPTR));
        rb_simpleWeapon->setText(QApplication::translate("Player", "Simple weapon", Q_NULLPTR));
        bt_cSimpleWeapon->setText(QApplication::translate("Player", "Chose Simple weapon", Q_NULLPTR));
        lb_choosDP->setText(QApplication::translate("Player", "Choice Dugeon Pack", Q_NULLPTR));
        bt_done->setText(QApplication::translate("Player", "Done", Q_NULLPTR));
        lb_name->setText(QApplication::translate("Player", "Name: ", Q_NULLPTR));
        lb_alignment->setText(QApplication::translate("Player", "Alignment", Q_NULLPTR));
        cb_alignment->clear();
        cb_alignment->insertItems(0, QStringList()
         << QApplication::translate("Player", "Lawful Good", Q_NULLPTR)
         << QApplication::translate("Player", "Neutral Good", Q_NULLPTR)
         << QApplication::translate("Player", "Chaotic Good", Q_NULLPTR)
         << QApplication::translate("Player", "Lawful Neutral", Q_NULLPTR)
         << QApplication::translate("Player", "Neutral", Q_NULLPTR)
         << QApplication::translate("Player", "Chaotic Neutral", Q_NULLPTR)
         << QApplication::translate("Player", "Lawful Evil", Q_NULLPTR)
         << QApplication::translate("Player", "Neutral Evil", Q_NULLPTR)
         << QApplication::translate("Player", "Chaotic Evil", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class Player: public Ui_Player {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYER_H
