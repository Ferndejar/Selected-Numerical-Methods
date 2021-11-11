/********************************************************************************
** Form generated from reading UI file 'ModuloShiftHelp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODULOSHIFTHELP_H
#define UI_MODULOSHIFTHELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModuloShiftHelp
{
public:
    QLabel *label;
    QLabel *descriptionLabel;
    QLabel *descriptionLabel_2;
    QLabel *descriptionLabel_3;

    void setupUi(QWidget *ModuloShiftHelp)
    {
        if (ModuloShiftHelp->objectName().isEmpty())
            ModuloShiftHelp->setObjectName(QString::fromUtf8("ModuloShiftHelp"));
        ModuloShiftHelp->resize(417, 300);
        ModuloShiftHelp->setMaximumSize(QSize(417, 300));
        label = new QLabel(ModuloShiftHelp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(104, 0, 208, 31));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        descriptionLabel = new QLabel(ModuloShiftHelp);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(10, 40, 401, 71));
        QFont font1;
        font1.setPointSize(14);
        descriptionLabel->setFont(font1);
        descriptionLabel->setTextFormat(Qt::RichText);
        descriptionLabel->setWordWrap(true);
        descriptionLabel_2 = new QLabel(ModuloShiftHelp);
        descriptionLabel_2->setObjectName(QString::fromUtf8("descriptionLabel_2"));
        descriptionLabel_2->setGeometry(QRect(10, 100, 401, 71));
        descriptionLabel_2->setFont(font1);
        descriptionLabel_2->setTextFormat(Qt::RichText);
        descriptionLabel_2->setWordWrap(true);
        descriptionLabel_3 = new QLabel(ModuloShiftHelp);
        descriptionLabel_3->setObjectName(QString::fromUtf8("descriptionLabel_3"));
        descriptionLabel_3->setGeometry(QRect(10, 180, 401, 71));
        descriptionLabel_3->setFont(font1);
        descriptionLabel_3->setTextFormat(Qt::RichText);
        descriptionLabel_3->setWordWrap(true);

        retranslateUi(ModuloShiftHelp);

        QMetaObject::connectSlotsByName(ModuloShiftHelp);
    } // setupUi

    void retranslateUi(QWidget *ModuloShiftHelp)
    {
        ModuloShiftHelp->setWindowTitle(QApplication::translate("ModuloShiftHelp", "ModuloShiftHelp", nullptr));
        label->setText(QApplication::translate("ModuloShiftHelp", "Instrukcja", nullptr));
        descriptionLabel->setText(QApplication::translate("ModuloShiftHelp", "Rozmiar : liczba pierwszych wielokrotno\305\233ci wskazanej liczby jaka nas interesuje\n"
"", nullptr));
        descriptionLabel_2->setText(QApplication::translate("ModuloShiftHelp", "Warto\305\233\304\207 : w przypadku wyboru o pierwiastek nale\305\274y poda\304\207 liczb\304\231 do spierwiastkowania\n"
"", nullptr));
        descriptionLabel_3->setText(QApplication::translate("ModuloShiftHelp", "Wynik : program zwraca liczb\304\231 cz\304\231\305\233ci u\305\202amkowych kt\303\263re wpad\305\202y do kolejnych dziesi\304\205tych cz\304\231\305\233ci odcinka [0,1)\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModuloShiftHelp: public Ui_ModuloShiftHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODULOSHIFTHELP_H
