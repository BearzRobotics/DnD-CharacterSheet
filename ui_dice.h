/********************************************************************************
** Form generated from reading UI file 'dice.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DICE_H
#define UI_DICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dice
{
public:
    QPushButton *bt_clear;
    QPushButton *bt_exit;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpinBox *sp_d2;
    QPushButton *bt_d2;
    QLabel *vlb_d2;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *sp_d4;
    QPushButton *bt_d4;
    QLabel *vlb_d4;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *sp_d6;
    QPushButton *bt_d6;
    QLabel *vlb_d6;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *sp_d10;
    QPushButton *bt_d10;
    QLabel *vlb_d10;
    QHBoxLayout *horizontalLayout_5;
    QSpinBox *sp_d12;
    QPushButton *bt_d12;
    QLabel *vlb_d12;
    QHBoxLayout *horizontalLayout_6;
    QSpinBox *sp_d20;
    QPushButton *bt_d20;
    QLabel *vlb_d20;
    QHBoxLayout *horizontalLayout_7;
    QSpinBox *sp_d100;
    QPushButton *bt_d100;
    QLabel *vlb_d100;

    void setupUi(QWidget *dice)
    {
        if (dice->objectName().isEmpty())
            dice->setObjectName(QStringLiteral("dice"));
        dice->resize(238, 389);
        dice->setMinimumSize(QSize(238, 389));
        dice->setMaximumSize(QSize(238, 389));
        bt_clear = new QPushButton(dice);
        bt_clear->setObjectName(QStringLiteral("bt_clear"));
        bt_clear->setGeometry(QRect(140, 350, 96, 34));
        bt_exit = new QPushButton(dice);
        bt_exit->setObjectName(QStringLiteral("bt_exit"));
        bt_exit->setGeometry(QRect(40, 350, 96, 34));
        layoutWidget = new QWidget(dice);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 231, 331));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        sp_d2 = new QSpinBox(layoutWidget);
        sp_d2->setObjectName(QStringLiteral("sp_d2"));

        horizontalLayout->addWidget(sp_d2);

        bt_d2 = new QPushButton(layoutWidget);
        bt_d2->setObjectName(QStringLiteral("bt_d2"));

        horizontalLayout->addWidget(bt_d2);

        vlb_d2 = new QLabel(layoutWidget);
        vlb_d2->setObjectName(QStringLiteral("vlb_d2"));
        vlb_d2->setMinimumSize(QSize(50, 0));
        vlb_d2->setMaximumSize(QSize(50, 25));

        horizontalLayout->addWidget(vlb_d2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        sp_d4 = new QSpinBox(layoutWidget);
        sp_d4->setObjectName(QStringLiteral("sp_d4"));

        horizontalLayout_2->addWidget(sp_d4);

        bt_d4 = new QPushButton(layoutWidget);
        bt_d4->setObjectName(QStringLiteral("bt_d4"));

        horizontalLayout_2->addWidget(bt_d4);

        vlb_d4 = new QLabel(layoutWidget);
        vlb_d4->setObjectName(QStringLiteral("vlb_d4"));
        vlb_d4->setMinimumSize(QSize(50, 0));
        vlb_d4->setMaximumSize(QSize(50, 25));

        horizontalLayout_2->addWidget(vlb_d4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        sp_d6 = new QSpinBox(layoutWidget);
        sp_d6->setObjectName(QStringLiteral("sp_d6"));

        horizontalLayout_3->addWidget(sp_d6);

        bt_d6 = new QPushButton(layoutWidget);
        bt_d6->setObjectName(QStringLiteral("bt_d6"));

        horizontalLayout_3->addWidget(bt_d6);

        vlb_d6 = new QLabel(layoutWidget);
        vlb_d6->setObjectName(QStringLiteral("vlb_d6"));
        vlb_d6->setMinimumSize(QSize(50, 0));
        vlb_d6->setMaximumSize(QSize(50, 25));

        horizontalLayout_3->addWidget(vlb_d6);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        sp_d10 = new QSpinBox(layoutWidget);
        sp_d10->setObjectName(QStringLiteral("sp_d10"));

        horizontalLayout_4->addWidget(sp_d10);

        bt_d10 = new QPushButton(layoutWidget);
        bt_d10->setObjectName(QStringLiteral("bt_d10"));

        horizontalLayout_4->addWidget(bt_d10);

        vlb_d10 = new QLabel(layoutWidget);
        vlb_d10->setObjectName(QStringLiteral("vlb_d10"));
        vlb_d10->setMinimumSize(QSize(50, 0));
        vlb_d10->setMaximumSize(QSize(50, 25));

        horizontalLayout_4->addWidget(vlb_d10);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        sp_d12 = new QSpinBox(layoutWidget);
        sp_d12->setObjectName(QStringLiteral("sp_d12"));

        horizontalLayout_5->addWidget(sp_d12);

        bt_d12 = new QPushButton(layoutWidget);
        bt_d12->setObjectName(QStringLiteral("bt_d12"));

        horizontalLayout_5->addWidget(bt_d12);

        vlb_d12 = new QLabel(layoutWidget);
        vlb_d12->setObjectName(QStringLiteral("vlb_d12"));
        vlb_d12->setMinimumSize(QSize(50, 0));
        vlb_d12->setMaximumSize(QSize(50, 25));

        horizontalLayout_5->addWidget(vlb_d12);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        sp_d20 = new QSpinBox(layoutWidget);
        sp_d20->setObjectName(QStringLiteral("sp_d20"));

        horizontalLayout_6->addWidget(sp_d20);

        bt_d20 = new QPushButton(layoutWidget);
        bt_d20->setObjectName(QStringLiteral("bt_d20"));

        horizontalLayout_6->addWidget(bt_d20);

        vlb_d20 = new QLabel(layoutWidget);
        vlb_d20->setObjectName(QStringLiteral("vlb_d20"));
        vlb_d20->setMinimumSize(QSize(50, 0));
        vlb_d20->setMaximumSize(QSize(50, 25));

        horizontalLayout_6->addWidget(vlb_d20);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        sp_d100 = new QSpinBox(layoutWidget);
        sp_d100->setObjectName(QStringLiteral("sp_d100"));

        horizontalLayout_7->addWidget(sp_d100);

        bt_d100 = new QPushButton(layoutWidget);
        bt_d100->setObjectName(QStringLiteral("bt_d100"));

        horizontalLayout_7->addWidget(bt_d100);

        vlb_d100 = new QLabel(layoutWidget);
        vlb_d100->setObjectName(QStringLiteral("vlb_d100"));
        vlb_d100->setMinimumSize(QSize(50, 0));
        vlb_d100->setMaximumSize(QSize(50, 25));

        horizontalLayout_7->addWidget(vlb_d100);


        verticalLayout->addLayout(horizontalLayout_7);


        retranslateUi(dice);
        QObject::connect(bt_exit, SIGNAL(clicked()), dice, SLOT(close()));

        QMetaObject::connectSlotsByName(dice);
    } // setupUi

    void retranslateUi(QWidget *dice)
    {
        dice->setWindowTitle(QApplication::translate("dice", "Form", Q_NULLPTR));
        bt_clear->setText(QApplication::translate("dice", "clear", Q_NULLPTR));
        bt_exit->setText(QApplication::translate("dice", "Exit", Q_NULLPTR));
        bt_d2->setText(QApplication::translate("dice", "d2", Q_NULLPTR));
        vlb_d2->setText(QString());
        bt_d4->setText(QApplication::translate("dice", "d4", Q_NULLPTR));
        vlb_d4->setText(QString());
        bt_d6->setText(QApplication::translate("dice", "d6", Q_NULLPTR));
        vlb_d6->setText(QString());
        bt_d10->setText(QApplication::translate("dice", "d10", Q_NULLPTR));
        vlb_d10->setText(QString());
        bt_d12->setText(QApplication::translate("dice", "d12", Q_NULLPTR));
        vlb_d12->setText(QString());
        bt_d20->setText(QApplication::translate("dice", "d20", Q_NULLPTR));
        vlb_d20->setText(QString());
        bt_d100->setText(QApplication::translate("dice", "d100", Q_NULLPTR));
        vlb_d100->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dice: public Ui_dice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DICE_H
