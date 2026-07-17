#include "dispositivos_electronicos.h"
#include "./ui_dispositivos_electronicos.h"
#include <QMessageBox>
dispositivos_electronicos::dispositivos_electronicos(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::dispositivos_electronicos)
{
    ui->setupUi(this);
}

dispositivos_electronicos::~dispositivos_electronicos()
{
    delete ui;
}

void dispositivos_electronicos::on_btnAgregar_clicked()
{
    QTreeWidgetItem *itemSeleccionado = ui->tablaDisponibles->currentItem();

    if (itemSeleccionado) {
        QString id = itemSeleccionado->text(0);
        QString categoria = itemSeleccionado->text(1);
        QString modelo = itemSeleccionado->text(2);
        QString precio = itemSeleccionado->text(3);

        QString textoParaLista = id + " | " + categoria + " - " + modelo + " | $" + precio;

        ui->listWidget->addItem(textoParaLista);
    } else {
        QMessageBox::warning(this, "Advertencia", "Por favor, selecciona un dispositivo de la lista primero.");
    }
}

void dispositivos_electronicos::on_btncalcular_clicked()
{
    double total = 0.0;

    for(int i = 0; i < ui->listWidget->count(); ++i) {
        QString textoItem = ui->listWidget->item(i)->text();
        QStringList partes = textoItem.split("$");

        if(partes.size() > 1) {
            double precio = partes.last().toDouble();
            total += precio;
        }
    }

    ui->lbltotal->setText("Total a pagar: $" + QString::number(total, 'f', 2));
}


void dispositivos_electronicos::on_btnpagar_clicked()
{
    if(ui->listWidget->count() == 0) {
        QMessageBox::warning(this, "Aviso", "No hay artículos para pagar.");
        return;
    }

    QString recibo = "Detalle de su compra:\n\n";

    for(int i = 0; i < ui->listWidget->count(); ++i) {
        recibo += ui->listWidget->item(i)->text() + "\n";
    }

    recibo += "\n" + ui->lbltotal->text();

    QMessageBox::information(this, "Compra Exitosa", recibo);

    ui->listWidget->clear();
    ui->lbltotal->setText("Total a pagar: $0.00");
}
