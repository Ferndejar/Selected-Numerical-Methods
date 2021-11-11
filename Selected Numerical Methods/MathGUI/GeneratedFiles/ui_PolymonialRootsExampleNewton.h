/********************************************************************************
** Form generated from reading UI file 'PolymonialRootsExampleNewton.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLYMONIALROOTSEXAMPLENEWTON_H
#define UI_POLYMONIALROOTSEXAMPLENEWTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PolymonialRootsExampleNewton
{
public:
    QLabel *label;
    QLabel *descriptionLabel;
    QLabel *descriptionLabel_2;
    QLabel *descriptionLabel_3;

    void setupUi(QWidget *PolymonialRootsExampleNewton)
    {
        if (PolymonialRootsExampleNewton->objectName().isEmpty())
            PolymonialRootsExampleNewton->setObjectName(QString::fromUtf8("PolymonialRootsExampleNewton"));
        PolymonialRootsExampleNewton->resize(436, 777);
        PolymonialRootsExampleNewton->setMaximumSize(QSize(436, 777));
        label = new QLabel(PolymonialRootsExampleNewton);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 10, 207, 41));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        descriptionLabel = new QLabel(PolymonialRootsExampleNewton);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(10, 290, 401, 41));
        QFont font1;
        font1.setPointSize(14);
        descriptionLabel->setFont(font1);
        descriptionLabel->setWordWrap(true);
        descriptionLabel_2 = new QLabel(PolymonialRootsExampleNewton);
        descriptionLabel_2->setObjectName(QString::fromUtf8("descriptionLabel_2"));
        descriptionLabel_2->setGeometry(QRect(10, 330, 441, 331));
        descriptionLabel_2->setFont(font1);
        descriptionLabel_2->setWordWrap(true);
        descriptionLabel_3 = new QLabel(PolymonialRootsExampleNewton);
        descriptionLabel_3->setObjectName(QString::fromUtf8("descriptionLabel_3"));
        descriptionLabel_3->setGeometry(QRect(20, 50, 351, 211));
        descriptionLabel_3->setFont(font1);
        descriptionLabel_3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Resources/WykresNewtonNowy.png")));
        descriptionLabel_3->setScaledContents(true);
        descriptionLabel_3->setWordWrap(true);

        retranslateUi(PolymonialRootsExampleNewton);

        QMetaObject::connectSlotsByName(PolymonialRootsExampleNewton);
    } // setupUi

    void retranslateUi(QWidget *PolymonialRootsExampleNewton)
    {
        PolymonialRootsExampleNewton->setWindowTitle(QApplication::translate("PolymonialRootsExampleNewton", "PolymonialRootsExampleNewton", nullptr));
        label->setText(QApplication::translate("PolymonialRootsExampleNewton", "Przyk\305\202ad", nullptr));
        descriptionLabel->setText(QApplication::translate("PolymonialRootsExampleNewton", "Dok\305\202adno\305\233\304\207 = 0,11\n"
"Punkt startowy: 2", nullptr));
        descriptionLabel_2->setText(QApplication::translate("PolymonialRootsExampleNewton", "Zdefiniujemy funkcj\304\231 kwadratow\304\205 x^2-7\n"
"Styczna do wykresu w 2 ma wz\303\263r: Y= 4x-11\n"
"Jej miejsce zerowe 2.75\n"
"Odleg\305\202o\305\233\304\207 mi\304\231dzy itetacjami 2,75-2 = 0,75>0,11\n"
"Nowy punkt startowy 2,75\n"
"Warto\305\233\304\207 funkcji 2,75^2-7 = 0,5625\n"
"Styczna do wykresu w punkcie 2,75 ma wz\303\263r: Y= 5,5x -14,5625\n"
"Miejsce zerowe: 2,64773 \n"
"Odleg\305\202o\305\233\304\207 iteracji 2,75-2,64773 = 0,10227 <0,11\n"
"\n"
" Wynik 2,64773\n"
"", nullptr));
        descriptionLabel_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PolymonialRootsExampleNewton: public Ui_PolymonialRootsExampleNewton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYMONIALROOTSEXAMPLENEWTON_H
