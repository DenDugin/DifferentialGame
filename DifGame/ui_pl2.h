/********************************************************************************
** Form generated from reading UI file 'pl2.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PL2_H
#define UI_PL2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pl2
{
public:
    QLabel *label;
    QLineEdit *textBoxDefenderSpeed;
    QLineEdit *textBoxAttackerSpeed;
    QLabel *label_6;
    QLineEdit *textBoxFeatureA;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_8;
    QLineEdit *textBoxDefenderBoost;

    void setupUi(QWidget *Pl2)
    {
        if (Pl2->objectName().isEmpty())
            Pl2->setObjectName(QStringLiteral("Pl2"));
        Pl2->resize(588, 451);
        label = new QLabel(Pl2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 10, 181, 91));
        label->setAcceptDrops(false);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QLatin1String("background-color: rgb(241, 137, 32);\n"
"font: 75 15pt \"MS Shell Dlg 2\";"));
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(false);
        textBoxDefenderSpeed = new QLineEdit(Pl2);
        textBoxDefenderSpeed->setObjectName(QStringLiteral("textBoxDefenderSpeed"));
        textBoxDefenderSpeed->setGeometry(QRect(110, 290, 91, 21));
        textBoxAttackerSpeed = new QLineEdit(Pl2);
        textBoxAttackerSpeed->setObjectName(QStringLiteral("textBoxAttackerSpeed"));
        textBoxAttackerSpeed->setGeometry(QRect(110, 190, 91, 21));
        label_6 = new QLabel(Pl2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(70, 240, 47, 13));
        label_6->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        textBoxFeatureA = new QLineEdit(Pl2);
        textBoxFeatureA->setObjectName(QStringLiteral("textBoxFeatureA"));
        textBoxFeatureA->setGeometry(QRect(110, 240, 91, 21));
        label_7 = new QLabel(Pl2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(70, 300, 51, 16));
        label_7->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        label_5 = new QLabel(Pl2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 190, 51, 16));
        label_5->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        label_8 = new QLabel(Pl2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(70, 350, 51, 16));
        label_8->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        textBoxDefenderBoost = new QLineEdit(Pl2);
        textBoxDefenderBoost->setObjectName(QStringLiteral("textBoxDefenderBoost"));
        textBoxDefenderBoost->setGeometry(QRect(110, 340, 91, 21));

        retranslateUi(Pl2);

        QMetaObject::connectSlotsByName(Pl2);
    } // setupUi

    void retranslateUi(QWidget *Pl2)
    {
        Pl2->setWindowTitle(QApplication::translate("Pl2", "Form", 0));
        label->setText(QApplication::translate("Pl2", "       \320\230\320\223\320\240\320\236\320\232 2", 0));
        label_6->setText(QApplication::translate("Pl2", "a", 0));
        label_7->setText(QApplication::translate("Pl2", "Vk0", 0));
        label_5->setText(QApplication::translate("Pl2", "yi", 0));
        label_8->setText(QApplication::translate("Pl2", "Mk", 0));
    } // retranslateUi

};

namespace Ui {
    class Pl2: public Ui_Pl2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PL2_H
