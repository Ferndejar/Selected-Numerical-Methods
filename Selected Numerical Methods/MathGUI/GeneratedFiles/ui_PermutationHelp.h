/********************************************************************************
** Form generated from reading UI file 'PermutationHelp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERMUTATIONHELP_H
#define UI_PERMUTATIONHELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PermutationHelp
{
public:
    QLabel *label;
    QLabel *descriptionLabel;
    QLabel *descriptionLabel_2;
    QLabel *descriptionLabel_3;
    QLabel *descriptionLabel_4;

    void setupUi(QWidget *PermutationHelp)
    {
        if (PermutationHelp->objectName().isEmpty())
            PermutationHelp->setObjectName(QString::fromUtf8("PermutationHelp"));
        PermutationHelp->resize(420, 620);
        PermutationHelp->setMaximumSize(QSize(420, 620));
        label = new QLabel(PermutationHelp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 10, 200, 31));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        descriptionLabel = new QLabel(PermutationHelp);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(10, 40, 401, 141));
        QFont font1;
        font1.setPointSize(14);
        descriptionLabel->setFont(font1);
        descriptionLabel->setTextFormat(Qt::RichText);
        descriptionLabel->setWordWrap(true);
        descriptionLabel_2 = new QLabel(PermutationHelp);
        descriptionLabel_2->setObjectName(QString::fromUtf8("descriptionLabel_2"));
        descriptionLabel_2->setGeometry(QRect(10, 180, 401, 141));
        descriptionLabel_2->setFont(font1);
        descriptionLabel_2->setWordWrap(true);
        descriptionLabel_3 = new QLabel(PermutationHelp);
        descriptionLabel_3->setObjectName(QString::fromUtf8("descriptionLabel_3"));
        descriptionLabel_3->setGeometry(QRect(10, 310, 401, 131));
        descriptionLabel_3->setFont(font1);
        descriptionLabel_3->setWordWrap(true);
        descriptionLabel_4 = new QLabel(PermutationHelp);
        descriptionLabel_4->setObjectName(QString::fromUtf8("descriptionLabel_4"));
        descriptionLabel_4->setGeometry(QRect(10, 430, 401, 201));
        descriptionLabel_4->setFont(font1);
        descriptionLabel_4->setWordWrap(true);

        retranslateUi(PermutationHelp);

        QMetaObject::connectSlotsByName(PermutationHelp);
    } // setupUi

    void retranslateUi(QWidget *PermutationHelp)
    {
        PermutationHelp->setWindowTitle(QApplication::translate("PermutationHelp", "PermutationHelp", nullptr));
        label->setText(QApplication::translate("PermutationHelp", "Instrukcja", nullptr));
        descriptionLabel->setText(QApplication::translate("PermutationHelp", "Liczba : jest to warto\305\233\304\207 dla kt\303\263rej program tworzy permutacje wyraz\303\263w w taki spos\303\263b aby przepermutowany szereg by\305\202 do niej zbie\305\274ny. Z twierdzenia Riemanna wiadomo \305\274e mo\305\274emy to zrobi\304\207 dla dowolnej liczby rzeczywistej", nullptr));
        descriptionLabel_2->setText(QApplication::translate("PermutationHelp", "Dok\305\202adno\305\233\304\207 : jest to maksymalna warto\305\233\304\207 b\305\202\304\231du bezwzgl\304\231dnego pomi\304\231dzy zwr\303\263cona suma sko\305\204czona a podana liczba, im mniejsza dodatnia dok\305\202adno\305\233\304\207 tym obliczenia s\304\205 bardziej precyzyjne", nullptr));
        descriptionLabel_3->setText(QApplication::translate("PermutationHelp", "Liczba pierwszych wyraz\303\263w: jest to wymagana liczba pocz\304\205tkowych wyraz\303\263w szeregu kt\303\263re chcemy aby wesz\305\202y w sk\305\202ad warto\305\233ci zwr\303\263conej permutacji", nullptr));
        descriptionLabel_4->setText(QApplication::translate("PermutationHelp", "Wynik: kolejne warto\305\233ci permutacji wyraz\303\263w szeregu (-1)^n/n, wy\305\233wietlane a\305\274 do zaspokojenia alternatywy warunk\303\263w dok\305\202adno\305\233ci i liczby pierwszych wyraz\303\263w, ponadto zwracana jest suma wy\305\233wietlonych wyraz\303\263w i rozpoznany pow\303\263d zako\305\204czenia oblicze\305\204\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PermutationHelp: public Ui_PermutationHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERMUTATIONHELP_H
