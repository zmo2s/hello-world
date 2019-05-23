/********************************************************************************
** Form generated from reading UI file 'fencalculatrice.ui'
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
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_fencalculatrice
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *fencalculatrice)
    {
        if (fencalculatrice->objectName().isEmpty())
            fencalculatrice->setObjectName(QStringLiteral("fencalculatrice"));
        fencalculatrice->resize(400, 300);
        buttonBox = new QDialogButtonBox(fencalculatrice);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(fencalculatrice);
        QObject::connect(buttonBox, SIGNAL(accepted()), fencalculatrice, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), fencalculatrice, SLOT(reject()));

        QMetaObject::connectSlotsByName(fencalculatrice);
    } // setupUi

    void retranslateUi(QDialog *fencalculatrice)
    {
        fencalculatrice->setWindowTitle(QApplication::translate("fencalculatrice", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fencalculatrice: public Ui_fencalculatrice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENCALCULATRICE_H
