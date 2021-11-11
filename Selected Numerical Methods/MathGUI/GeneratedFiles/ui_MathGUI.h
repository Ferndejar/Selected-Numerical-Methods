/********************************************************************************
** Form generated from reading UI file 'MathGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATHGUI_H
#define UI_MATHGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MathGUIClass
{
public:
    QWidget *centralWidget;
    QPushButton *polynomialRootsButton;
    QPushButton *linearRegressionButton;
    QPushButton *pow2NumbersButton;
    QPushButton *moduloShiftButton;
    QPushButton *permutationsButton;
    QPushButton *subseriesButton;

    void setupUi(QMainWindow *MathGUIClass)
    {
        if (MathGUIClass->objectName().isEmpty())
            MathGUIClass->setObjectName(QString::fromUtf8("MathGUIClass"));
        MathGUIClass->resize(185, 296);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MathGUIClass->sizePolicy().hasHeightForWidth());
        MathGUIClass->setSizePolicy(sizePolicy);
        MathGUIClass->setMinimumSize(QSize(185, 296));
        MathGUIClass->setMaximumSize(QSize(185, 296));
        MathGUIClass->setSizeIncrement(QSize(10, 10));
        centralWidget = new QWidget(MathGUIClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        polynomialRootsButton = new QPushButton(centralWidget);
        polynomialRootsButton->setObjectName(QString::fromUtf8("polynomialRootsButton"));
        polynomialRootsButton->setGeometry(QRect(15, 15, 156, 41));
        linearRegressionButton = new QPushButton(centralWidget);
        linearRegressionButton->setObjectName(QString::fromUtf8("linearRegressionButton"));
        linearRegressionButton->setGeometry(QRect(15, 60, 156, 41));
        pow2NumbersButton = new QPushButton(centralWidget);
        pow2NumbersButton->setObjectName(QString::fromUtf8("pow2NumbersButton"));
        pow2NumbersButton->setGeometry(QRect(15, 105, 156, 41));
        moduloShiftButton = new QPushButton(centralWidget);
        moduloShiftButton->setObjectName(QString::fromUtf8("moduloShiftButton"));
        moduloShiftButton->setGeometry(QRect(15, 150, 156, 41));
        permutationsButton = new QPushButton(centralWidget);
        permutationsButton->setObjectName(QString::fromUtf8("permutationsButton"));
        permutationsButton->setGeometry(QRect(15, 195, 156, 41));
        subseriesButton = new QPushButton(centralWidget);
        subseriesButton->setObjectName(QString::fromUtf8("subseriesButton"));
        subseriesButton->setGeometry(QRect(15, 240, 156, 41));
        MathGUIClass->setCentralWidget(centralWidget);

        retranslateUi(MathGUIClass);

        QMetaObject::connectSlotsByName(MathGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *MathGUIClass)
    {
        MathGUIClass->setWindowTitle(QApplication::translate("MathGUIClass", "Wybrane Metody Numeryczne", nullptr));
        polynomialRootsButton->setText(QApplication::translate("MathGUIClass", "Miejsca zerowe wielomianu", nullptr));
        linearRegressionButton->setText(QApplication::translate("MathGUIClass", "Regresja liniowa", nullptr));
        pow2NumbersButton->setText(QApplication::translate("MathGUIClass", "Pierwsze liczby pot\304\231gi dw\303\263jek", nullptr));
        moduloShiftButton->setText(QApplication::translate("MathGUIClass", "Przesuni\304\231cie modulo", nullptr));
        permutationsButton->setText(QApplication::translate("MathGUIClass", "Permutacje", nullptr));
        subseriesButton->setText(QApplication::translate("MathGUIClass", "Podszeregi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MathGUIClass: public Ui_MathGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATHGUI_H
