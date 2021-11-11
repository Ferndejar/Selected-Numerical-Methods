/********************************************************************************
** Form generated from reading UI file 'SubseriesLazyExample.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBSERIESLAZYEXAMPLE_H
#define UI_SUBSERIESLAZYEXAMPLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubseriesLazyExample
{
public:
    QLabel *label;
    QLabel *descriptionLabel;
    QLabel *descriptionLabel_2;

    void setupUi(QWidget *SubseriesLazyExample)
    {
        if (SubseriesLazyExample->objectName().isEmpty())
            SubseriesLazyExample->setObjectName(QString::fromUtf8("SubseriesLazyExample"));
        SubseriesLazyExample->resize(553, 713);
        SubseriesLazyExample->setMaximumSize(QSize(553, 713));
        label = new QLabel(SubseriesLazyExample);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 10, 207, 31));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        descriptionLabel = new QLabel(SubseriesLazyExample);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(10, 40, 401, 71));
        QFont font1;
        font1.setPointSize(14);
        descriptionLabel->setFont(font1);
        descriptionLabel->setWordWrap(true);
        descriptionLabel_2 = new QLabel(SubseriesLazyExample);
        descriptionLabel_2->setObjectName(QString::fromUtf8("descriptionLabel_2"));
        descriptionLabel_2->setGeometry(QRect(10, 120, 531, 601));
        descriptionLabel_2->setFont(font1);
        descriptionLabel_2->setWordWrap(true);

        retranslateUi(SubseriesLazyExample);

        QMetaObject::connectSlotsByName(SubseriesLazyExample);
    } // setupUi

    void retranslateUi(QWidget *SubseriesLazyExample)
    {
        SubseriesLazyExample->setWindowTitle(QApplication::translate("SubseriesLazyExample", "SubseriesLazyExample", nullptr));
        label->setText(QApplication::translate("SubseriesLazyExample", "Przyk\305\202ad", nullptr));
        descriptionLabel->setText(QApplication::translate("SubseriesLazyExample", "iloraz = 0,6\n"
"liczba = 1\n"
"dok\305\202adno\305\233\304\207 = 0,15", nullptr));
        descriptionLabel_2->setText(QApplication::translate("SubseriesLazyExample", "suma wyraz\303\263w od drugiego 0,9 <1 , wi\304\231c nie mo\305\274emy pomin\304\205\304\207 pierwszego wyrazu 0,6 , bo pozosta\305\202e nie wystarczaj\304\205 do uzyskania podanej liczby\n"
"\n"
"bierzemy 0,6 (do 1 brakuje nam jeszcze 0,4)\n"
"\n"
"suma wyraz\303\263w od trzeciego 0,54 >0,4, wi\304\231c mo\305\274emy pomin\304\205\304\207 wyraz drugi\n"
"suma wyraz\303\263w od czwartego 0,324 <0,4, wi\304\231c nie mo\305\274emy pomin\304\205\304\207 wyrazu trzeciego 0,216\n"
"\n"
"bierzemy 0,216\n"
"\n"
"mamy 0,6 +0,216 (brakuje nam jeszcze 0,184)\n"
"suma wyraz\303\263w od pi\304\205tego 0,1944 >0,184, wi\304\231c mo\305\274emy pomin\304\205\304\207 wyraz czwarty\n"
"suma wyraz\303\263w od sz\303\263stego 0,11664 <0,184, wi\304\231c nie mo\305\274emy pomin\304\205\304\207 wyrazu pi\304\205tego 0,07776\n"
"\n"
"bierzemy wyraz pi\304\205ty 0,07776\n"
"0,6+0,216+0,07776 = 0,89376, brakuje nam 0,10624<0,15 do 1 w\303\263wczas program zastopuje w tym miejscu zwracaj\304\205c sume pierwszego, trzeciego i pi\304\205"
                        "tego wyrazu\n"
"\n"
"wynik 1 3 5\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubseriesLazyExample: public Ui_SubseriesLazyExample {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBSERIESLAZYEXAMPLE_H
