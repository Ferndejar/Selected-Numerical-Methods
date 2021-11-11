/********************************************************************************
** Form generated from reading UI file 'PermutationExample.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERMUTATIONEXAMPLE_H
#define UI_PERMUTATIONEXAMPLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PermutationExample
{
public:
    QLabel *label;
    QLabel *descriptionLabel;
    QLabel *descriptionLabel_2;
    QLabel *descriptionLabel_3;

    void setupUi(QWidget *PermutationExample)
    {
        if (PermutationExample->objectName().isEmpty())
            PermutationExample->setObjectName(QString::fromUtf8("PermutationExample"));
        PermutationExample->resize(413, 578);
        PermutationExample->setMaximumSize(QSize(413, 16777215));
        label = new QLabel(PermutationExample);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 10, 207, 31));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        descriptionLabel = new QLabel(PermutationExample);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(10, 40, 401, 81));
        QFont font1;
        font1.setPointSize(14);
        descriptionLabel->setFont(font1);
        descriptionLabel->setWordWrap(true);
        descriptionLabel_2 = new QLabel(PermutationExample);
        descriptionLabel_2->setObjectName(QString::fromUtf8("descriptionLabel_2"));
        descriptionLabel_2->setGeometry(QRect(10, 120, 401, 301));
        descriptionLabel_2->setFont(font1);
        descriptionLabel_2->setWordWrap(true);
        descriptionLabel_3 = new QLabel(PermutationExample);
        descriptionLabel_3->setObjectName(QString::fromUtf8("descriptionLabel_3"));
        descriptionLabel_3->setGeometry(QRect(10, 390, 401, 161));
        descriptionLabel_3->setFont(font1);
        descriptionLabel_3->setWordWrap(true);

        retranslateUi(PermutationExample);

        QMetaObject::connectSlotsByName(PermutationExample);
    } // setupUi

    void retranslateUi(QWidget *PermutationExample)
    {
        PermutationExample->setWindowTitle(QApplication::translate("PermutationExample", "PermutationExample", nullptr));
        label->setText(QApplication::translate("PermutationExample", "Przyk\305\202ad", nullptr));
        descriptionLabel->setText(QApplication::translate("PermutationExample", "liczba = -0,34\n"
"dok\305\202adno\305\233\304\207 = 0,1\n"
"wyrazy = 10", nullptr));
        descriptionLabel_2->setText(QApplication::translate("PermutationExample", "Startujemy z 0, liczba jest mniejsza od bierz\304\205cej sumy wi\304\231c u\305\274ywamy pierwszego niewykorzystanego wyrazu ujemnego -1\n"
"\n"
"bierzemy wyraz pierwszy -1\n"
"-1  < -0,34 wi\304\231c przechodzimy na wyrazy dodatnie\n"
"-1 +0,5 <-0,34\n"
"bierzemy drugi wyraz 0.5\n"
"przechodzimy do kolejnego wyrazu dodatniego\n"
"-1 + 0,5 + 0,25 > -0,34\n"
"", nullptr));
        descriptionLabel_3->setText(QApplication::translate("PermutationExample", "Liczba po lewej stronie nier\303\263wno\305\233ci jest o 0,1 wi\304\231ksza od liczby po prawej stronie wi\304\231c program ko\305\204czy prac\304\231, gdy\305\274 zwr\303\263cona suma zaspokaja dok\305\202adno\305\233\304\207\n"
"\n"
"Wynik: 1 2 4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PermutationExample: public Ui_PermutationExample {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERMUTATIONEXAMPLE_H
