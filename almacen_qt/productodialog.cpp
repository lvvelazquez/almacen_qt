#include "productodialog.h"
#include "ui_productodialog.h"

ProductoDialog::ProductoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProductoDialog)
{
    ui->setupUi(this);
}

ProductoDialog::~ProductoDialog()
{
    delete ui;
}
