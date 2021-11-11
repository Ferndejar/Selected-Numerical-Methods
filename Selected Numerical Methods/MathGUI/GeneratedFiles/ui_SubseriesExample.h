/********************************************************************************
** Form generated from reading UI file 'SubseriesExample.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBSERIESEXAMPLE_H
#define UI_SUBSERIESEXAMPLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubseriesExample
{
public:
    QLabel *label;
    QLabel *descriptionLabel;
    QLabel *descriptionLabel_2;
    QLabel *descriptionLabel_3;

    void setupUi(QWidget *SubseriesExample)
    {
        if (SubseriesExample->objectName().isEmpty())
            SubseriesExample->setObjectName(QString::fromUtf8("SubseriesExample"));
        SubseriesExample->resize(395, 467);
        SubseriesExample->setMaximumSize(QSize(395, 467));
        label = new QLabel(SubseriesExample);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 10, 207, 31));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        descriptionLabel = new QLabel(SubseriesExample);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(10, 40, 401, 51));
        QFont font1;
        font1.setPointSize(14);
        descriptionLabel->setFont(font1);
        descriptionLabel->setWordWrap(true);
        descriptionLabel_2 = new QLabel(SubseriesExample);
        descriptionLabel_2->setObjectName(QString::fromUtf8("descriptionLabel_2"));
        descriptionLabel_2->setGeometry(QRect(10, 70, 401, 131));
        descriptionLabel_2->setFont(font1);
        descriptionLabel_2->setWordWrap(true);
        descriptionLabel_3 = new QLabel(SubseriesExample);
        descriptionLabel_3->setObjectName(QString::fromUtf8("descriptionLabel_3"));
        descriptionLabel_3->setGeometry(QRect(10, 190, 401, 281));
        descriptionLabel_3->setFont(font1);
        descriptionLabel_3->setWordWrap(true);

        retranslateUi(SubseriesExample);

        QMetaObject::connectSlotsByName(SubseriesExample);
    } // setupUi

    void retranslateUi(QWidget *SubseriesExample)
    {
        SubseriesExample->setWindowTitle(QApplication::translate("SubseriesExample", "SubseriesExample", nullptr));
        label->setText(QApplication::translate("SubseriesExample", "Przyk\305\202ad", nullptr));
        descriptionLabel->setText(QApplication::translate("SubseriesExample", "liczba = 0,88\n"
"dok\305\202adno\305\233\304\207 = 0,01", nullptr));
        descriptionLabel_2->setText(QApplication::translate("SubseriesExample", "Liczba jest dodatnia, wi\304\231c b\304\231dziemy u\305\274ywac tylko wyraz\303\263w dodatnich, a wi\304\231c o indeksach parzystych aby przybli\305\274yc j\304\205 od do\305\202u", nullptr));
        descriptionLabel_3->setText(QApplication::translate("SubseriesExample", "wyraz drugi 0,5<0,88 bierzemy, brakuje nam jeszcze 0,38\n"
"wyraz czwarty 0,25<0,38 bierzemy, mamy 0,5+0,25=0,75 brakuje nam jeszcze 0,13\n"
"wyraz sz\303\263sty 0,1667 >0,13 pomijamy\n"
"wyraz \303\263smy 0,125<0,13 bierzemy, mamy 0,5+0,25+0,125=0,875 brakuje nam 0,005 wi\304\231c zaspokojona jest dok\305\202adno\305\233\304\207 program ko\305\204czy prac\304\231\n"
"\n"
"wynik 2 4 8\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubseriesExample: public Ui_SubseriesExample {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBSERIESEXAMPLE_H
