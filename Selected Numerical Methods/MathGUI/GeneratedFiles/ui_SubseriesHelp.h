/********************************************************************************
** Form generated from reading UI file 'SubseriesHelp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBSERIESHELP_H
#define UI_SUBSERIESHELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubseriesHelp
{
public:
    QLabel *label;
    QLabel *descriptionLabel;
    QLabel *descriptionLabel_2;
    QLabel *descriptionLabel_3;
    QLabel *descriptionLabel_4;

    void setupUi(QWidget *SubseriesHelp)
    {
        if (SubseriesHelp->objectName().isEmpty())
            SubseriesHelp->setObjectName(QString::fromUtf8("SubseriesHelp"));
        SubseriesHelp->resize(419, 501);
        SubseriesHelp->setMaximumSize(QSize(419, 501));
        label = new QLabel(SubseriesHelp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 0, 141, 31));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        descriptionLabel = new QLabel(SubseriesHelp);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(10, 70, 401, 161));
        QFont font1;
        font1.setPointSize(14);
        descriptionLabel->setFont(font1);
        descriptionLabel->setWordWrap(true);
        descriptionLabel_2 = new QLabel(SubseriesHelp);
        descriptionLabel_2->setObjectName(QString::fromUtf8("descriptionLabel_2"));
        descriptionLabel_2->setGeometry(QRect(10, 40, 401, 21));
        descriptionLabel_2->setFont(font1);
        descriptionLabel_2->setWordWrap(true);
        descriptionLabel_3 = new QLabel(SubseriesHelp);
        descriptionLabel_3->setObjectName(QString::fromUtf8("descriptionLabel_3"));
        descriptionLabel_3->setGeometry(QRect(10, 210, 401, 151));
        descriptionLabel_3->setFont(font1);
        descriptionLabel_3->setWordWrap(true);
        descriptionLabel_4 = new QLabel(SubseriesHelp);
        descriptionLabel_4->setObjectName(QString::fromUtf8("descriptionLabel_4"));
        descriptionLabel_4->setGeometry(QRect(10, 330, 401, 181));
        descriptionLabel_4->setFont(font1);
        descriptionLabel_4->setWordWrap(true);

        retranslateUi(SubseriesHelp);

        QMetaObject::connectSlotsByName(SubseriesHelp);
    } // setupUi

    void retranslateUi(QWidget *SubseriesHelp)
    {
        SubseriesHelp->setWindowTitle(QApplication::translate("SubseriesHelp", "SubseriesHelp", nullptr));
        label->setText(QApplication::translate("SubseriesHelp", "Instrukcja", nullptr));
        descriptionLabel->setText(QApplication::translate("SubseriesHelp", "Liczba : jest to warto\305\233\304\207 dla kt\303\263rej program wyznacza pocz\304\205tek podszeregu kt\303\263ry jest do niej zbie\305\274ny. Z odpowiednika twierdzenia Riemanna dla podszeregu mo\305\274emy tak zrobi\304\207 dla dowolnej liczby rzeczywistej\n"
"", nullptr));
        descriptionLabel_2->setText(QApplication::translate("SubseriesHelp", "Szereg warunkowo zbie\305\274ny:", nullptr));
        descriptionLabel_3->setText(QApplication::translate("SubseriesHelp", "Dok\305\202adno\305\233\304\207 : jest to maksymalna warto\305\233\304\207 b\305\202\304\231du bezwzgl\304\231dnego pomi\304\231dzy zwr\303\263cona suma sko\305\204czona a podana liczba, im mniejsza dodatnia dok\305\202adno\305\233\304\207 tym obliczenia s\304\205 bardziej precyzyjne\n"
"", nullptr));
        descriptionLabel_4->setText(QApplication::translate("SubseriesHelp", "Wynik : kolejne warto\305\233ci indeks\303\263w wchodz\304\205cych do podszeregu szeregu (-1)^n\\n, wy\305\233wietlane a\305\274 do momentu zaspokojenia dok\305\202adno\305\233ci. Ponadto zwr\303\263cona jest suma wy\305\233wietlonych wyraz\303\263w\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubseriesHelp: public Ui_SubseriesHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBSERIESHELP_H
