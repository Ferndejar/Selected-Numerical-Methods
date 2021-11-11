/********************************************************************************
** Form generated from reading UI file 'Power2NumerWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POWER2NUMERWINDOW_H
#define UI_POWER2NUMERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Power2Numbers
{
public:
    QAction *actionInstrukcja;
    QAction *actionPrzyklad;
    QWidget *centralwidget;
    QLabel *windowLabel;
    QLabel *powerLabel;
    QLineEdit *powerEditBox;
    QPushButton *computeButton;
    QLabel *resultLabel;
    QTextEdit *resultTextBox;
    QMenuBar *menuBar;
    QMenu *menuPomoc;

    void setupUi(QMainWindow *Power2Numbers)
    {
        if (Power2Numbers->objectName().isEmpty())
            Power2Numbers->setObjectName(QString::fromUtf8("Power2Numbers"));
        Power2Numbers->resize(288, 275);
        Power2Numbers->setMinimumSize(QSize(288, 247));
        Power2Numbers->setMaximumSize(QSize(288, 275));
        actionInstrukcja = new QAction(Power2Numbers);
        actionInstrukcja->setObjectName(QString::fromUtf8("actionInstrukcja"));
        actionPrzyklad = new QAction(Power2Numbers);
        actionPrzyklad->setObjectName(QString::fromUtf8("actionPrzyklad"));
        centralwidget = new QWidget(Power2Numbers);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        windowLabel = new QLabel(centralwidget);
        windowLabel->setObjectName(QString::fromUtf8("windowLabel"));
        windowLabel->setGeometry(QRect(15, 10, 301, 16));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        windowLabel->setFont(font);
        powerLabel = new QLabel(centralwidget);
        powerLabel->setObjectName(QString::fromUtf8("powerLabel"));
        powerLabel->setGeometry(QRect(15, 35, 301, 16));
        QFont font1;
        font1.setPointSize(10);
        powerLabel->setFont(font1);
        powerEditBox = new QLineEdit(centralwidget);
        powerEditBox->setObjectName(QString::fromUtf8("powerEditBox"));
        powerEditBox->setGeometry(QRect(15, 55, 256, 20));
        powerEditBox->setFont(font1);
        computeButton = new QPushButton(centralwidget);
        computeButton->setObjectName(QString::fromUtf8("computeButton"));
        computeButton->setGeometry(QRect(15, 85, 256, 31));
        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(15, 120, 131, 16));
        resultLabel->setFont(font1);
        resultTextBox = new QTextEdit(centralwidget);
        resultTextBox->setObjectName(QString::fromUtf8("resultTextBox"));
        resultTextBox->setGeometry(QRect(15, 140, 256, 91));
        resultTextBox->setReadOnly(true);
        Power2Numbers->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(Power2Numbers);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 288, 18));
        menuPomoc = new QMenu(menuBar);
        menuPomoc->setObjectName(QString::fromUtf8("menuPomoc"));
        Power2Numbers->setMenuBar(menuBar);

        menuBar->addAction(menuPomoc->menuAction());
        menuPomoc->addAction(actionInstrukcja);
        menuPomoc->addAction(actionPrzyklad);

        retranslateUi(Power2Numbers);

        QMetaObject::connectSlotsByName(Power2Numbers);
    } // setupUi

    void retranslateUi(QMainWindow *Power2Numbers)
    {
        Power2Numbers->setWindowTitle(QApplication::translate("Power2Numbers", "Pierwsze liczby pot\304\231gi dw\303\263jek", nullptr));
        actionInstrukcja->setText(QApplication::translate("Power2Numbers", "Instrukcja", nullptr));
        actionPrzyklad->setText(QApplication::translate("Power2Numbers", "Przyklad", nullptr));
        windowLabel->setText(QApplication::translate("Power2Numbers", "Pierwsze liczby pot\304\231g 2", nullptr));
        powerLabel->setText(QApplication::translate("Power2Numbers", "Pot\304\231ga 2:", nullptr));
        powerEditBox->setText(QApplication::translate("Power2Numbers", "0", nullptr));
        computeButton->setText(QApplication::translate("Power2Numbers", "Oblicz", nullptr));
        resultLabel->setText(QApplication::translate("Power2Numbers", "Wynik:", nullptr));
        menuPomoc->setTitle(QApplication::translate("Power2Numbers", "Pomoc", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Power2Numbers: public Ui_Power2Numbers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POWER2NUMERWINDOW_H
