/********************************************************************************
** Form generated from reading UI file 'SubseriesGapsHelp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBSERIESGAPSHELP_H
#define UI_SUBSERIESGAPSHELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubseriesGapsHelp
{
public:
    QLabel *label;
    QLabel *descriptionLabel_2;
    QLabel *descriptionLabel;
    QLabel *descriptionLabel_3;
    QLabel *descriptionLabel_4;
    QLabel *descriptionLabel_5;

    void setupUi(QWidget *SubseriesGapsHelp)
    {
        if (SubseriesGapsHelp->objectName().isEmpty())
            SubseriesGapsHelp->setObjectName(QString::fromUtf8("SubseriesGapsHelp"));
        SubseriesGapsHelp->resize(428, 566);
        SubseriesGapsHelp->setMaximumSize(QSize(428, 566));
        label = new QLabel(SubseriesGapsHelp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 0, 141, 31));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        descriptionLabel_2 = new QLabel(SubseriesGapsHelp);
        descriptionLabel_2->setObjectName(QString::fromUtf8("descriptionLabel_2"));
        descriptionLabel_2->setGeometry(QRect(10, 40, 401, 21));
        QFont font1;
        font1.setPointSize(14);
        descriptionLabel_2->setFont(font1);
        descriptionLabel_2->setWordWrap(true);
        descriptionLabel = new QLabel(SubseriesGapsHelp);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(10, 60, 421, 111));
        descriptionLabel->setFont(font1);
        descriptionLabel->setWordWrap(true);
        descriptionLabel_3 = new QLabel(SubseriesGapsHelp);
        descriptionLabel_3->setObjectName(QString::fromUtf8("descriptionLabel_3"));
        descriptionLabel_3->setGeometry(QRect(10, 120, 401, 151));
        descriptionLabel_3->setFont(font1);
        descriptionLabel_3->setWordWrap(true);
        descriptionLabel_4 = new QLabel(SubseriesGapsHelp);
        descriptionLabel_4->setObjectName(QString::fromUtf8("descriptionLabel_4"));
        descriptionLabel_4->setGeometry(QRect(10, 230, 401, 161));
        descriptionLabel_4->setFont(font1);
        descriptionLabel_4->setWordWrap(true);
        descriptionLabel_5 = new QLabel(SubseriesGapsHelp);
        descriptionLabel_5->setObjectName(QString::fromUtf8("descriptionLabel_5"));
        descriptionLabel_5->setGeometry(QRect(10, 350, 410, 241));
        descriptionLabel_5->setFont(font1);
        descriptionLabel_5->setWordWrap(true);

        retranslateUi(SubseriesGapsHelp);

        QMetaObject::connectSlotsByName(SubseriesGapsHelp);
    } // setupUi

    void retranslateUi(QWidget *SubseriesGapsHelp)
    {
        SubseriesGapsHelp->setWindowTitle(QApplication::translate("SubseriesGapsHelp", "SubseriesGapsHelp", nullptr));
        label->setText(QApplication::translate("SubseriesGapsHelp", "Instrukcja", nullptr));
        descriptionLabel_2->setText(QApplication::translate("SubseriesGapsHelp", "Metoda z lukami:", nullptr));
        descriptionLabel->setText(QApplication::translate("SubseriesGapsHelp", "Iloraz szereg : tu ustalamy iloraz szeregu geometrycznego jaki b\304\231dziemy rozwa\305\274a\304\207\n"
"", nullptr));
        descriptionLabel_3->setText(QApplication::translate("SubseriesGapsHelp", "Liczba : jest to warto\305\233\304\207 dla kt\303\263rej program wyznacza pocz\304\205tek podszeregu metod\304\205 greedy, kt\303\263ry jest do niej zbie\305\274ny.\n"
"", nullptr));
        descriptionLabel_4->setText(QApplication::translate("SubseriesGapsHelp", "Dok\305\202adno\305\233\304\207 : jest to maksymalna warto\305\233\304\207 b\305\202\304\231du bezwzgl\304\231dnego pomi\304\231dzy zwr\303\263con\304\205 sum\304\205 sko\305\204czon\304\205 a podan\304\205 liczb\304\205, im mniejsza dodatnia dok\305\202adno\305\233\304\207 tym obliczenia s\304\205 bardziej precyzyjne\n"
"", nullptr));
        descriptionLabel_5->setText(QApplication::translate("SubseriesGapsHelp", "Wynik : kolejne warto\305\233ci indeks\303\263w wchodz\304\205cych do podszeregu szeregu q^n, wy\305\233wietlane a\305\274 do momentu zaspokojenia dok\305\202adno\305\233ci. Ponadto zwr\303\263cona jest suma wy\305\233wietlonych wyraz\303\263w albo informacja o wykryciu braku takiego podszeregu co jest zg\305\202oszone stwierdzeniem o wpadni\304\231ciu w luk\304\231\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubseriesGapsHelp: public Ui_SubseriesGapsHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBSERIESGAPSHELP_H
