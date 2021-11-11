/********************************************************************************
** Form generated from reading UI file 'PolynomialRootsWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLYNOMIALROOTSWINDOW_H
#define UI_POLYNOMIALROOTSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PolynomialRoots
{
public:
    QAction *actionInstrukcja;
    QAction *actionBisection;
    QAction *actionNewton;
    QWidget *centralwidget;
    QLabel *coeffiicientsLabel;
    QLineEdit *coefficientsEditBox;
    QLabel *precisionLabel;
    QLineEdit *precisionEditBox;
    QGroupBox *methodGroupBox;
    QRadioButton *bisectionRadioButton;
    QRadioButton *newtonRadioButton;
    QLineEdit *beginEditBox;
    QLabel *beginLabel;
    QLabel *endLabel;
    QLineEdit *endEditBox;
    QLabel *resultLabel;
    QLabel *windowLabel;
    QPushButton *computeButton;
    QTextEdit *resultTextBox;
    QMenuBar *menuBar;
    QMenu *menuPomoc;
    QMenu *menuPrzyklad;

    void setupUi(QMainWindow *PolynomialRoots)
    {
        if (PolynomialRoots->objectName().isEmpty())
            PolynomialRoots->setObjectName(QString::fromUtf8("PolynomialRoots"));
        PolynomialRoots->setEnabled(true);
        PolynomialRoots->resize(286, 395);
        PolynomialRoots->setMinimumSize(QSize(286, 325));
        PolynomialRoots->setMaximumSize(QSize(286, 395));
        actionInstrukcja = new QAction(PolynomialRoots);
        actionInstrukcja->setObjectName(QString::fromUtf8("actionInstrukcja"));
        actionBisection = new QAction(PolynomialRoots);
        actionBisection->setObjectName(QString::fromUtf8("actionBisection"));
        actionNewton = new QAction(PolynomialRoots);
        actionNewton->setObjectName(QString::fromUtf8("actionNewton"));
        centralwidget = new QWidget(PolynomialRoots);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        coeffiicientsLabel = new QLabel(centralwidget);
        coeffiicientsLabel->setObjectName(QString::fromUtf8("coeffiicientsLabel"));
        coeffiicientsLabel->setGeometry(QRect(15, 35, 301, 16));
        QFont font;
        font.setPointSize(10);
        coeffiicientsLabel->setFont(font);
        coefficientsEditBox = new QLineEdit(centralwidget);
        coefficientsEditBox->setObjectName(QString::fromUtf8("coefficientsEditBox"));
        coefficientsEditBox->setGeometry(QRect(15, 55, 256, 20));
        coefficientsEditBox->setFont(font);
        precisionLabel = new QLabel(centralwidget);
        precisionLabel->setObjectName(QString::fromUtf8("precisionLabel"));
        precisionLabel->setGeometry(QRect(15, 80, 301, 16));
        precisionLabel->setFont(font);
        precisionEditBox = new QLineEdit(centralwidget);
        precisionEditBox->setObjectName(QString::fromUtf8("precisionEditBox"));
        precisionEditBox->setGeometry(QRect(15, 100, 256, 20));
        precisionEditBox->setFont(font);
        methodGroupBox = new QGroupBox(centralwidget);
        methodGroupBox->setObjectName(QString::fromUtf8("methodGroupBox"));
        methodGroupBox->setGeometry(QRect(15, 130, 256, 46));
        methodGroupBox->setFont(font);
        bisectionRadioButton = new QRadioButton(methodGroupBox);
        bisectionRadioButton->setObjectName(QString::fromUtf8("bisectionRadioButton"));
        bisectionRadioButton->setGeometry(QRect(15, 20, 96, 17));
        bisectionRadioButton->setFont(font);
        bisectionRadioButton->setChecked(true);
        newtonRadioButton = new QRadioButton(methodGroupBox);
        newtonRadioButton->setObjectName(QString::fromUtf8("newtonRadioButton"));
        newtonRadioButton->setGeometry(QRect(115, 20, 81, 17));
        newtonRadioButton->setFont(font);
        beginEditBox = new QLineEdit(centralwidget);
        beginEditBox->setObjectName(QString::fromUtf8("beginEditBox"));
        beginEditBox->setGeometry(QRect(15, 205, 106, 20));
        beginEditBox->setFont(font);
        beginLabel = new QLabel(centralwidget);
        beginLabel->setObjectName(QString::fromUtf8("beginLabel"));
        beginLabel->setGeometry(QRect(15, 185, 131, 16));
        beginLabel->setFont(font);
        endLabel = new QLabel(centralwidget);
        endLabel->setObjectName(QString::fromUtf8("endLabel"));
        endLabel->setGeometry(QRect(165, 185, 131, 16));
        endLabel->setFont(font);
        endEditBox = new QLineEdit(centralwidget);
        endEditBox->setObjectName(QString::fromUtf8("endEditBox"));
        endEditBox->setGeometry(QRect(165, 205, 106, 20));
        endEditBox->setFont(font);
        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(15, 270, 131, 16));
        resultLabel->setFont(font);
        windowLabel = new QLabel(centralwidget);
        windowLabel->setObjectName(QString::fromUtf8("windowLabel"));
        windowLabel->setGeometry(QRect(15, 10, 301, 16));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        windowLabel->setFont(font1);
        computeButton = new QPushButton(centralwidget);
        computeButton->setObjectName(QString::fromUtf8("computeButton"));
        computeButton->setGeometry(QRect(15, 235, 256, 31));
        resultTextBox = new QTextEdit(centralwidget);
        resultTextBox->setObjectName(QString::fromUtf8("resultTextBox"));
        resultTextBox->setEnabled(true);
        resultTextBox->setGeometry(QRect(15, 290, 256, 61));
        resultTextBox->setReadOnly(true);
        PolynomialRoots->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(PolynomialRoots);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 286, 18));
        menuPomoc = new QMenu(menuBar);
        menuPomoc->setObjectName(QString::fromUtf8("menuPomoc"));
        menuPrzyklad = new QMenu(menuPomoc);
        menuPrzyklad->setObjectName(QString::fromUtf8("menuPrzyklad"));
        PolynomialRoots->setMenuBar(menuBar);

        menuBar->addAction(menuPomoc->menuAction());
        menuPomoc->addAction(actionInstrukcja);
        menuPomoc->addAction(menuPrzyklad->menuAction());
        menuPrzyklad->addAction(actionBisection);
        menuPrzyklad->addAction(actionNewton);

        retranslateUi(PolynomialRoots);

        QMetaObject::connectSlotsByName(PolynomialRoots);
    } // setupUi

    void retranslateUi(QMainWindow *PolynomialRoots)
    {
        PolynomialRoots->setWindowTitle(QApplication::translate("PolynomialRoots", "Miejsca zerowe wielomianu", nullptr));
        actionInstrukcja->setText(QApplication::translate("PolynomialRoots", "Instrukcja", nullptr));
        actionBisection->setText(QApplication::translate("PolynomialRoots", "Po\305\202owienia", nullptr));
        actionNewton->setText(QApplication::translate("PolynomialRoots", "Newtona", nullptr));
        coeffiicientsLabel->setText(QApplication::translate("PolynomialRoots", "Wsp\303\263\305\202czynniki (oddzielone spacjami):", nullptr));
        coefficientsEditBox->setText(QApplication::translate("PolynomialRoots", "0", nullptr));
        precisionLabel->setText(QApplication::translate("PolynomialRoots", "Dok\305\202adno\305\233\304\207:", nullptr));
        precisionEditBox->setText(QApplication::translate("PolynomialRoots", "0.001", nullptr));
        methodGroupBox->setTitle(QApplication::translate("PolynomialRoots", "Metoda", nullptr));
        bisectionRadioButton->setText(QApplication::translate("PolynomialRoots", "po\305\202owienia", nullptr));
        newtonRadioButton->setText(QApplication::translate("PolynomialRoots", "Newtona", nullptr));
        beginEditBox->setText(QApplication::translate("PolynomialRoots", "-10", nullptr));
        beginLabel->setText(QApplication::translate("PolynomialRoots", "Pocz\304\205tek przedzia\305\202u:", nullptr));
        endLabel->setText(QApplication::translate("PolynomialRoots", "Koniec przedzia\305\202u:", nullptr));
        endEditBox->setText(QApplication::translate("PolynomialRoots", "10", nullptr));
        resultLabel->setText(QApplication::translate("PolynomialRoots", "Wynik:", nullptr));
        windowLabel->setText(QApplication::translate("PolynomialRoots", "Miejsca zerowe wielomianu", nullptr));
        computeButton->setText(QApplication::translate("PolynomialRoots", "Oblicz", nullptr));
        menuPomoc->setTitle(QApplication::translate("PolynomialRoots", "Pomoc", nullptr));
        menuPrzyklad->setTitle(QApplication::translate("PolynomialRoots", "Przyklad", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PolynomialRoots: public Ui_PolynomialRoots {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYNOMIALROOTSWINDOW_H
