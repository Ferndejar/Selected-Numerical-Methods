/********************************************************************************
** Form generated from reading UI file 'PolymonialRootsExample.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLYMONIALROOTSEXAMPLE_H
#define UI_POLYMONIALROOTSEXAMPLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PolymonialRootsExample
{
public:
    QLabel *label;
    QLabel *descriptionLabel;
    QLabel *descriptionLabel_2;

    void setupUi(QWidget *PolymonialRootsExample)
    {
        if (PolymonialRootsExample->objectName().isEmpty())
            PolymonialRootsExample->setObjectName(QString::fromUtf8("PolymonialRootsExample"));
        PolymonialRootsExample->resize(408, 676);
        PolymonialRootsExample->setMaximumSize(QSize(408, 676));
        label = new QLabel(PolymonialRootsExample);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 10, 207, 41));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        descriptionLabel = new QLabel(PolymonialRootsExample);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(10, 50, 401, 51));
        QFont font1;
        font1.setPointSize(14);
        descriptionLabel->setFont(font1);
        descriptionLabel->setWordWrap(true);
        descriptionLabel_2 = new QLabel(PolymonialRootsExample);
        descriptionLabel_2->setObjectName(QString::fromUtf8("descriptionLabel_2"));
        descriptionLabel_2->setGeometry(QRect(10, 110, 421, 551));
        descriptionLabel_2->setFont(font1);
        descriptionLabel_2->setWordWrap(true);

        retranslateUi(PolymonialRootsExample);

        QMetaObject::connectSlotsByName(PolymonialRootsExample);
    } // setupUi

    void retranslateUi(QWidget *PolymonialRootsExample)
    {
        PolymonialRootsExample->setWindowTitle(QApplication::translate("PolymonialRootsExample", "PolymonialRootsExample", nullptr));
        label->setText(QApplication::translate("PolymonialRootsExample", "Przyk\305\202ad", nullptr));
        descriptionLabel->setText(QApplication::translate("PolymonialRootsExample", "Dok\305\202adno\305\233\304\207 = 0,1\n"
"Przedzia\305\202: (2,3)", nullptr));
        descriptionLabel_2->setText(QApplication::translate("PolymonialRootsExample", "Zdefiniujmy funkcj\304\231 kwadratow\304\205 x^2-7\n"
"D\305\202ugo\305\233\304\207 przedzia\305\202u 1>0,2=2*0,1\n"
"Warto\305\233\304\207 na ko\305\204cach 2^2-7<0 i 3^2-7>0\n"
"Warto\305\233\304\207 w \305\233rodku 2,5^2-7 <0\n"
"Zast\304\231pujemy koniec na kt\303\263rym warto\305\233\304\207 by\305\202a ujemna przez \305\233rodek\n"
"Rozwa\305\274amy teraz przedzia\305\202 (2.5,3)\n"
"D\305\202ugo\305\233\304\207 przedzialu 0,5>0,2\n"
"Warto\305\233\304\207 w \305\233rodku 2,75^2-7 >0\n"
"Zast\304\231pujemy koniec na kt\303\263rym warto\305\233\304\207 by\305\202a dodatnia przez \305\233rodek\n"
"Rozwa\305\274amy teraz przedzia\305\202 (2.5,2.75)\n"
"D\305\202ugo\305\233\304\207 przedzialu 0,25>0,2\n"
"Warto\305\233\304\207 w \305\233rodku 2,675^2-7<0\n"
"Zast\304\231pujemy koniec na kt\303\263rym warto\305\233\304\207 by\305\202a ujemna przez \305\233rodek\n"
"Rozwa\305\274amy przedzia\305\202 (2.625,2.75)\n"
"D\305\202ugo\305\233\304\207 przedzia\305\202u 0,125 <0,2\n"
"\n"
"Przyjmuj\304\205c jego \305\233"
                        "rodek za przybli\305\274enie mamy gwarancj\304\231 \305\274e jest on \305\274\304\205danie blisko prawdziwej warto\305\233ci\n"
"Wynik 2,6875\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PolymonialRootsExample: public Ui_PolymonialRootsExample {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYMONIALROOTSEXAMPLE_H
