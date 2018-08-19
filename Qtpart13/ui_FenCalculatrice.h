/********************************************************************************
** Form generated from reading UI file 'FenCalculatrice.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENCALCULATRICE_H
#define UI_FENCALCULATRICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_FenCalculatrice
{
public:
    QPushButton *boutonEgal;
    QSpinBox *nombre2;
    QSpinBox *nombre1;
    QComboBox *operation;
    QLabel *resultat;

    void setupUi(QDialog *FenCalculatrice)
    {
        if (FenCalculatrice->objectName().isEmpty())
            FenCalculatrice->setObjectName(QStringLiteral("FenCalculatrice"));
        FenCalculatrice->resize(400, 300);
        boutonEgal = new QPushButton(FenCalculatrice);
        boutonEgal->setObjectName(QStringLiteral("boutonEgal"));
        boutonEgal->setGeometry(QRect(200, 60, 80, 25));
        nombre2 = new QSpinBox(FenCalculatrice);
        nombre2->setObjectName(QStringLiteral("nombre2"));
        nombre2->setGeometry(QRect(20, 60, 45, 26));
        nombre1 = new QSpinBox(FenCalculatrice);
        nombre1->setObjectName(QStringLiteral("nombre1"));
        nombre1->setGeometry(QRect(150, 60, 45, 26));
        operation = new QComboBox(FenCalculatrice);
        operation->setObjectName(QStringLiteral("operation"));
        operation->setGeometry(QRect(90, 60, 41, 25));
        resultat = new QLabel(FenCalculatrice);
        resultat->setObjectName(QStringLiteral("resultat"));
        resultat->setGeometry(QRect(300, 60, 54, 17));

        retranslateUi(FenCalculatrice);

        QMetaObject::connectSlotsByName(FenCalculatrice);
    } // setupUi

    void retranslateUi(QDialog *FenCalculatrice)
    {
        FenCalculatrice->setWindowTitle(QApplication::translate("FenCalculatrice", "Dialog", Q_NULLPTR));
        boutonEgal->setText(QApplication::translate("FenCalculatrice", "=", Q_NULLPTR));
        operation->clear();
        operation->insertItems(0, QStringList()
         << QApplication::translate("FenCalculatrice", "+", Q_NULLPTR)
        );
        resultat->setText(QApplication::translate("FenCalculatrice", "resultat", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FenCalculatrice: public Ui_FenCalculatrice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENCALCULATRICE_H
