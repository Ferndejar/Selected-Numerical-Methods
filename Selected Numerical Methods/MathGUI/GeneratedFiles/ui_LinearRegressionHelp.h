/********************************************************************************
** Form generated from reading UI file 'LinearRegressionHelp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINEARREGRESSIONHELP_H
#define UI_LINEARREGRESSIONHELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LinearRegressionHelp
{
public:
    QLabel *label;
    QLabel *descriptionLabel;
    QLabel *descriptionLabel_2;
    QLabel *descriptionLabel_3;

    void setupUi(QWidget *LinearRegressionHelp)
    {
        if (LinearRegressionHelp->objectName().isEmpty())
            LinearRegressionHelp->setObjectName(QString::fromUtf8("LinearRegressionHelp"));
        LinearRegressionHelp->resize(416, 269);
        LinearRegressionHelp->setMaximumSize(QSize(416, 269));
        label = new QLabel(LinearRegressionHelp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 0, 208, 31));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        descriptionLabel = new QLabel(LinearRegressionHelp);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(10, 30, 401, 71));
        QFont font1;
        font1.setPointSize(14);
        descriptionLabel->setFont(font1);
        descriptionLabel->setTextFormat(Qt::RichText);
        descriptionLabel->setWordWrap(true);
        descriptionLabel_2 = new QLabel(LinearRegressionHelp);
        descriptionLabel_2->setObjectName(QString::fromUtf8("descriptionLabel_2"));
        descriptionLabel_2->setGeometry(QRect(10, 90, 401, 71));
        descriptionLabel_2->setFont(font1);
        descriptionLabel_2->setTextFormat(Qt::RichText);
        descriptionLabel_2->setWordWrap(true);
        descriptionLabel_3 = new QLabel(LinearRegressionHelp);
        descriptionLabel_3->setObjectName(QString::fromUtf8("descriptionLabel_3"));
        descriptionLabel_3->setGeometry(QRect(10, 160, 401, 81));
        descriptionLabel_3->setFont(font1);
        descriptionLabel_3->setTextFormat(Qt::RichText);
        descriptionLabel_3->setWordWrap(true);

        retranslateUi(LinearRegressionHelp);

        QMetaObject::connectSlotsByName(LinearRegressionHelp);
    } // setupUi

    void retranslateUi(QWidget *LinearRegressionHelp)
    {
        LinearRegressionHelp->setWindowTitle(QApplication::translate("LinearRegressionHelp", "LinearRegressionHelp", nullptr));
        label->setText(QApplication::translate("LinearRegressionHelp", "Instrukcja", nullptr));
        descriptionLabel->setText(QApplication::translate("LinearRegressionHelp", "Wsp\303\263\305\202rz\304\231dne: deklarujemy dowoln\304\205 liczb\304\231 punkt\303\263w na p\305\202aszczy\305\272nie\n"
"", nullptr));
        descriptionLabel_2->setText(QApplication::translate("LinearRegressionHelp", "Metoda : dokonujemy wyboru pomi\304\231dzy regresja || rodzaju, a regresja ortogonaln\304\205\n"
"", nullptr));
        descriptionLabel_3->setText(QApplication::translate("LinearRegressionHelp", "Wynik : program wy\305\233wietla wz\303\263r funkcji liniowej, kt\303\263rej wykresem jest prosta regresji wskazanego rodzaju dla okre\305\233lonych punkt\303\263w\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LinearRegressionHelp: public Ui_LinearRegressionHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINEARREGRESSIONHELP_H
