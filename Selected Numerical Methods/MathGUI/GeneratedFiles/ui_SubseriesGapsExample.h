/********************************************************************************
** Form generated from reading UI file 'SubseriesGapsExample.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBSERIESGAPSEXAMPLE_H
#define UI_SUBSERIESGAPSEXAMPLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubseriesGapsExample
{
public:
    QLabel *label;
    QLabel *descriptionLabel;
    QLabel *descriptionLabel_2;

    void setupUi(QWidget *SubseriesGapsExample)
    {
        if (SubseriesGapsExample->objectName().isEmpty())
            SubseriesGapsExample->setObjectName(QString::fromUtf8("SubseriesGapsExample"));
        SubseriesGapsExample->resize(421, 335);
        SubseriesGapsExample->setMaximumSize(QSize(421, 16777215));
        label = new QLabel(SubseriesGapsExample);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 10, 207, 41));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        descriptionLabel = new QLabel(SubseriesGapsExample);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(10, 40, 401, 91));
        QFont font1;
        font1.setPointSize(14);
        descriptionLabel->setFont(font1);
        descriptionLabel->setWordWrap(true);
        descriptionLabel_2 = new QLabel(SubseriesGapsExample);
        descriptionLabel_2->setObjectName(QString::fromUtf8("descriptionLabel_2"));
        descriptionLabel_2->setGeometry(QRect(10, 120, 401, 211));
        descriptionLabel_2->setFont(font1);
        descriptionLabel_2->setWordWrap(true);

        retranslateUi(SubseriesGapsExample);

        QMetaObject::connectSlotsByName(SubseriesGapsExample);
    } // setupUi

    void retranslateUi(QWidget *SubseriesGapsExample)
    {
        SubseriesGapsExample->setWindowTitle(QApplication::translate("SubseriesGapsExample", "SubseriesGapsExample", nullptr));
        label->setText(QApplication::translate("SubseriesGapsExample", "Przyk\305\202ad", nullptr));
        descriptionLabel->setText(QApplication::translate("SubseriesGapsExample", "iloraz = 0,4\n"
"liczba=0.3\n"
"dok\305\202adno\305\233\304\207 = 0,01", nullptr));
        descriptionLabel_2->setText(QApplication::translate("SubseriesGapsExample", "0,4<0,3 wi\304\231c pomijamy pierwszy wyraz 0,4\n"
"\n"
"Suma wyraz\303\263w od drugiego wynosi 0,2667<0,3 wi\304\231c wiadomo, \305\274e nieuzyskamy przybli\305\274enia podanej liczby nawet bior\304\205c je wszystkie\n"
"\n"
"St\304\205d 0,3 mie\305\233ci si\304\231 w luce\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubseriesGapsExample: public Ui_SubseriesGapsExample {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBSERIESGAPSEXAMPLE_H
