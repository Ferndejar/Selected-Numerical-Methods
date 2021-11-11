/********************************************************************************
** Form generated from reading UI file 'ModuloShiftExample.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODULOSHIFTEXAMPLE_H
#define UI_MODULOSHIFTEXAMPLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModuloShiftExample
{
public:
    QLabel *label;
    QLabel *descriptionLabel;
    QLabel *descriptionLabel_2;
    QLabel *descriptionLabel_4;
    QLabel *descriptionLabel_3;
    QLabel *descriptionLabel_5;

    void setupUi(QWidget *ModuloShiftExample)
    {
        if (ModuloShiftExample->objectName().isEmpty())
            ModuloShiftExample->setObjectName(QString::fromUtf8("ModuloShiftExample"));
        ModuloShiftExample->resize(413, 598);
        ModuloShiftExample->setMaximumSize(QSize(413, 598));
        label = new QLabel(ModuloShiftExample);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 10, 207, 31));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        descriptionLabel = new QLabel(ModuloShiftExample);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(10, 60, 401, 61));
        QFont font1;
        font1.setPointSize(14);
        descriptionLabel->setFont(font1);
        descriptionLabel->setWordWrap(true);
        descriptionLabel_2 = new QLabel(ModuloShiftExample);
        descriptionLabel_2->setObjectName(QString::fromUtf8("descriptionLabel_2"));
        descriptionLabel_2->setGeometry(QRect(10, 110, 401, 71));
        descriptionLabel_2->setFont(font1);
        descriptionLabel_2->setWordWrap(true);
        descriptionLabel_4 = new QLabel(ModuloShiftExample);
        descriptionLabel_4->setObjectName(QString::fromUtf8("descriptionLabel_4"));
        descriptionLabel_4->setGeometry(QRect(10, 150, 411, 121));
        descriptionLabel_4->setFont(font1);
        descriptionLabel_4->setWordWrap(true);
        descriptionLabel_3 = new QLabel(ModuloShiftExample);
        descriptionLabel_3->setObjectName(QString::fromUtf8("descriptionLabel_3"));
        descriptionLabel_3->setGeometry(QRect(10, 250, 401, 101));
        descriptionLabel_3->setFont(font1);
        descriptionLabel_3->setWordWrap(true);
        descriptionLabel_5 = new QLabel(ModuloShiftExample);
        descriptionLabel_5->setObjectName(QString::fromUtf8("descriptionLabel_5"));
        descriptionLabel_5->setGeometry(QRect(10, 350, 411, 221));
        descriptionLabel_5->setFont(font1);
        descriptionLabel_5->setWordWrap(true);

        retranslateUi(ModuloShiftExample);

        QMetaObject::connectSlotsByName(ModuloShiftExample);
    } // setupUi

    void retranslateUi(QWidget *ModuloShiftExample)
    {
        ModuloShiftExample->setWindowTitle(QApplication::translate("ModuloShiftExample", "ModuloShiftExample", nullptr));
        label->setText(QApplication::translate("ModuloShiftExample", "Przyk\305\202ad", nullptr));
        descriptionLabel->setText(QApplication::translate("ModuloShiftExample", "liczba Pi\n"
"n=3\n"
"", nullptr));
        descriptionLabel_2->setText(QApplication::translate("ModuloShiftExample", "Interesuj\304\205 nas trzy pierwsze wielokrotno\305\233ci liczby Pi, a konkretniej ich cz\304\231\305\233ci u\305\202amk\303\263w\n"
"", nullptr));
        descriptionLabel_4->setText(QApplication::translate("ModuloShiftExample", "liczba Pi =3,14..., cz\304\231\305\233\304\207  u\305\202amkowa 0,14 \n"
"2Pi = 6,28... , cz\304\231\305\233\304\207 u\305\202amkowa 0,28 \n"
"3Pi 9,42... , cz\304\231\305\233\304\207 u\305\202amkowa 0,42", nullptr));
        descriptionLabel_3->setText(QApplication::translate("ModuloShiftExample", "Odcinek [0,1) zosta\305\202 podzielony na 10 pododcink\303\263w r\303\263wnej d\305\202ugo\305\233ci tj [0;0,1),[0,1;0,2),...,[0,9;1)\n"
"", nullptr));
        descriptionLabel_5->setText(QApplication::translate("ModuloShiftExample", "Zliczamy teraz gdzie wpada\305\202y cz\304\231\305\233ci u\305\202amkowe rozwa\305\274anych liczb.\n"
"Wpad\305\202y jednokrotnie do przedzia\305\202\303\263w  [0,1;0,2),[0,2;0,3),[0,4;0,5);\n"
"s\304\205 to drugi, trzeci i pi\304\205ty z rozwa\305\274anych podprzedzia\305\202\303\263w.\n"
"Program zwraca liczb\304\231 wpadni\304\231\304\207 do kolejnych podprzedzia\305\202\303\263w.\n"
"St\304\205d mamy: 0 1 1 0 1 0 0 0 0 0\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModuloShiftExample: public Ui_ModuloShiftExample {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODULOSHIFTEXAMPLE_H
