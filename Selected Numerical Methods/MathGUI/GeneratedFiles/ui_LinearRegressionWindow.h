/********************************************************************************
** Form generated from reading UI file 'LinearRegressionWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINEARREGRESSIONWINDOW_H
#define UI_LINEARREGRESSIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LinearRegression
{
public:
    QAction *actionInstrukcja;
    QAction *actionSecond_Moment;
    QAction *actionOrthogonal;
    QWidget *centralwidget;
    QLabel *windowLabel;
    QLabel *coordinatesLabel;
    QLineEdit *coordinatesEditBox;
    QGroupBox *methodGroupBox;
    QRadioButton *secondTypeRadioButton;
    QRadioButton *orthogonalRadioButton;
    QPushButton *computeButton;
    QLabel *resultLabel;
    QLineEdit *resultTextBox;
    QMenuBar *menuBar;
    QMenu *menuPomoc;
    QMenu *menuPrzyklad;

    void setupUi(QMainWindow *LinearRegression)
    {
        if (LinearRegression->objectName().isEmpty())
            LinearRegression->setObjectName(QString::fromUtf8("LinearRegression"));
        LinearRegression->resize(285, 255);
        LinearRegression->setMinimumSize(QSize(285, 200));
        LinearRegression->setMaximumSize(QSize(285, 255));
        actionInstrukcja = new QAction(LinearRegression);
        actionInstrukcja->setObjectName(QString::fromUtf8("actionInstrukcja"));
        actionSecond_Moment = new QAction(LinearRegression);
        actionSecond_Moment->setObjectName(QString::fromUtf8("actionSecond_Moment"));
        actionOrthogonal = new QAction(LinearRegression);
        actionOrthogonal->setObjectName(QString::fromUtf8("actionOrthogonal"));
        centralwidget = new QWidget(LinearRegression);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        windowLabel = new QLabel(centralwidget);
        windowLabel->setObjectName(QString::fromUtf8("windowLabel"));
        windowLabel->setGeometry(QRect(15, 10, 301, 16));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        windowLabel->setFont(font);
        coordinatesLabel = new QLabel(centralwidget);
        coordinatesLabel->setObjectName(QString::fromUtf8("coordinatesLabel"));
        coordinatesLabel->setGeometry(QRect(15, 35, 301, 16));
        QFont font1;
        font1.setPointSize(10);
        coordinatesLabel->setFont(font1);
        coordinatesEditBox = new QLineEdit(centralwidget);
        coordinatesEditBox->setObjectName(QString::fromUtf8("coordinatesEditBox"));
        coordinatesEditBox->setGeometry(QRect(15, 55, 256, 20));
        coordinatesEditBox->setFont(font1);
        methodGroupBox = new QGroupBox(centralwidget);
        methodGroupBox->setObjectName(QString::fromUtf8("methodGroupBox"));
        methodGroupBox->setGeometry(QRect(15, 80, 256, 46));
        methodGroupBox->setFont(font1);
        secondTypeRadioButton = new QRadioButton(methodGroupBox);
        secondTypeRadioButton->setObjectName(QString::fromUtf8("secondTypeRadioButton"));
        secondTypeRadioButton->setGeometry(QRect(15, 20, 121, 17));
        secondTypeRadioButton->setFont(font1);
        secondTypeRadioButton->setChecked(true);
        orthogonalRadioButton = new QRadioButton(methodGroupBox);
        orthogonalRadioButton->setObjectName(QString::fromUtf8("orthogonalRadioButton"));
        orthogonalRadioButton->setGeometry(QRect(140, 20, 91, 17));
        orthogonalRadioButton->setFont(font1);
        computeButton = new QPushButton(centralwidget);
        computeButton->setObjectName(QString::fromUtf8("computeButton"));
        computeButton->setGeometry(QRect(15, 130, 256, 31));
        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(15, 165, 131, 16));
        resultLabel->setFont(font1);
        resultTextBox = new QLineEdit(centralwidget);
        resultTextBox->setObjectName(QString::fromUtf8("resultTextBox"));
        resultTextBox->setEnabled(true);
        resultTextBox->setGeometry(QRect(15, 185, 256, 20));
        resultTextBox->setReadOnly(true);
        LinearRegression->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(LinearRegression);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 285, 18));
        menuPomoc = new QMenu(menuBar);
        menuPomoc->setObjectName(QString::fromUtf8("menuPomoc"));
        menuPrzyklad = new QMenu(menuPomoc);
        menuPrzyklad->setObjectName(QString::fromUtf8("menuPrzyklad"));
        LinearRegression->setMenuBar(menuBar);

        menuBar->addAction(menuPomoc->menuAction());
        menuPomoc->addAction(actionInstrukcja);
        menuPomoc->addAction(menuPrzyklad->menuAction());
        menuPrzyklad->addAction(actionSecond_Moment);
        menuPrzyklad->addAction(actionOrthogonal);

        retranslateUi(LinearRegression);

        QMetaObject::connectSlotsByName(LinearRegression);
    } // setupUi

    void retranslateUi(QMainWindow *LinearRegression)
    {
        LinearRegression->setWindowTitle(QApplication::translate("LinearRegression", "Regresja liniowa", nullptr));
        actionInstrukcja->setText(QApplication::translate("LinearRegression", "Instrukcja", nullptr));
        actionSecond_Moment->setText(QApplication::translate("LinearRegression", "Drugiego rodzaju", nullptr));
        actionOrthogonal->setText(QApplication::translate("LinearRegression", "Ortogonalna", nullptr));
        windowLabel->setText(QApplication::translate("LinearRegression", "Regresja liniowa", nullptr));
        coordinatesLabel->setText(QApplication::translate("LinearRegression", "Wsp\303\263\305\202rz\304\231dne punkt\303\263w (x y; x y; ...):", nullptr));
        coordinatesEditBox->setText(QApplication::translate("LinearRegression", "0 0", nullptr));
        methodGroupBox->setTitle(QApplication::translate("LinearRegression", "Metoda regresji", nullptr));
        secondTypeRadioButton->setText(QApplication::translate("LinearRegression", "drugiego rodzaju", nullptr));
        orthogonalRadioButton->setText(QApplication::translate("LinearRegression", "ortogonalna", nullptr));
        computeButton->setText(QApplication::translate("LinearRegression", "Oblicz", nullptr));
        resultLabel->setText(QApplication::translate("LinearRegression", "Wynik:", nullptr));
        menuPomoc->setTitle(QApplication::translate("LinearRegression", "Pomoc", nullptr));
        menuPrzyklad->setTitle(QApplication::translate("LinearRegression", "Przyklad", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LinearRegression: public Ui_LinearRegression {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINEARREGRESSIONWINDOW_H
