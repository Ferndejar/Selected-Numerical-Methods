/********************************************************************************
** Form generated from reading UI file 'SubseriesWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBSERIESWINDOW_H
#define UI_SUBSERIESWINDOW_H

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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubseriesWindow
{
public:
    QAction *actionConditionally;
    QAction *actionGreedy;
    QAction *actionLazy;
    QAction *actionGaps;
    QAction *actionConditionallyExample;
    QAction *actionGreedyExample;
    QAction *actionLazyExample;
    QAction *actionGapsExample;
    QWidget *centralwidget;
    QLabel *windowLabel_2;
    QGroupBox *methodGroupBox;
    QRadioButton *condCoincidentRadioButton;
    QRadioButton *greedyRadioButton;
    QRadioButton *lazyRadioButton;
    QLabel *label;
    QRadioButton *gapsRadioButton;
    QLabel *numberLabel;
    QLineEdit *numberEditBox;
    QLabel *precisionLabel;
    QLineEdit *precisionEditBox;
    QLineEdit *quotientEditBox;
    QLabel *quotientLabel;
    QLabel *resultLabel;
    QPushButton *computeButton;
    QTextEdit *resultTextBox;
    QMenuBar *menuBar;
    QMenu *menuPomoc;
    QMenu *menuInstrukcja;
    QMenu *menuPrzyklad;

    void setupUi(QMainWindow *SubseriesWindow)
    {
        if (SubseriesWindow->objectName().isEmpty())
            SubseriesWindow->setObjectName(QString::fromUtf8("SubseriesWindow"));
        SubseriesWindow->resize(287, 523);
        SubseriesWindow->setMinimumSize(QSize(287, 500));
        SubseriesWindow->setMaximumSize(QSize(287, 523));
        actionConditionally = new QAction(SubseriesWindow);
        actionConditionally->setObjectName(QString::fromUtf8("actionConditionally"));
        actionGreedy = new QAction(SubseriesWindow);
        actionGreedy->setObjectName(QString::fromUtf8("actionGreedy"));
        actionLazy = new QAction(SubseriesWindow);
        actionLazy->setObjectName(QString::fromUtf8("actionLazy"));
        actionGaps = new QAction(SubseriesWindow);
        actionGaps->setObjectName(QString::fromUtf8("actionGaps"));
        actionConditionallyExample = new QAction(SubseriesWindow);
        actionConditionallyExample->setObjectName(QString::fromUtf8("actionConditionallyExample"));
        actionGreedyExample = new QAction(SubseriesWindow);
        actionGreedyExample->setObjectName(QString::fromUtf8("actionGreedyExample"));
        actionLazyExample = new QAction(SubseriesWindow);
        actionLazyExample->setObjectName(QString::fromUtf8("actionLazyExample"));
        actionGapsExample = new QAction(SubseriesWindow);
        actionGapsExample->setObjectName(QString::fromUtf8("actionGapsExample"));
        centralwidget = new QWidget(SubseriesWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        windowLabel_2 = new QLabel(centralwidget);
        windowLabel_2->setObjectName(QString::fromUtf8("windowLabel_2"));
        windowLabel_2->setGeometry(QRect(15, 10, 301, 16));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        windowLabel_2->setFont(font);
        methodGroupBox = new QGroupBox(centralwidget);
        methodGroupBox->setObjectName(QString::fromUtf8("methodGroupBox"));
        methodGroupBox->setGeometry(QRect(15, 35, 256, 146));
        QFont font1;
        font1.setPointSize(10);
        methodGroupBox->setFont(font1);
        condCoincidentRadioButton = new QRadioButton(methodGroupBox);
        condCoincidentRadioButton->setObjectName(QString::fromUtf8("condCoincidentRadioButton"));
        condCoincidentRadioButton->setGeometry(QRect(10, 20, 186, 17));
        condCoincidentRadioButton->setFont(font1);
        condCoincidentRadioButton->setChecked(true);
        greedyRadioButton = new QRadioButton(methodGroupBox);
        greedyRadioButton->setObjectName(QString::fromUtf8("greedyRadioButton"));
        greedyRadioButton->setGeometry(QRect(10, 65, 251, 17));
        greedyRadioButton->setFont(font1);
        lazyRadioButton = new QRadioButton(methodGroupBox);
        lazyRadioButton->setObjectName(QString::fromUtf8("lazyRadioButton"));
        lazyRadioButton->setGeometry(QRect(10, 90, 251, 17));
        lazyRadioButton->setFont(font1);
        label = new QLabel(methodGroupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 45, 276, 16));
        QFont font2;
        font2.setPointSize(8);
        label->setFont(font2);
        gapsRadioButton = new QRadioButton(methodGroupBox);
        gapsRadioButton->setObjectName(QString::fromUtf8("gapsRadioButton"));
        gapsRadioButton->setGeometry(QRect(10, 115, 251, 17));
        gapsRadioButton->setFont(font1);
        numberLabel = new QLabel(centralwidget);
        numberLabel->setObjectName(QString::fromUtf8("numberLabel"));
        numberLabel->setGeometry(QRect(15, 240, 301, 16));
        numberLabel->setFont(font1);
        numberEditBox = new QLineEdit(centralwidget);
        numberEditBox->setObjectName(QString::fromUtf8("numberEditBox"));
        numberEditBox->setGeometry(QRect(15, 260, 256, 20));
        numberEditBox->setFont(font1);
        precisionLabel = new QLabel(centralwidget);
        precisionLabel->setObjectName(QString::fromUtf8("precisionLabel"));
        precisionLabel->setGeometry(QRect(15, 290, 301, 16));
        precisionLabel->setFont(font1);
        precisionEditBox = new QLineEdit(centralwidget);
        precisionEditBox->setObjectName(QString::fromUtf8("precisionEditBox"));
        precisionEditBox->setGeometry(QRect(15, 310, 256, 20));
        precisionEditBox->setFont(font1);
        quotientEditBox = new QLineEdit(centralwidget);
        quotientEditBox->setObjectName(QString::fromUtf8("quotientEditBox"));
        quotientEditBox->setEnabled(false);
        quotientEditBox->setGeometry(QRect(15, 210, 256, 20));
        quotientEditBox->setFont(font1);
        quotientLabel = new QLabel(centralwidget);
        quotientLabel->setObjectName(QString::fromUtf8("quotientLabel"));
        quotientLabel->setGeometry(QRect(15, 190, 301, 16));
        quotientLabel->setFont(font1);
        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(15, 375, 131, 16));
        resultLabel->setFont(font1);
        computeButton = new QPushButton(centralwidget);
        computeButton->setObjectName(QString::fromUtf8("computeButton"));
        computeButton->setGeometry(QRect(15, 340, 256, 31));
        resultTextBox = new QTextEdit(centralwidget);
        resultTextBox->setObjectName(QString::fromUtf8("resultTextBox"));
        resultTextBox->setGeometry(QRect(15, 395, 256, 91));
        resultTextBox->setReadOnly(true);
        SubseriesWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(SubseriesWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 287, 18));
        menuPomoc = new QMenu(menuBar);
        menuPomoc->setObjectName(QString::fromUtf8("menuPomoc"));
        menuInstrukcja = new QMenu(menuPomoc);
        menuInstrukcja->setObjectName(QString::fromUtf8("menuInstrukcja"));
        menuPrzyklad = new QMenu(menuPomoc);
        menuPrzyklad->setObjectName(QString::fromUtf8("menuPrzyklad"));
        SubseriesWindow->setMenuBar(menuBar);

        menuBar->addAction(menuPomoc->menuAction());
        menuPomoc->addAction(menuInstrukcja->menuAction());
        menuPomoc->addAction(menuPrzyklad->menuAction());
        menuInstrukcja->addAction(actionConditionally);
        menuInstrukcja->addAction(actionGreedy);
        menuInstrukcja->addAction(actionLazy);
        menuInstrukcja->addAction(actionGaps);
        menuPrzyklad->addAction(actionConditionallyExample);
        menuPrzyklad->addAction(actionGreedyExample);
        menuPrzyklad->addAction(actionLazyExample);
        menuPrzyklad->addAction(actionGapsExample);

        retranslateUi(SubseriesWindow);

        QMetaObject::connectSlotsByName(SubseriesWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SubseriesWindow)
    {
        SubseriesWindow->setWindowTitle(QApplication::translate("SubseriesWindow", "Podszeregi", nullptr));
        actionConditionally->setText(QApplication::translate("SubseriesWindow", "Warunkowo zbie\305\274ny", nullptr));
        actionGreedy->setText(QApplication::translate("SubseriesWindow", "Metoda Greedy", nullptr));
        actionLazy->setText(QApplication::translate("SubseriesWindow", "Metoda Lazy", nullptr));
        actionGaps->setText(QApplication::translate("SubseriesWindow", "Z lukami", nullptr));
        actionConditionallyExample->setText(QApplication::translate("SubseriesWindow", "Warunkowo zbie\305\274ny", nullptr));
        actionGreedyExample->setText(QApplication::translate("SubseriesWindow", "Metoda Greedy", nullptr));
        actionLazyExample->setText(QApplication::translate("SubseriesWindow", "Metoda Lazy", nullptr));
        actionGapsExample->setText(QApplication::translate("SubseriesWindow", "Z lukami", nullptr));
        windowLabel_2->setText(QApplication::translate("SubseriesWindow", "Podszeregi", nullptr));
        methodGroupBox->setTitle(QApplication::translate("SubseriesWindow", "Metoda", nullptr));
        condCoincidentRadioButton->setText(QApplication::translate("SubseriesWindow", "szereg warunkowo zbie\305\274ny", nullptr));
        greedyRadioButton->setText(QApplication::translate("SubseriesWindow", "metoda greedy", nullptr));
        lazyRadioButton->setText(QApplication::translate("SubseriesWindow", "metoda lazy", nullptr));
        label->setText(QApplication::translate("SubseriesWindow", "szereg bezwzgl\304\231dnie zbie\305\274ny geometryczny:", nullptr));
        gapsRadioButton->setText(QApplication::translate("SubseriesWindow", "z lukami", nullptr));
        numberLabel->setText(QApplication::translate("SubseriesWindow", "Liczba:", nullptr));
        numberEditBox->setText(QApplication::translate("SubseriesWindow", "0", nullptr));
        precisionLabel->setText(QApplication::translate("SubseriesWindow", "Dok\305\202adno\305\233\304\207:", nullptr));
        precisionEditBox->setText(QApplication::translate("SubseriesWindow", "0.001", nullptr));
        quotientEditBox->setText(QApplication::translate("SubseriesWindow", "0", nullptr));
        quotientLabel->setText(QApplication::translate("SubseriesWindow", "Iloraz szeregu:", nullptr));
        resultLabel->setText(QApplication::translate("SubseriesWindow", "Wynik:", nullptr));
        computeButton->setText(QApplication::translate("SubseriesWindow", "Oblicz", nullptr));
        menuPomoc->setTitle(QApplication::translate("SubseriesWindow", "Pomoc", nullptr));
        menuInstrukcja->setTitle(QApplication::translate("SubseriesWindow", "Instrukcja", nullptr));
        menuPrzyklad->setTitle(QApplication::translate("SubseriesWindow", "Przyklad", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubseriesWindow: public Ui_SubseriesWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBSERIESWINDOW_H
