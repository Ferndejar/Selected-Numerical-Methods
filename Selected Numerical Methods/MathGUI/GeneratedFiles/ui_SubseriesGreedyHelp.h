/********************************************************************************
** Form generated from reading UI file 'SubseriesGreedyHelp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBSERIESGREEDYHELP_H
#define UI_SUBSERIESGREEDYHELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubseriesGreedyHelp
{
public:
    QLabel *label;
    QLabel *descriptionLabel_2;
    QLabel *descriptionLabel;
    QLabel *descriptionLabel_3;
    QLabel *descriptionLabel_4;
    QLabel *descriptionLabel_5;

    void setupUi(QWidget *SubseriesGreedyHelp)
    {
        if (SubseriesGreedyHelp->objectName().isEmpty())
            SubseriesGreedyHelp->setObjectName(QString::fromUtf8("SubseriesGreedyHelp"));
        SubseriesGreedyHelp->resize(422, 491);
        SubseriesGreedyHelp->setMaximumSize(QSize(422, 491));
        label = new QLabel(SubseriesGreedyHelp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 0, 141, 31));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        descriptionLabel_2 = new QLabel(SubseriesGreedyHelp);
        descriptionLabel_2->setObjectName(QString::fromUtf8("descriptionLabel_2"));
        descriptionLabel_2->setGeometry(QRect(10, 45, 401, 21));
        QFont font1;
        font1.setPointSize(14);
        descriptionLabel_2->setFont(font1);
        descriptionLabel_2->setWordWrap(true);
        descriptionLabel = new QLabel(SubseriesGreedyHelp);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(10, 70, 401, 81));
        descriptionLabel->setFont(font1);
        descriptionLabel->setWordWrap(true);
        descriptionLabel_3 = new QLabel(SubseriesGreedyHelp);
        descriptionLabel_3->setObjectName(QString::fromUtf8("descriptionLabel_3"));
        descriptionLabel_3->setGeometry(QRect(10, 120, 401, 131));
        descriptionLabel_3->setFont(font1);
        descriptionLabel_3->setWordWrap(true);
        descriptionLabel_4 = new QLabel(SubseriesGreedyHelp);
        descriptionLabel_4->setObjectName(QString::fromUtf8("descriptionLabel_4"));
        descriptionLabel_4->setGeometry(QRect(10, 210, 401, 171));
        descriptionLabel_4->setFont(font1);
        descriptionLabel_4->setWordWrap(true);
        descriptionLabel_5 = new QLabel(SubseriesGreedyHelp);
        descriptionLabel_5->setObjectName(QString::fromUtf8("descriptionLabel_5"));
        descriptionLabel_5->setGeometry(QRect(10, 340, 401, 171));
        descriptionLabel_5->setFont(font1);
        descriptionLabel_5->setWordWrap(true);

        retranslateUi(SubseriesGreedyHelp);

        QMetaObject::connectSlotsByName(SubseriesGreedyHelp);
    } // setupUi

    void retranslateUi(QWidget *SubseriesGreedyHelp)
    {
        SubseriesGreedyHelp->setWindowTitle(QApplication::translate("SubseriesGreedyHelp", "SubseriesGreedyHelp", nullptr));
        label->setText(QApplication::translate("SubseriesGreedyHelp", "Instrukcja", nullptr));
        descriptionLabel_2->setText(QApplication::translate("SubseriesGreedyHelp", "Metoda greedy:", nullptr));
        descriptionLabel->setText(QApplication::translate("SubseriesGreedyHelp", "Iloraz szereg : tu ustalamy iloraz szeregu geometrycznego jaki b\304\231dziemy rozwa\305\274a\304\207\n"
"", nullptr));
        descriptionLabel_3->setText(QApplication::translate("SubseriesGreedyHelp", "Liczba : jest to warto\305\233\304\207 dla kt\303\263rej program wyznacza pocz\304\205tek podszeregu metod\304\205 greedy, kt\303\263ry jest do niej zbie\305\274ny.\n"
"", nullptr));
        descriptionLabel_4->setText(QApplication::translate("SubseriesGreedyHelp", "Dok\305\202adno\305\233\304\207 : jest to maksymalna warto\305\233\304\207 b\305\202\304\231du bezwzgl\304\231dnego pomi\304\231dzy zwr\303\263con\304\205 sum\304\205 sko\305\204czon\304\205 a podan\304\205 liczb\304\205, im mniejsza dodatnia dok\305\202adno\305\233\304\207 tym obliczenia s\304\205 bardziej precyzyjne\n"
"", nullptr));
        descriptionLabel_5->setText(QApplication::translate("SubseriesGreedyHelp", "Wynik : kolejne warto\305\233ci indeks\303\263w wchodz\304\205cych do podszeregu szeregu q^n, wy\305\233wietlane a\305\274 do momentu zaspokojenia dok\305\202adno\305\233ci. Ponadto zwr\303\263cona jest suma wy\305\233wietlonych wyraz\303\263w\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubseriesGreedyHelp: public Ui_SubseriesGreedyHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBSERIESGREEDYHELP_H
