/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_2;
    QWidget *centralWidget;
    QLabel *label;
    QLineEdit *textBoxXAttacker;
    QLineEdit *textBoxYAttacker;
    QLineEdit *textBoxZAttacker;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *textBoxAttackerSpeed;
    QLineEdit *textBoxAttackerBoost;
    QLineEdit *textBoxAttackerMaxTime;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *textBoxZProtect;
    QLineEdit *textBoxXProtect;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *textBoxYProtect;
    QLabel *label_12;
    QLineEdit *textBoxFeatureBetaK;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *textBoxFeatureBk;
    QLineEdit *textBoxEpsl;
    QLabel *label_15;
    QMenuBar *menuBar;
    QMenu *menu_1;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(634, 523);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 0, 111, 51));
        label->setAcceptDrops(false);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QLatin1String("background-color: rgb(41, 255, 238);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(false);
        textBoxXAttacker = new QLineEdit(centralWidget);
        textBoxXAttacker->setObjectName(QStringLiteral("textBoxXAttacker"));
        textBoxXAttacker->setGeometry(QRect(50, 100, 91, 21));
        textBoxYAttacker = new QLineEdit(centralWidget);
        textBoxYAttacker->setObjectName(QStringLiteral("textBoxYAttacker"));
        textBoxYAttacker->setGeometry(QRect(50, 150, 91, 21));
        textBoxZAttacker = new QLineEdit(centralWidget);
        textBoxZAttacker->setObjectName(QStringLiteral("textBoxZAttacker"));
        textBoxZAttacker->setGeometry(QRect(50, 200, 91, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 100, 47, 13));
        label_2->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 150, 47, 13));
        label_3->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 200, 47, 13));
        label_4->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        textBoxAttackerSpeed = new QLineEdit(centralWidget);
        textBoxAttackerSpeed->setObjectName(QStringLiteral("textBoxAttackerSpeed"));
        textBoxAttackerSpeed->setGeometry(QRect(50, 250, 91, 21));
        textBoxAttackerBoost = new QLineEdit(centralWidget);
        textBoxAttackerBoost->setObjectName(QStringLiteral("textBoxAttackerBoost"));
        textBoxAttackerBoost->setGeometry(QRect(50, 300, 91, 21));
        textBoxAttackerMaxTime = new QLineEdit(centralWidget);
        textBoxAttackerMaxTime->setObjectName(QStringLiteral("textBoxAttackerMaxTime"));
        textBoxAttackerMaxTime->setGeometry(QRect(50, 350, 91, 21));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 250, 51, 16));
        label_5->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 300, 47, 13));
        label_6->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 360, 51, 16));
        label_7->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 60, 171, 21));
        label_8->setStyleSheet(QLatin1String("color: rgb(44, 44, 255);\n"
"font: italic 10pt \"MS Shell Dlg 2\";"));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(230, 60, 201, 21));
        label_9->setStyleSheet(QLatin1String("color: rgb(44, 44, 255);\n"
"font: 9pt \"MS Shell Dlg 2\";\n"
"font: italic 10pt \"MS Shell Dlg 2\";"));
        textBoxZProtect = new QLineEdit(centralWidget);
        textBoxZProtect->setObjectName(QStringLiteral("textBoxZProtect"));
        textBoxZProtect->setGeometry(QRect(290, 200, 133, 20));
        textBoxXProtect = new QLineEdit(centralWidget);
        textBoxXProtect->setObjectName(QStringLiteral("textBoxXProtect"));
        textBoxXProtect->setGeometry(QRect(290, 100, 133, 20));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(250, 200, 47, 13));
        label_10->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(250, 150, 47, 13));
        label_11->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        textBoxYProtect = new QLineEdit(centralWidget);
        textBoxYProtect->setObjectName(QStringLiteral("textBoxYProtect"));
        textBoxYProtect->setGeometry(QRect(290, 150, 133, 20));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(250, 100, 47, 13));
        label_12->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        textBoxFeatureBetaK = new QLineEdit(centralWidget);
        textBoxFeatureBetaK->setObjectName(QStringLiteral("textBoxFeatureBetaK"));
        textBoxFeatureBetaK->setGeometry(QRect(290, 260, 133, 20));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(240, 260, 51, 16));
        label_13->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(240, 310, 51, 16));
        label_14->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        textBoxFeatureBk = new QLineEdit(centralWidget);
        textBoxFeatureBk->setObjectName(QStringLiteral("textBoxFeatureBk"));
        textBoxFeatureBk->setGeometry(QRect(290, 310, 133, 20));
        textBoxEpsl = new QLineEdit(centralWidget);
        textBoxEpsl->setObjectName(QStringLiteral("textBoxEpsl"));
        textBoxEpsl->setGeometry(QRect(390, 390, 91, 21));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(400, 360, 71, 16));
        label_15->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 634, 21));
        menu_1 = new QMenu(menuBar);
        menu_1->setObjectName(QStringLiteral("menu_1"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_1->menuAction());
        menuBar->addAction(menu_2->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        action_2->setText(QApplication::translate("MainWindow", "\320\270\320\263\321\200\320\276\320\272 2", 0));
        label->setText(QApplication::translate("MainWindow", "    \320\230\320\223\320\240\320\236\320\232 1", 0));
        label_2->setText(QApplication::translate("MainWindow", "X", 0));
        label_3->setText(QApplication::translate("MainWindow", "Y", 0));
        label_4->setText(QApplication::translate("MainWindow", "Z", 0));
        label_5->setText(QApplication::translate("MainWindow", "Vk0", 0));
        label_6->setText(QApplication::translate("MainWindow", "Mk", 0));
        label_7->setText(QApplication::translate("MainWindow", "Tf", 0));
        label_8->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\321\213\320\265 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213", 0));
        label_9->setText(QApplication::translate("MainWindow", "             \320\232\320\276\320\275\320\265\321\207\320\275\320\260\321\217 \321\202\320\276\321\207\320\272\320\260", 0));
        label_10->setText(QApplication::translate("MainWindow", "Z", 0));
        label_11->setText(QApplication::translate("MainWindow", "Y", 0));
        label_12->setText(QApplication::translate("MainWindow", "X", 0));
        label_13->setText(QApplication::translate("MainWindow", "Bk", 0));
        label_14->setText(QApplication::translate("MainWindow", "Bk2", 0));
        label_15->setText(QApplication::translate("MainWindow", "\320\255\320\277\321\201\320\270\320\273\320\276\320\275", 0));
        menu_1->setTitle(QApplication::translate("MainWindow", "\320\270\320\263\321\200\320\276\320\272 1", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\270\320\263\321\200\320\276\320\2722", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
