/********************************************************************************
** Form generated from reading UI file 'Power2NumbersHelp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POWER2NUMBERSHELP_H
#define UI_POWER2NUMBERSHELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Power2NumbersHelp
{
public:
    QLabel *label;
    QLabel *descriptionLabel;
    QLabel *descriptionLabel_2;

    void setupUi(QWidget *Power2NumbersHelp)
    {
        if (Power2NumbersHelp->objectName().isEmpty())
            Power2NumbersHelp->setObjectName(QString::fromUtf8("Power2NumbersHelp"));
        Power2NumbersHelp->resize(420, 396);
        Power2NumbersHelp->setMaximumSize(QSize(420, 396));
        label = new QLabel(Power2NumbersHelp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 0, 207, 31));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        descriptionLabel = new QLabel(Power2NumbersHelp);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(10, 10, 401, 161));
        QFont font1;
        font1.setPointSize(14);
        descriptionLabel->setFont(font1);
        descriptionLabel->setWordWrap(true);
        descriptionLabel_2 = new QLabel(Power2NumbersHelp);
        descriptionLabel_2->setObjectName(QString::fromUtf8("descriptionLabel_2"));
        descriptionLabel_2->setGeometry(QRect(10, 130, 401, 251));
        descriptionLabel_2->setFont(font1);
        descriptionLabel_2->setWordWrap(true);

        retranslateUi(Power2NumbersHelp);

        QMetaObject::connectSlotsByName(Power2NumbersHelp);
    } // setupUi

    void retranslateUi(QWidget *Power2NumbersHelp)
    {
        Power2NumbersHelp->setWindowTitle(QApplication::translate("Power2NumbersHelp", "Power2NumbersHelp", nullptr));
        label->setText(QApplication::translate("Power2NumbersHelp", "Instrukcja", nullptr));
        descriptionLabel->setText(QApplication::translate("Power2NumbersHelp", "Pot\304\231ga 2: Podajemy liczb\304\231 naturaln\304\205 pierwszych pot\304\231g dw\303\263jek. np. dla 6 bierzemy pod uwag\304\231 liczby 2^1, 2^2, 2^3, 2^4, 2^5, 2^6 czyli kolejno 2 4 8 16 32 64", nullptr));
        descriptionLabel_2->setText(QApplication::translate("Power2NumbersHelp", "Wynik: Program zwraca liczb\304\231 wyst\304\205pie\305\204 kolejnych cyfr od 1 do 9 jako cyfr wiod\304\205cych w\305\233r\303\263d wybranej liczby pierwszych pot\304\231g dw\303\263jek. np. dla 6 cyfry wiod\304\205ce kolejnych pot\304\231g to 2 4 8 1 3 6. W zwi\304\205zku z tym program zwraca 1 1 1 1 0 1 0 1 0 , komunikuj\304\205c tym samym jednokrotne wyst\304\205pienia wymienionych cyfr i brak wiod\304\205cych pozosta\305\202ych", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Power2NumbersHelp: public Ui_Power2NumbersHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POWER2NUMBERSHELP_H
