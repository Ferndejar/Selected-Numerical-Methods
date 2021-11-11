/********************************************************************************
** Form generated from reading UI file 'SubseriesGreedyExample.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBSERIESGREEDYEXAMPLE_H
#define UI_SUBSERIESGREEDYEXAMPLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubseriesGreedyExample
{
public:
    QLabel *label;
    QLabel *descriptionLabel;
    QLabel *descriptionLabel_2;

    void setupUi(QWidget *SubseriesGreedyExample)
    {
        if (SubseriesGreedyExample->objectName().isEmpty())
            SubseriesGreedyExample->setObjectName(QString::fromUtf8("SubseriesGreedyExample"));
        SubseriesGreedyExample->resize(404, 509);
        SubseriesGreedyExample->setMaximumSize(QSize(404, 509));
        label = new QLabel(SubseriesGreedyExample);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 10, 207, 31));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        descriptionLabel = new QLabel(SubseriesGreedyExample);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(10, 40, 401, 91));
        QFont font1;
        font1.setPointSize(14);
        descriptionLabel->setFont(font1);
        descriptionLabel->setWordWrap(true);
        descriptionLabel_2 = new QLabel(SubseriesGreedyExample);
        descriptionLabel_2->setObjectName(QString::fromUtf8("descriptionLabel_2"));
        descriptionLabel_2->setGeometry(QRect(10, 140, 401, 351));
        descriptionLabel_2->setFont(font1);
        descriptionLabel_2->setWordWrap(true);

        retranslateUi(SubseriesGreedyExample);

        QMetaObject::connectSlotsByName(SubseriesGreedyExample);
    } // setupUi

    void retranslateUi(QWidget *SubseriesGreedyExample)
    {
        SubseriesGreedyExample->setWindowTitle(QApplication::translate("SubseriesGreedyExample", "SubseriesGreedyExample", nullptr));
        label->setText(QApplication::translate("SubseriesGreedyExample", "Przyk\305\202ad", nullptr));
        descriptionLabel->setText(QApplication::translate("SubseriesGreedyExample", "iloraz = 0,6\n"
"iczba = 0.9\n"
"dok\305\202adno\305\233\304\207 = 0,1", nullptr));
        descriptionLabel_2->setText(QApplication::translate("SubseriesGreedyExample", "0,6 < 1, wi\304\231c bierzemy pierwszy wyraz do podszeregu\n"
"0,6 + 0,36 =0,96 >0,9\n"
"wi\304\231c pomijamy drugi wyraz, gdy\305\274 nasza suma by\305\202aby zbyt du\305\274a\n"
"0,6+0,216 =0,816 <0,9\n"
"wi\304\231c bierzemy trzeci wyraz\n"
"\n"
"Co wi\304\231cej zachodzi nier\303\263wno\305\233\304\207:\n"
"0,9 - 0,816 =0,084<0,1\n"
"wi\304\231c podany podszereg z\305\202o\305\274ony z sumy pierwszego i trzeciego wyrazu zaspokaja dok\305\202adno\305\233\304\207\n"
"\n"
"Wynik: 1 3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubseriesGreedyExample: public Ui_SubseriesGreedyExample {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBSERIESGREEDYEXAMPLE_H
