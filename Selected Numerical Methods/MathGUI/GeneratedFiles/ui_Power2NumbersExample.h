/********************************************************************************
** Form generated from reading UI file 'Power2NumbersExample.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POWER2NUMBERSEXAMPLE_H
#define UI_POWER2NUMBERSEXAMPLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Power2NumbersExample
{
public:
    QLabel *label;
    QLabel *descriptionLabel;
    QLabel *descriptionLabel_2;
    QLabel *descriptionLabel_3;
    QLabel *descriptionLabel_4;
    QLabel *descriptionLabel_5;

    void setupUi(QWidget *Power2NumbersExample)
    {
        if (Power2NumbersExample->objectName().isEmpty())
            Power2NumbersExample->setObjectName(QString::fromUtf8("Power2NumbersExample"));
        Power2NumbersExample->resize(416, 464);
        Power2NumbersExample->setMaximumSize(QSize(416, 464));
        label = new QLabel(Power2NumbersExample);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 10, 207, 31));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        descriptionLabel = new QLabel(Power2NumbersExample);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(10, 40, 401, 41));
        QFont font1;
        font1.setPointSize(14);
        descriptionLabel->setFont(font1);
        descriptionLabel->setWordWrap(true);
        descriptionLabel_2 = new QLabel(Power2NumbersExample);
        descriptionLabel_2->setObjectName(QString::fromUtf8("descriptionLabel_2"));
        descriptionLabel_2->setGeometry(QRect(10, 70, 401, 61));
        descriptionLabel_2->setFont(font1);
        descriptionLabel_2->setWordWrap(true);
        descriptionLabel_3 = new QLabel(Power2NumbersExample);
        descriptionLabel_3->setObjectName(QString::fromUtf8("descriptionLabel_3"));
        descriptionLabel_3->setGeometry(QRect(10, 120, 401, 51));
        descriptionLabel_3->setFont(font1);
        descriptionLabel_3->setWordWrap(true);
        descriptionLabel_4 = new QLabel(Power2NumbersExample);
        descriptionLabel_4->setObjectName(QString::fromUtf8("descriptionLabel_4"));
        descriptionLabel_4->setGeometry(QRect(10, 170, 401, 181));
        descriptionLabel_4->setFont(font1);
        descriptionLabel_4->setWordWrap(true);
        descriptionLabel_5 = new QLabel(Power2NumbersExample);
        descriptionLabel_5->setObjectName(QString::fromUtf8("descriptionLabel_5"));
        descriptionLabel_5->setGeometry(QRect(10, 360, 401, 101));
        descriptionLabel_5->setFont(font1);
        descriptionLabel_5->setWordWrap(true);

        retranslateUi(Power2NumbersExample);

        QMetaObject::connectSlotsByName(Power2NumbersExample);
    } // setupUi

    void retranslateUi(QWidget *Power2NumbersExample)
    {
        Power2NumbersExample->setWindowTitle(QApplication::translate("Power2NumbersExample", "Power2NumbersExample", nullptr));
        label->setText(QApplication::translate("Power2NumbersExample", "Przyk\305\202ad", nullptr));
        descriptionLabel->setText(QApplication::translate("Power2NumbersExample", "n=10", nullptr));
        descriptionLabel_2->setText(QApplication::translate("Power2NumbersExample", "Rozwa\305\274ane liczby to: 2 4 8  16 32 64 128 256 512 1024", nullptr));
        descriptionLabel_3->setText(QApplication::translate("Power2NumbersExample", "Ich cyfry wiod\304\205ce to: 2 4 8 1 3 6 1 2 5 1", nullptr));
        descriptionLabel_4->setText(QApplication::translate("Power2NumbersExample", "1 wyst\304\231puje 3 razy ; \n"
"2 wyst\304\231puje 2 razy ; \n"
"3 wyst\304\231puje 1 razy ; \n"
"4 wyst\304\231puje 1 razy ;\n"
"5 wyst\304\231puje 1 razy ; \n"
"6 wyst\304\231puje 1 razy ; \n"
"7 wyst\304\231puje 0 razy ; \n"
"8 wyst\304\231puje 1 razy ; \n"
"9 wyst\304\231puje 0 razy ;", nullptr));
        descriptionLabel_5->setText(QApplication::translate("Power2NumbersExample", "Program zwraca liczb\304\231 wyst\304\205pie\305\204 kolejnych cyfr jako cyfr wiod\304\205cych czyli  3 2 1 1 1 1 0 1 0\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Power2NumbersExample: public Ui_Power2NumbersExample {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POWER2NUMBERSEXAMPLE_H
