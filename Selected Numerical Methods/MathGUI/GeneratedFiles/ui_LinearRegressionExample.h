/********************************************************************************
** Form generated from reading UI file 'LinearRegressionExample.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINEARREGRESSIONEXAMPLE_H
#define UI_LINEARREGRESSIONEXAMPLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LinearRegressionExample
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *descriptionLabel;
    QLabel *descriptionLabel_2;

    void setupUi(QWidget *LinearRegressionExample)
    {
        if (LinearRegressionExample->objectName().isEmpty())
            LinearRegressionExample->setObjectName(QString::fromUtf8("LinearRegressionExample"));
        LinearRegressionExample->resize(400, 541);
        LinearRegressionExample->setMaximumSize(QSize(400, 541));
        label = new QLabel(LinearRegressionExample);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 321, 271));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Resources/regresjadrugiegorodzaju_zmniejszone.png")));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(LinearRegressionExample);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 10, 207, 31));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        descriptionLabel = new QLabel(LinearRegressionExample);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(10, 280, 401, 121));
        QFont font1;
        font1.setPointSize(14);
        descriptionLabel->setFont(font1);
        descriptionLabel->setWordWrap(true);
        descriptionLabel_2 = new QLabel(LinearRegressionExample);
        descriptionLabel_2->setObjectName(QString::fromUtf8("descriptionLabel_2"));
        descriptionLabel_2->setGeometry(QRect(10, 410, 401, 111));
        descriptionLabel_2->setFont(font1);
        descriptionLabel_2->setWordWrap(true);

        retranslateUi(LinearRegressionExample);

        QMetaObject::connectSlotsByName(LinearRegressionExample);
    } // setupUi

    void retranslateUi(QWidget *LinearRegressionExample)
    {
        LinearRegressionExample->setWindowTitle(QApplication::translate("LinearRegressionExample", "LinearRegressionExample", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("LinearRegressionExample", "Przyk\305\202ad", nullptr));
        descriptionLabel->setText(QApplication::translate("LinearRegressionExample", "Program wyznacza wz\303\263r prostej regresji drugiego rodzaju dla podanych punkt\303\263w p\305\202aszczyzny.\n"
"Minimalizuje ona sum\304\231 kwadrat\303\263w b\305\202\304\231d\303\263w zilustrowanych na rysunku.", nullptr));
        descriptionLabel_2->setText(QApplication::translate("LinearRegressionExample", "Dla punkt\303\263w:\n"
"(1,2), (2,3), (4,1) prosta regresji drugiego rodzaju ma wz\303\263r:\n"
"y= -0.428571x + 3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LinearRegressionExample: public Ui_LinearRegressionExample {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINEARREGRESSIONEXAMPLE_H
