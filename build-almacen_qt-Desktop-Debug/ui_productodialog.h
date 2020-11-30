/********************************************************************************
** Form generated from reading UI file 'productodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTODIALOG_H
#define UI_PRODUCTODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_ProductoDialog
{
public:

    void setupUi(QDialog *ProductoDialog)
    {
        if (ProductoDialog->objectName().isEmpty())
            ProductoDialog->setObjectName(QString::fromUtf8("ProductoDialog"));
        ProductoDialog->resize(400, 300);

        retranslateUi(ProductoDialog);

        QMetaObject::connectSlotsByName(ProductoDialog);
    } // setupUi

    void retranslateUi(QDialog *ProductoDialog)
    {
        ProductoDialog->setWindowTitle(QApplication::translate("ProductoDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductoDialog: public Ui_ProductoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTODIALOG_H
