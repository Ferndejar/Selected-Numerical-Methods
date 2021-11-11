/********************************************************************************
** Form generated from reading UI file 'LinearRegressionExampleOrthogonal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINEARREGRESSIONEXAMPLEORTHOGONAL_H
#define UI_LINEARREGRESSIONEXAMPLEORTHOGONAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LinearRegressionExampleOrthogonal
{
public:
    QLabel *label_2;
    QLabel *label;
    QLabel *descriptionLabel;
    QLabel *descriptionLabel_2;

    void setupUi(QWidget *LinearRegressionExampleOrthogonal)
    {
        if (LinearRegressionExampleOrthogonal->objectName().isEmpty())
            LinearRegressionExampleOrthogonal->setObjectName(QString::fromUtf8("LinearRegressionExampleOrthogonal"));
        LinearRegressionExampleOrthogonal->resize(400, 562);
        LinearRegressionExampleOrthogonal->setMaximumSize(QSize(400, 562));
        label_2 = new QLabel(LinearRegressionExampleOrthogonal);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 10, 207, 31));
        QFont font;
        font.setPointSize(20);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label = new QLabel(LinearRegressionExampleOrthogonal);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 341, 271));
        label->setFont(font);
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Resources/regresjaortogonalna_zmienione.png")));
        label->setAlignment(Qt::AlignCenter);
        descriptionLabel = new QLabel(LinearRegressionExampleOrthogonal);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(10, 300, 401, 131));
        QFont font1;
        font1.setPointSize(14);
        descriptionLabel->setFont(font1);
        descriptionLabel->setWordWrap(true);
        descriptionLabel_2 = new QLabel(LinearRegressionExampleOrthogonal);
        descriptionLabel_2->setObjectName(QString::fromUtf8("descriptionLabel_2"));
        descriptionLabel_2->setGeometry(QRect(10, 440, 401, 91));
        descriptionLabel_2->setFont(font1);
        descriptionLabel_2->setWordWrap(true);

        retranslateUi(LinearRegressionExampleOrthogonal);

        QMetaObject::connectSlotsByName(LinearRegressionExampleOrthogonal);
    } // setupUi

    void retranslateUi(QWidget *LinearRegressionExampleOrthogonal)
    {
        LinearRegressionExampleOrthogonal->setWindowTitle(QApplication::translate("LinearRegressionExampleOrthogonal", "LinearRegressionExampleOrthogonal", nullptr));
        label_2->setText(QApplication::translate("LinearRegressionExampleOrthogonal", "Przyk\305\202ad", nullptr));
        label->setText(QString());
        descriptionLabel->setText(QApplication::translate("LinearRegressionExampleOrthogonal", "Program wyznacza wz\303\263r prostej regresji ortogonalnej dla podanych punkt\303\263w p\305\202aszczyzny.\n"
"Minimalizuje ona sum\304\231 kwadrat\303\263w b\305\202\304\231d\303\263w zilustrowanych na rysunku.", nullptr));
        descriptionLabel_2->setText(QApplication::translate("LinearRegressionExampleOrthogonal", "Dla punkt\303\263w:\n"
"(2,4), (4,1), (1,1) prosta regresji ortogonalna ma wz\303\263r:\n"
"y= -1.86852x + 6.35987 ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LinearRegressionExampleOrthogonal: public Ui_LinearRegressionExampleOrthogonal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINEARREGRESSIONEXAMPLEORTHOGONAL_H
