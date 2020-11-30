#include "widget.h"
#include "ui_widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QStringList titulos;
    setWindowTitle("Productos");
    ui->tableWidget->setColumnCount(2);
    titulos << "Nombre" << "Cantidad";
    ui->tableWidget->setHorizontalHeaderLabels(titulos);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_adicionar_clicked()
{
    QString nombre;
    int cantidad , fila;
    nombre = ui->nombre->text();
    //QTableWidgetItem n =QWidgetSet(nombre);
    cantidad = ui->cantidad->value();
    if(nombre.isEmpty() || ui->cantidad->value()==0)
        return;
    //ui->listWidget->addItem(nombre);
    //ui->listWidget->addItem(cantidad);
   ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    fila = ui->tableWidget->rowCount() - 1;
    ui->tableWidget->setItem(fila,NOMBRE, new QTableWidgetItem(nombre));
    ui->tableWidget->setItem(fila,CANTIDAD, new QTableWidgetItem(QString::number(cantidad)));
    ui->nombre->clear();
    ui->cantidad->clear();
    /*ui->tableWidget->setItem(r,c,nombre);
    ui->tableWidget->setItem(r,c,cantidad);*/
}

void Widget::on_eliminar_clicked()
{
    //delete ui->listWidget->currentItem();
    ui->tableWidget->removeRow(ui->tableWidget->currentRow());
}
