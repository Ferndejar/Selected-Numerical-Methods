/********************************************************************************
** Form generated from reading UI file 'ModuloShiftWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODULOSHIFTWINDOW_H
#define UI_MODULOSHIFTWINDOW_H

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

class Ui_ModuloShiftWindow
{
public:
    QAction *actionInstrukcja;
    QAction *actionPrzyklad;
    QWidget *centralwidget;
    QLabel *resultLabel;
    QLabel *windowLabel;
    QPushButton *computeButton;
    QLabel *valueLabel;
    QLineEdit *valueEditBox;
    QGroupBox *methodGroupBox;
    QRadioButton *sqrtRadioButton;
    QRadioButton *piRadioButton;
    QRadioButton *eRadioButton;
    QLabel *sizeLabel;
    QLineEdit *sizeEditBox;
    QTextEdit *resultTextBox;
    QMenuBar *menuBar;
    QMenu *menuPomoc;

    void setupUi(QMainWindow *ModuloShiftWindow)
    {
        if (ModuloShiftWindow->objectName().isEmpty())
            ModuloShiftWindow->setObjectName(QString::fromUtf8("ModuloShiftWindow"));
        ModuloShiftWindow->resize(289, 365);
        ModuloShiftWindow->setMinimumSize(QSize(287, 287));
        ModuloShiftWindow->setMaximumSize(QSize(289, 365));
        actionInstrukcja = new QAction(ModuloShiftWindow);
        actionInstrukcja->setObjectName(QString::fromUtf8("actionInstrukcja"));
        actionPrzyklad = new QAction(ModuloShiftWindow);
        actionPrzyklad->setObjectName(QString::fromUtf8("actionPrzyklad"));
        centralwidget = new QWidget(ModuloShiftWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(15, 235, 131, 16));
        QFont font;
        font.setPointSize(10);
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
        computeButton->setGeometry(QRect(15, 200, 256, 31));
        valueLabel = new QLabel(centralwidget);
        valueLabel->setObjectName(QString::fromUtf8("valueLabel"));
        valueLabel->setGeometry(QRect(15, 140, 301, 16));
        valueLabel->setFont(font);
        valueEditBox = new QLineEdit(centralwidget);
        valueEditBox->setObjectName(QString::fromUtf8("valueEditBox"));
        valueEditBox->setGeometry(QRect(15, 160, 256, 20));
        valueEditBox->setFont(font);
        methodGroupBox = new QGroupBox(centralwidget);
        methodGroupBox->setObjectName(QString::fromUtf8("methodGroupBox"));
        methodGroupBox->setGeometry(QRect(15, 35, 256, 46));
        methodGroupBox->setFont(font);
        sqrtRadioButton = new QRadioButton(methodGroupBox);
        sqrtRadioButton->setObjectName(QString::fromUtf8("sqrtRadioButton"));
        sqrtRadioButton->setGeometry(QRect(15, 20, 121, 17));
        sqrtRadioButton->setFont(font);
        sqrtRadioButton->setChecked(true);
        piRadioButton = new QRadioButton(methodGroupBox);
        piRadioButton->setObjectName(QString::fromUtf8("piRadioButton"));
        piRadioButton->setGeometry(QRect(130, 20, 91, 17));
        piRadioButton->setFont(font);
        eRadioButton = new QRadioButton(methodGroupBox);
        eRadioButton->setObjectName(QString::fromUtf8("eRadioButton"));
        eRadioButton->setGeometry(QRect(190, 20, 91, 17));
        eRadioButton->setFont(font);
        sizeLabel = new QLabel(centralwidget);
        sizeLabel->setObjectName(QString::fromUtf8("sizeLabel"));
        sizeLabel->setGeometry(QRect(15, 90, 300, 10));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        sizeLabel->setFont(font2);
        sizeEditBox = new QLineEdit(centralwidget);
        sizeEditBox->setObjectName(QString::fromUtf8("sizeEditBox"));
        sizeEditBox->setGeometry(QRect(15, 110, 256, 20));
        sizeEditBox->setFont(font);
        resultTextBox = new QTextEdit(centralwidget);
        resultTextBox->setObjectName(QString::fromUtf8("resultTextBox"));
        resultTextBox->setGeometry(QRect(15, 260, 256, 61));
        resultTextBox->setReadOnly(true);
        ModuloShiftWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(ModuloShiftWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 289, 18));
        menuPomoc = new QMenu(menuBar);
        menuPomoc->setObjectName(QString::fromUtf8("menuPomoc"));
        ModuloShiftWindow->setMenuBar(menuBar);

        menuBar->addAction(menuPomoc->menuAction());
        menuPomoc->addAction(actionInstrukcja);
        menuPomoc->addAction(actionPrzyklad);

        retranslateUi(ModuloShiftWindow);

        QMetaObject::connectSlotsByName(ModuloShiftWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ModuloShiftWindow)
    {
        ModuloShiftWindow->setWindowTitle(QApplication::translate("ModuloShiftWindow", "Przesuni\304\231cie modulo", nullptr));
        actionInstrukcja->setText(QApplication::translate("ModuloShiftWindow", "Instrukcja", nullptr));
        actionPrzyklad->setText(QApplication::translate("ModuloShiftWindow", "Przyklad", nullptr));
        resultLabel->setText(QApplication::translate("ModuloShiftWindow", "Wynik:", nullptr));
        windowLabel->setText(QApplication::translate("ModuloShiftWindow", "Przesuni\304\231cie modulo", nullptr));
        computeButton->setText(QApplication::translate("ModuloShiftWindow", "Oblicz", nullptr));
        valueLabel->setText(QApplication::translate("ModuloShiftWindow", "Warto\305\233\304\207:", nullptr));
        valueEditBox->setText(QApplication::translate("ModuloShiftWindow", "0", nullptr));
        methodGroupBox->setTitle(QApplication::translate("ModuloShiftWindow", "Przesuni\304\231cie", nullptr));
        sqrtRadioButton->setText(QApplication::translate("ModuloShiftWindow", "o pierwiastek", nullptr));
        piRadioButton->setText(QApplication::translate("ModuloShiftWindow", "o PI", nullptr));
        eRadioButton->setText(QApplication::translate("ModuloShiftWindow", "o e", nullptr));
        sizeLabel->setText(QApplication::translate("ModuloShiftWindow", "Rozmiar:", nullptr));
        sizeEditBox->setText(QApplication::translate("ModuloShiftWindow", "0", nullptr));
        menuPomoc->setTitle(QApplication::translate("ModuloShiftWindow", "Pomoc", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModuloShiftWindow: public Ui_ModuloShiftWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODULOSHIFTWINDOW_H
