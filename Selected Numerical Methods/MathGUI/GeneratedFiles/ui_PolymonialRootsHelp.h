/********************************************************************************
** Form generated from reading UI file 'PolymonialRootsHelp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLYMONIALROOTSHELP_H
#define UI_POLYMONIALROOTSHELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PolymonialRootsHelp
{
public:
    QLabel *label;
    QLabel *descriptionLabel;
    QLabel *descriptionLabel_2;
    QLabel *descriptionLabel_3;
    QLabel *descriptionLabel_4;
    QLabel *descriptionLabel_5;

    void setupUi(QWidget *PolymonialRootsHelp)
    {
        if (PolymonialRootsHelp->objectName().isEmpty())
            PolymonialRootsHelp->setObjectName(QString::fromUtf8("PolymonialRootsHelp"));
        PolymonialRootsHelp->resize(406, 585);
        PolymonialRootsHelp->setMaximumSize(QSize(406, 585));
        label = new QLabel(PolymonialRootsHelp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 0, 218, 31));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        descriptionLabel = new QLabel(PolymonialRootsHelp);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(10, 40, 401, 131));
        QFont font1;
        font1.setPointSize(14);
        descriptionLabel->setFont(font1);
        descriptionLabel->setWordWrap(true);
        descriptionLabel_2 = new QLabel(PolymonialRootsHelp);
        descriptionLabel_2->setObjectName(QString::fromUtf8("descriptionLabel_2"));
        descriptionLabel_2->setEnabled(true);
        descriptionLabel_2->setGeometry(QRect(10, 170, 401, 131));
        descriptionLabel_2->setFont(font1);
        descriptionLabel_2->setFrameShape(QFrame::NoFrame);
        descriptionLabel_2->setScaledContents(true);
        descriptionLabel_2->setWordWrap(true);
        descriptionLabel_3 = new QLabel(PolymonialRootsHelp);
        descriptionLabel_3->setObjectName(QString::fromUtf8("descriptionLabel_3"));
        descriptionLabel_3->setEnabled(true);
        descriptionLabel_3->setGeometry(QRect(10, 280, 401, 131));
        descriptionLabel_3->setFont(font1);
        descriptionLabel_3->setFrameShape(QFrame::NoFrame);
        descriptionLabel_3->setScaledContents(true);
        descriptionLabel_3->setWordWrap(true);
        descriptionLabel_4 = new QLabel(PolymonialRootsHelp);
        descriptionLabel_4->setObjectName(QString::fromUtf8("descriptionLabel_4"));
        descriptionLabel_4->setEnabled(true);
        descriptionLabel_4->setGeometry(QRect(10, 370, 401, 151));
        descriptionLabel_4->setFont(font1);
        descriptionLabel_4->setFrameShape(QFrame::NoFrame);
        descriptionLabel_4->setScaledContents(true);
        descriptionLabel_4->setWordWrap(true);
        descriptionLabel_5 = new QLabel(PolymonialRootsHelp);
        descriptionLabel_5->setObjectName(QString::fromUtf8("descriptionLabel_5"));
        descriptionLabel_5->setEnabled(true);
        descriptionLabel_5->setGeometry(QRect(10, 500, 401, 71));
        descriptionLabel_5->setFont(font1);
        descriptionLabel_5->setFrameShape(QFrame::NoFrame);
        descriptionLabel_5->setScaledContents(true);
        descriptionLabel_5->setWordWrap(true);

        retranslateUi(PolymonialRootsHelp);

        QMetaObject::connectSlotsByName(PolymonialRootsHelp);
    } // setupUi

    void retranslateUi(QWidget *PolymonialRootsHelp)
    {
        PolymonialRootsHelp->setWindowTitle(QApplication::translate("PolymonialRootsHelp", "PolymonialRootsHelp", nullptr));
        label->setText(QApplication::translate("PolymonialRootsHelp", "Instrukcja", nullptr));
        descriptionLabel->setText(QApplication::translate("PolymonialRootsHelp", "Wsp\303\263\305\202czynniki: tu deklaruje si\304\231 badany wielomian, podajemy jego wsp\303\263\305\202czynniki od stoj\304\205cego przy zmiennej w najwy\305\274szej pot\304\231dze. Na przyk\305\202ad podaj\304\205c 1 6 5 zadeklarujemy \n"
"wielomian x^2+6x+5", nullptr));
        descriptionLabel_2->setText(QApplication::translate("PolymonialRootsHelp", "Dok\305\202adno\305\233\304\207: tu okre\305\233la si\304\231 maksymaln\304\205 warto\305\233\304\207 b\305\202\304\231du bezwzgl\304\231dnego uzyskanego przybli\305\274enia. Im mniejsza warto\305\233\304\207 dodatnia dok\305\202adno\305\233ci tym obliczenia s\304\205 bardziej precyzyjne", nullptr));
        descriptionLabel_3->setText(QApplication::translate("PolymonialRootsHelp", "Metoda: wybieramy algorytm poszukiwania miejsca zerowego - metod\304\231 po\305\202owienia albo Newtona", nullptr));
        descriptionLabel_4->setText(QApplication::translate("PolymonialRootsHelp", "Pocz\304\205tek/Koniec przedzia\305\202u: tu podaje si\304\231 parametry startowe dzia\305\202ania algorytmu - dwie warto\305\233ci dla metody po\305\202owienia i jeden punkt startowy dla metody Newtona", nullptr));
        descriptionLabel_5->setText(QApplication::translate("PolymonialRootsHelp", "Wynik: w tym polu program zwraca obliczone przybli\305\274enie miejsca zerowego", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PolymonialRootsHelp: public Ui_PolymonialRootsHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYMONIALROOTSHELP_H
