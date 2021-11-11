/********************************************************************************
** Form generated from reading UI file 'SubseriesLazyHelp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBSERIESLAZYHELP_H
#define UI_SUBSERIESLAZYHELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubseriesLazyHelp
{
public:
    QLabel *label;
    QLabel *descriptionLabel_2;
    QLabel *descriptionLabel;
    QLabel *descriptionLabel_3;
    QLabel *descriptionLabel_4;
    QLabel *descriptionLabel_5;

    void setupUi(QWidget *SubseriesLazyHelp)
    {
        if (SubseriesLazyHelp->objectName().isEmpty())
            SubseriesLazyHelp->setObjectName(QString::fromUtf8("SubseriesLazyHelp"));
        SubseriesLazyHelp->resize(413, 514);
        SubseriesLazyHelp->setMaximumSize(QSize(413, 514));
        label = new QLabel(SubseriesLazyHelp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 0, 141, 31));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        descriptionLabel_2 = new QLabel(SubseriesLazyHelp);
        descriptionLabel_2->setObjectName(QString::fromUtf8("descriptionLabel_2"));
        descriptionLabel_2->setGeometry(QRect(10, 30, 401, 21));
        QFont font1;
        font1.setPointSize(14);
        descriptionLabel_2->setFont(font1);
        descriptionLabel_2->setWordWrap(true);
        descriptionLabel = new QLabel(SubseriesLazyHelp);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(10, 50, 401, 111));
        descriptionLabel->setFont(font1);
        descriptionLabel->setWordWrap(true);
        descriptionLabel_3 = new QLabel(SubseriesLazyHelp);
        descriptionLabel_3->setObjectName(QString::fromUtf8("descriptionLabel_3"));
        descriptionLabel_3->setGeometry(QRect(10, 120, 401, 111));
        descriptionLabel_3->setFont(font1);
        descriptionLabel_3->setWordWrap(true);
        descriptionLabel_4 = new QLabel(SubseriesLazyHelp);
        descriptionLabel_4->setObjectName(QString::fromUtf8("descriptionLabel_4"));
        descriptionLabel_4->setGeometry(QRect(10, 200, 401, 171));
        descriptionLabel_4->setFont(font1);
        descriptionLabel_4->setWordWrap(true);
        descriptionLabel_5 = new QLabel(SubseriesLazyHelp);
        descriptionLabel_5->setObjectName(QString::fromUtf8("descriptionLabel_5"));
        descriptionLabel_5->setGeometry(QRect(10, 340, 401, 171));
        descriptionLabel_5->setFont(font1);
        descriptionLabel_5->setWordWrap(true);

        retranslateUi(SubseriesLazyHelp);

        QMetaObject::connectSlotsByName(SubseriesLazyHelp);
    } // setupUi

    void retranslateUi(QWidget *SubseriesLazyHelp)
    {
        SubseriesLazyHelp->setWindowTitle(QApplication::translate("SubseriesLazyHelp", "SubseriesLazyHelp", nullptr));
        label->setText(QApplication::translate("SubseriesLazyHelp", "Instrukcja", nullptr));
        descriptionLabel_2->setText(QApplication::translate("SubseriesLazyHelp", "Metoda lazy:", nullptr));
        descriptionLabel->setText(QApplication::translate("SubseriesLazyHelp", "Iloraz szereg : tu ustalamy iloraz szeregu geometrycznego jaki b\304\231dziemy rozwa\305\274a\304\207\n"
"", nullptr));
        descriptionLabel_3->setText(QApplication::translate("SubseriesLazyHelp", "Liczba : jest to warto\305\233\304\207 dla kt\303\263rej program wyznacza pocz\304\205tek podszeregu metod\304\205 lazy, kt\303\263ry jest do niej zbie\305\274ny\n"
"", nullptr));
        descriptionLabel_4->setText(QApplication::translate("SubseriesLazyHelp", "Dok\305\202adno\305\233\304\207 : jest to maksymalna warto\305\233\304\207 b\305\202\304\231du bezwzgl\304\231dnego pomi\304\231dzy zwr\303\263cona suma sko\305\204czona a podana liczba, im mniejsza dodatnia dok\305\202adno\305\233\304\207 tym obliczenia s\304\205 bardziej precyzyjne\n"
"", nullptr));
        descriptionLabel_5->setText(QApplication::translate("SubseriesLazyHelp", "Wynik : kolejne warto\305\233ci indeks\303\263w wchodz\304\205cych do podszeregu szeregu q^n, wy\305\233wietlane a\305\274 do momentu zaspokojenia dok\305\202adno\305\233ci. Ponadto zwr\303\263cona jest suma wy\305\233wietlonych wyraz\303\263w\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubseriesLazyHelp: public Ui_SubseriesLazyHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBSERIESLAZYHELP_H
