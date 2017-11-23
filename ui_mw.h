/********************************************************************************
** Form generated from reading UI file 'mw.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MW_H
#define UI_MW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mw
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionOptions;
    QAction *actionDice;
    QAction *actionGenMap;
    QAction *actionopen;
    QAction *actionsave;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tb_stats;
    QPlainTextEdit *pte_BackgroundText;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout;
    QLabel *lb_Class;
    QLabel *vlb_Class;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lb_background;
    QLabel *vlb_background;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lb_alignment;
    QLabel *vlb_alignment;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lb_HitDice;
    QLabel *vlb_HitDice;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lb_race;
    QLabel *vlb_race;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lb_experience;
    QLabel *vlb_experience;
    QHBoxLayout *horizontalLayout_8;
    QLabel *lb_subRace;
    QLabel *vlb_subRace;
    QWidget *tb_invetory;
    QWidget *tab;
    QPushButton *bt_dice;
    QPushButton *bt_new;
    QPushButton *bt_save;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *lb_name;
    QLabel *lb_level;
    QLabel *lb_initiative;
    QLabel *lb_armorclass;
    QLabel *lb_speed;
    QLabel *lb_proficiency;
    QLabel *lb_hp;
    QLabel *lb_str;
    QLabel *lb_int;
    QLabel *lb_dex;
    QLabel *lb_wis;
    QLabel *lb_con;
    QLabel *lb_cha;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *vlb_name;
    QLabel *vlb_level;
    QLabel *vlb_initiative;
    QLabel *vlb_armorClass;
    QLabel *vlb_speed;
    QLabel *vlb_proficiency;
    QLabel *vlb_hp;
    QLabel *vlb_str;
    QLabel *vlb_int;
    QLabel *vlb_dex;
    QLabel *vlb_wis;
    QLabel *vlb_con;
    QLabel *vlb_cha;
    QPushButton *bt_open;
    QPushButton *bt_update;
    QLabel *lb_info;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuSettings;
    QMenu *menuMap;

    void setupUi(QMainWindow *mw)
    {
        if (mw->objectName().isEmpty())
            mw->setObjectName(QStringLiteral("mw"));
        mw->resize(680, 370);
        mw->setMinimumSize(QSize(680, 370));
        mw->setMaximumSize(QSize(680, 370));
        actionNew = new QAction(mw);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionOpen = new QAction(mw);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(mw);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave_As = new QAction(mw);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        actionOptions = new QAction(mw);
        actionOptions->setObjectName(QStringLiteral("actionOptions"));
        actionDice = new QAction(mw);
        actionDice->setObjectName(QStringLiteral("actionDice"));
        actionGenMap = new QAction(mw);
        actionGenMap->setObjectName(QStringLiteral("actionGenMap"));
        actionopen = new QAction(mw);
        actionopen->setObjectName(QStringLiteral("actionopen"));
        actionsave = new QAction(mw);
        actionsave->setObjectName(QStringLiteral("actionsave"));
        centralWidget = new QWidget(mw);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(170, 0, 521, 301));
        tb_stats = new QWidget();
        tb_stats->setObjectName(QStringLiteral("tb_stats"));
        pte_BackgroundText = new QPlainTextEdit(tb_stats);
        pte_BackgroundText->setObjectName(QStringLiteral("pte_BackgroundText"));
        pte_BackgroundText->setGeometry(QRect(0, 170, 491, 51));
        widget = new QWidget(tb_stats);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 11, 456, 106));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lb_Class = new QLabel(widget);
        lb_Class->setObjectName(QStringLiteral("lb_Class"));
        lb_Class->setMinimumSize(QSize(90, 0));

        horizontalLayout->addWidget(lb_Class);

        vlb_Class = new QLabel(widget);
        vlb_Class->setObjectName(QStringLiteral("vlb_Class"));
        vlb_Class->setMinimumSize(QSize(150, 0));

        horizontalLayout->addWidget(vlb_Class);


        horizontalLayout_9->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lb_background = new QLabel(widget);
        lb_background->setObjectName(QStringLiteral("lb_background"));
        lb_background->setMinimumSize(QSize(90, 0));
        lb_background->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_4->addWidget(lb_background);

        vlb_background = new QLabel(widget);
        vlb_background->setObjectName(QStringLiteral("vlb_background"));
        vlb_background->setMinimumSize(QSize(100, 0));

        horizontalLayout_4->addWidget(vlb_background);


        horizontalLayout_9->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lb_alignment = new QLabel(widget);
        lb_alignment->setObjectName(QStringLiteral("lb_alignment"));
        lb_alignment->setMinimumSize(QSize(90, 0));
        lb_alignment->setMaximumSize(QSize(88, 16777215));

        horizontalLayout_2->addWidget(lb_alignment);

        vlb_alignment = new QLabel(widget);
        vlb_alignment->setObjectName(QStringLiteral("vlb_alignment"));
        vlb_alignment->setMinimumSize(QSize(150, 0));

        horizontalLayout_2->addWidget(vlb_alignment);


        horizontalLayout_10->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        lb_HitDice = new QLabel(widget);
        lb_HitDice->setObjectName(QStringLiteral("lb_HitDice"));
        lb_HitDice->setMinimumSize(QSize(90, 0));
        lb_HitDice->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_5->addWidget(lb_HitDice);

        vlb_HitDice = new QLabel(widget);
        vlb_HitDice->setObjectName(QStringLiteral("vlb_HitDice"));
        vlb_HitDice->setMinimumSize(QSize(100, 0));
        vlb_HitDice->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_5->addWidget(vlb_HitDice);


        horizontalLayout_10->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lb_race = new QLabel(widget);
        lb_race->setObjectName(QStringLiteral("lb_race"));
        lb_race->setMinimumSize(QSize(90, 0));

        horizontalLayout_3->addWidget(lb_race);

        vlb_race = new QLabel(widget);
        vlb_race->setObjectName(QStringLiteral("vlb_race"));
        vlb_race->setMinimumSize(QSize(150, 0));

        horizontalLayout_3->addWidget(vlb_race);


        horizontalLayout_7->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        lb_experience = new QLabel(widget);
        lb_experience->setObjectName(QStringLiteral("lb_experience"));
        lb_experience->setMinimumSize(QSize(90, 0));
        lb_experience->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_6->addWidget(lb_experience);

        vlb_experience = new QLabel(widget);
        vlb_experience->setObjectName(QStringLiteral("vlb_experience"));
        vlb_experience->setMinimumSize(QSize(100, 0));
        vlb_experience->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_6->addWidget(vlb_experience);


        horizontalLayout_7->addLayout(horizontalLayout_6);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        lb_subRace = new QLabel(widget);
        lb_subRace->setObjectName(QStringLiteral("lb_subRace"));
        lb_subRace->setMinimumSize(QSize(90, 0));
        lb_subRace->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_8->addWidget(lb_subRace);

        vlb_subRace = new QLabel(widget);
        vlb_subRace->setObjectName(QStringLiteral("vlb_subRace"));
        vlb_subRace->setMinimumSize(QSize(150, 0));

        horizontalLayout_8->addWidget(vlb_subRace);


        verticalLayout_3->addLayout(horizontalLayout_8);

        tabWidget->addTab(tb_stats, QString());
        tb_invetory = new QWidget();
        tb_invetory->setObjectName(QStringLiteral("tb_invetory"));
        tabWidget->addTab(tb_invetory, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        bt_dice = new QPushButton(centralWidget);
        bt_dice->setObjectName(QStringLiteral("bt_dice"));
        bt_dice->setGeometry(QRect(630, 0, 50, 34));
        bt_dice->setMinimumSize(QSize(0, 0));
        bt_dice->setMaximumSize(QSize(50, 16777215));
        bt_new = new QPushButton(centralWidget);
        bt_new->setObjectName(QStringLiteral("bt_new"));
        bt_new->setGeometry(QRect(580, 0, 50, 34));
        bt_new->setMaximumSize(QSize(50, 16777215));
        bt_save = new QPushButton(centralWidget);
        bt_save->setObjectName(QStringLiteral("bt_save"));
        bt_save->setGeometry(QRect(530, 0, 50, 34));
        bt_save->setMaximumSize(QSize(50, 16777215));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 0, 77, 331));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lb_name = new QLabel(layoutWidget);
        lb_name->setObjectName(QStringLiteral("lb_name"));

        verticalLayout->addWidget(lb_name);

        lb_level = new QLabel(layoutWidget);
        lb_level->setObjectName(QStringLiteral("lb_level"));

        verticalLayout->addWidget(lb_level);

        lb_initiative = new QLabel(layoutWidget);
        lb_initiative->setObjectName(QStringLiteral("lb_initiative"));

        verticalLayout->addWidget(lb_initiative);

        lb_armorclass = new QLabel(layoutWidget);
        lb_armorclass->setObjectName(QStringLiteral("lb_armorclass"));

        verticalLayout->addWidget(lb_armorclass);

        lb_speed = new QLabel(layoutWidget);
        lb_speed->setObjectName(QStringLiteral("lb_speed"));

        verticalLayout->addWidget(lb_speed);

        lb_proficiency = new QLabel(layoutWidget);
        lb_proficiency->setObjectName(QStringLiteral("lb_proficiency"));

        verticalLayout->addWidget(lb_proficiency);

        lb_hp = new QLabel(layoutWidget);
        lb_hp->setObjectName(QStringLiteral("lb_hp"));

        verticalLayout->addWidget(lb_hp);

        lb_str = new QLabel(layoutWidget);
        lb_str->setObjectName(QStringLiteral("lb_str"));

        verticalLayout->addWidget(lb_str);

        lb_int = new QLabel(layoutWidget);
        lb_int->setObjectName(QStringLiteral("lb_int"));

        verticalLayout->addWidget(lb_int);

        lb_dex = new QLabel(layoutWidget);
        lb_dex->setObjectName(QStringLiteral("lb_dex"));

        verticalLayout->addWidget(lb_dex);

        lb_wis = new QLabel(layoutWidget);
        lb_wis->setObjectName(QStringLiteral("lb_wis"));

        verticalLayout->addWidget(lb_wis);

        lb_con = new QLabel(layoutWidget);
        lb_con->setObjectName(QStringLiteral("lb_con"));

        verticalLayout->addWidget(lb_con);

        lb_cha = new QLabel(layoutWidget);
        lb_cha->setObjectName(QStringLiteral("lb_cha"));

        verticalLayout->addWidget(lb_cha);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(90, 0, 81, 331));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        vlb_name = new QLabel(layoutWidget1);
        vlb_name->setObjectName(QStringLiteral("vlb_name"));
        vlb_name->setMinimumSize(QSize(50, 0));
        vlb_name->setMaximumSize(QSize(1787, 16777215));

        verticalLayout_2->addWidget(vlb_name);

        vlb_level = new QLabel(layoutWidget1);
        vlb_level->setObjectName(QStringLiteral("vlb_level"));
        vlb_level->setMinimumSize(QSize(50, 0));
        vlb_level->setMaximumSize(QSize(50, 16777215));

        verticalLayout_2->addWidget(vlb_level);

        vlb_initiative = new QLabel(layoutWidget1);
        vlb_initiative->setObjectName(QStringLiteral("vlb_initiative"));
        vlb_initiative->setMinimumSize(QSize(50, 0));
        vlb_initiative->setMaximumSize(QSize(50, 16777215));

        verticalLayout_2->addWidget(vlb_initiative);

        vlb_armorClass = new QLabel(layoutWidget1);
        vlb_armorClass->setObjectName(QStringLiteral("vlb_armorClass"));
        vlb_armorClass->setMinimumSize(QSize(50, 0));
        vlb_armorClass->setMaximumSize(QSize(50, 16777215));

        verticalLayout_2->addWidget(vlb_armorClass);

        vlb_speed = new QLabel(layoutWidget1);
        vlb_speed->setObjectName(QStringLiteral("vlb_speed"));
        vlb_speed->setMinimumSize(QSize(50, 0));
        vlb_speed->setMaximumSize(QSize(50, 16777215));

        verticalLayout_2->addWidget(vlb_speed);

        vlb_proficiency = new QLabel(layoutWidget1);
        vlb_proficiency->setObjectName(QStringLiteral("vlb_proficiency"));
        vlb_proficiency->setMinimumSize(QSize(50, 0));
        vlb_proficiency->setMaximumSize(QSize(50, 16777215));

        verticalLayout_2->addWidget(vlb_proficiency);

        vlb_hp = new QLabel(layoutWidget1);
        vlb_hp->setObjectName(QStringLiteral("vlb_hp"));
        vlb_hp->setMinimumSize(QSize(50, 0));
        vlb_hp->setMaximumSize(QSize(50, 16777215));

        verticalLayout_2->addWidget(vlb_hp);

        vlb_str = new QLabel(layoutWidget1);
        vlb_str->setObjectName(QStringLiteral("vlb_str"));
        vlb_str->setMinimumSize(QSize(50, 0));
        vlb_str->setMaximumSize(QSize(50, 16777215));

        verticalLayout_2->addWidget(vlb_str);

        vlb_int = new QLabel(layoutWidget1);
        vlb_int->setObjectName(QStringLiteral("vlb_int"));
        vlb_int->setMinimumSize(QSize(50, 0));
        vlb_int->setMaximumSize(QSize(50, 16777215));

        verticalLayout_2->addWidget(vlb_int);

        vlb_dex = new QLabel(layoutWidget1);
        vlb_dex->setObjectName(QStringLiteral("vlb_dex"));
        vlb_dex->setMinimumSize(QSize(50, 0));
        vlb_dex->setMaximumSize(QSize(50, 16777215));

        verticalLayout_2->addWidget(vlb_dex);

        vlb_wis = new QLabel(layoutWidget1);
        vlb_wis->setObjectName(QStringLiteral("vlb_wis"));
        vlb_wis->setMinimumSize(QSize(50, 0));
        vlb_wis->setMaximumSize(QSize(50, 16777215));

        verticalLayout_2->addWidget(vlb_wis);

        vlb_con = new QLabel(layoutWidget1);
        vlb_con->setObjectName(QStringLiteral("vlb_con"));
        vlb_con->setMinimumSize(QSize(50, 0));
        vlb_con->setMaximumSize(QSize(50, 16777215));

        verticalLayout_2->addWidget(vlb_con);

        vlb_cha = new QLabel(layoutWidget1);
        vlb_cha->setObjectName(QStringLiteral("vlb_cha"));
        vlb_cha->setMinimumSize(QSize(50, 0));
        vlb_cha->setMaximumSize(QSize(50, 16777215));

        verticalLayout_2->addWidget(vlb_cha);

        bt_open = new QPushButton(centralWidget);
        bt_open->setObjectName(QStringLiteral("bt_open"));
        bt_open->setGeometry(QRect(480, 0, 50, 34));
        bt_open->setMaximumSize(QSize(50, 16777215));
        bt_update = new QPushButton(centralWidget);
        bt_update->setObjectName(QStringLiteral("bt_update"));
        bt_update->setGeometry(QRect(430, 0, 50, 34));
        bt_update->setMaximumSize(QSize(50, 16777215));
        lb_info = new QLabel(centralWidget);
        lb_info->setObjectName(QStringLiteral("lb_info"));
        lb_info->setGeometry(QRect(170, 300, 511, 41));
        mw->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mw);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 680, 24));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        menuMap = new QMenu(menuBar);
        menuMap->setObjectName(QStringLiteral("menuMap"));
        mw->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuMap->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addAction(actionDice);
        menuSettings->addAction(actionOptions);
        menuMap->addAction(actionGenMap);
        menuMap->addAction(actionopen);
        menuMap->addAction(actionsave);

        retranslateUi(mw);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(mw);
    } // setupUi

    void retranslateUi(QMainWindow *mw)
    {
        mw->setWindowTitle(QApplication::translate("mw", "mw", Q_NULLPTR));
        actionNew->setText(QApplication::translate("mw", "New", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("mw", "Open", Q_NULLPTR));
        actionSave->setText(QApplication::translate("mw", "Save", Q_NULLPTR));
        actionSave_As->setText(QApplication::translate("mw", "Save As", Q_NULLPTR));
        actionOptions->setText(QApplication::translate("mw", "Options", Q_NULLPTR));
        actionDice->setText(QApplication::translate("mw", "Dice", Q_NULLPTR));
        actionGenMap->setText(QApplication::translate("mw", "GenMap", Q_NULLPTR));
        actionopen->setText(QApplication::translate("mw", "open", Q_NULLPTR));
        actionsave->setText(QApplication::translate("mw", "save", Q_NULLPTR));
        lb_Class->setText(QApplication::translate("mw", "Class", Q_NULLPTR));
        vlb_Class->setText(QString());
        lb_background->setText(QApplication::translate("mw", "Background", Q_NULLPTR));
        vlb_background->setText(QString());
        lb_alignment->setText(QApplication::translate("mw", "Alignment", Q_NULLPTR));
        vlb_alignment->setText(QString());
        lb_HitDice->setText(QApplication::translate("mw", "Hit Dice", Q_NULLPTR));
        vlb_HitDice->setText(QString());
        lb_race->setText(QApplication::translate("mw", "Race", Q_NULLPTR));
        vlb_race->setText(QString());
        lb_experience->setText(QApplication::translate("mw", "experience", Q_NULLPTR));
        vlb_experience->setText(QString());
        lb_subRace->setText(QApplication::translate("mw", "Sub Race", Q_NULLPTR));
        vlb_subRace->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tb_stats), QApplication::translate("mw", "Stats", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tb_invetory), QApplication::translate("mw", "Inventory", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("mw", "Map", Q_NULLPTR));
        bt_dice->setText(QApplication::translate("mw", "Dice", Q_NULLPTR));
        bt_new->setText(QApplication::translate("mw", "New", Q_NULLPTR));
        bt_save->setText(QApplication::translate("mw", "Save", Q_NULLPTR));
        lb_name->setText(QApplication::translate("mw", "Name", Q_NULLPTR));
        lb_level->setText(QApplication::translate("mw", "Level", Q_NULLPTR));
        lb_initiative->setText(QApplication::translate("mw", "Initiative", Q_NULLPTR));
        lb_armorclass->setText(QApplication::translate("mw", "Armor Class", Q_NULLPTR));
        lb_speed->setText(QApplication::translate("mw", "Speed", Q_NULLPTR));
        lb_proficiency->setText(QApplication::translate("mw", "Proficiency", Q_NULLPTR));
        lb_hp->setText(QApplication::translate("mw", "Hp", Q_NULLPTR));
        lb_str->setText(QApplication::translate("mw", "Strength", Q_NULLPTR));
        lb_int->setText(QApplication::translate("mw", "Intelligence", Q_NULLPTR));
        lb_dex->setText(QApplication::translate("mw", "Dexterity", Q_NULLPTR));
        lb_wis->setText(QApplication::translate("mw", "Wisdom", Q_NULLPTR));
        lb_con->setText(QApplication::translate("mw", "Constitution", Q_NULLPTR));
        lb_cha->setText(QApplication::translate("mw", "charisma", Q_NULLPTR));
        vlb_name->setText(QString());
        vlb_level->setText(QString());
        vlb_initiative->setText(QString());
        vlb_armorClass->setText(QString());
        vlb_speed->setText(QString());
        vlb_proficiency->setText(QString());
        vlb_hp->setText(QString());
        vlb_str->setText(QString());
        vlb_int->setText(QString());
        vlb_dex->setText(QString());
        vlb_wis->setText(QString());
        vlb_con->setText(QString());
        vlb_cha->setText(QString());
        bt_open->setText(QApplication::translate("mw", "Open", Q_NULLPTR));
        bt_update->setText(QApplication::translate("mw", "update", Q_NULLPTR));
        lb_info->setText(QApplication::translate("mw", "This is a Simple D&D Character sheet created by Dakota James Owen Keeler", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("mw", "File", Q_NULLPTR));
        menuSettings->setTitle(QApplication::translate("mw", "Settings", Q_NULLPTR));
        menuMap->setTitle(QApplication::translate("mw", "Map", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mw: public Ui_mw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MW_H
