#ifndef PRODUCTODIALOG_H
#define PRODUCTODIALOG_H

#include <QDialog>

namespace Ui {
class ProductoDialog;
}

class ProductoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ProductoDialog(QWidget *parent = nullptr);
    ~ProductoDialog();

private:
    Ui::ProductoDialog *ui;
};

#endif // PRODUCTODIALOG_H
