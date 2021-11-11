/********************************************************************************
** Form generated from reading UI file 'PermutationsWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERMUTATIONSWINDOW_H
#define UI_PERMUTATIONSWINDOW_H

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

class Ui_PermutationsWindow
{
public:
    QAction *actionInstrukcja;
    QAction *actionPrzyklad;
    QWidget *centralwidget;
    QLabel *windowLabel_2;
    QLabel *descriptionLabel;
    QLabel *precisionLabel;
    QLineEdit *precisionEditBox;
    QLabel *nelemLabel;
    QLineEdit *nelemEditBox;
    QLabel *resultLabel;
    QPushButton *computeButton;
    QTextEdit *resultTextBox;
    QLabel *numberLabel;
    QLineEdit *numberEditBox;
    QMenuBar *menuBar;
    QMenu *menuPomoc;

    void setupUi(QMainWindow *PermutationsWindow)
    {
        if (PermutationsWindow->objectName().isEmpty())
            PermutationsWindow->setObjectName(QString::fromUtf8("PermutationsWindow"));
        PermutationsWindow->resize(287, 417);
        PermutationsWindow->setMinimumSize(QSize(287, 398));
        PermutationsWindow->setMaximumSize(QSize(287, 417));
        actionInstrukcja = new QAction(PermutationsWindow);
        actionInstrukcja->setObjectName(QString::fromUtf8("actionInstrukcja"));
        actionPrzyklad = new QAction(PermutationsWindow);
        actionPrzyklad->setObjectName(QString::fromUtf8("actionPrzyklad"));
        centralwidget = new QWidget(PermutationsWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        windowLabel_2 = new QLabel(centralwidget);
        windowLabel_2->setObjectName(QString::fromUtf8("windowLabel_2"));
        windowLabel_2->setGeometry(QRect(15, 10, 301, 16));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        windowLabel_2->setFont(font);
        descriptionLabel = new QLabel(centralwidget);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(15, 30, 251, 61));
        descriptionLabel->setWordWrap(true);
        precisionLabel = new QLabel(centralwidget);
        precisionLabel->setObjectName(QString::fromUtf8("precisionLabel"));
        precisionLabel->setGeometry(QRect(15, 140, 301, 16));
        QFont font1;
        font1.setPointSize(10);
        precisionLabel->setFont(font1);
        precisionEditBox = new QLineEdit(centralwidget);
        precisionEditBox->setObjectName(QString::fromUtf8("precisionEditBox"));
        precisionEditBox->setGeometry(QRect(15, 160, 256, 20));
        precisionEditBox->setFont(font1);
        nelemLabel = new QLabel(centralwidget);
        nelemLabel->setObjectName(QString::fromUtf8("nelemLabel"));
        nelemLabel->setGeometry(QRect(15, 185, 301, 16));
        nelemLabel->setFont(font1);
        nelemEditBox = new QLineEdit(centralwidget);
        nelemEditBox->setObjectName(QString::fromUtf8("nelemEditBox"));
        nelemEditBox->setGeometry(QRect(15, 205, 256, 20));
        nelemEditBox->setFont(font1);
        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(15, 270, 131, 16));
        resultLabel->setFont(font1);
        computeButton = new QPushButton(centralwidget);
        computeButton->setObjectName(QString::fromUtf8("computeButton"));
        computeButton->setGeometry(QRect(15, 235, 256, 31));
        resultTextBox = new QTextEdit(centralwidget);
        resultTextBox->setObjectName(QString::fromUtf8("resultTextBox"));
        resultTextBox->setGeometry(QRect(15, 290, 256, 91));
        resultTextBox->setReadOnly(true);
        numberLabel = new QLabel(centralwidget);
        numberLabel->setObjectName(QString::fromUtf8("numberLabel"));
        numberLabel->setGeometry(QRect(15, 95, 301, 16));
        numberLabel->setFont(font1);
        numberEditBox = new QLineEdit(centralwidget);
        numberEditBox->setObjectName(QString::fromUtf8("numberEditBox"));
        numberEditBox->setGeometry(QRect(15, 115, 256, 20));
        numberEditBox->setFont(font1);
        PermutationsWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(PermutationsWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 287, 18));
        menuPomoc = new QMenu(menuBar);
        menuPomoc->setObjectName(QString::fromUtf8("menuPomoc"));
        PermutationsWindow->setMenuBar(menuBar);

        menuBar->addAction(menuPomoc->menuAction());
        menuPomoc->addAction(actionInstrukcja);
        menuPomoc->addAction(actionPrzyklad);

        retranslateUi(PermutationsWindow);

        QMetaObject::connectSlotsByName(PermutationsWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PermutationsWindow)
    {
        PermutationsWindow->setWindowTitle(QApplication::translate("PermutationsWindow", "Permutacje", nullptr));
        actionInstrukcja->setText(QApplication::translate("PermutationsWindow", "Instrukcja", nullptr));
        actionPrzyklad->setText(QApplication::translate("PermutationsWindow", "Przyklad", nullptr));
        windowLabel_2->setText(QApplication::translate("PermutationsWindow", "Permutacje", nullptr));
        descriptionLabel->setText(QApplication::translate("PermutationsWindow", "Program zwraca wartosc sumy czesciowej permutowanego szeregu, ktora przybliza podana wartosc z zadana dokladnoscia lub zawiera wymagana liczbe pierwszych wyrazow", nullptr));
        precisionLabel->setText(QApplication::translate("PermutationsWindow", "Dok\305\202adno\305\233\304\207:", nullptr));
        precisionEditBox->setText(QApplication::translate("PermutationsWindow", "0.001", nullptr));
        nelemLabel->setText(QApplication::translate("PermutationsWindow", "Liczba pierwszych wyraz\303\263w:", nullptr));
        nelemEditBox->setText(QApplication::translate("PermutationsWindow", "1", nullptr));
        resultLabel->setText(QApplication::translate("PermutationsWindow", "Wynik:", nullptr));
        computeButton->setText(QApplication::translate("PermutationsWindow", "Oblicz", nullptr));
        numberLabel->setText(QApplication::translate("PermutationsWindow", "Liczba:", nullptr));
        numberEditBox->setText(QApplication::translate("PermutationsWindow", "0", nullptr));
        menuPomoc->setTitle(QApplication::translate("PermutationsWindow", "Pomoc", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PermutationsWindow: public Ui_PermutationsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERMUTATIONSWINDOW_H
