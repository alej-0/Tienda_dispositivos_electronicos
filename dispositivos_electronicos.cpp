#include "dispositivos_electronicos.h"
#include "./ui_dispositivos_electronicos.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
dispositivos_electronicos::dispositivos_electronicos(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::dispositivos_electronicos)
{
    ui->setupUi(this);
    cargarInventario();
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

void dispositivos_electronicos::on_btnCrear_clicked()
{
    QString id = ui->txtId->text();
    QString categoria = ui->txtCategoria->text();
    QString modelo = ui->txtModelo->text();
    QString precio = ui->txtPrecio->text();


    if (id.isEmpty() || categoria.isEmpty() || modelo.isEmpty() || precio.isEmpty()) {
        QMessageBox::warning(this, "Aviso", "Por favor llena todos los campos.");
        return;
    }


    QFile archivo("inventario.txt");
    if (archivo.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream salida(&archivo);


        salida << id << "," << categoria << "," << modelo << "," << precio << "\n";
        archivo.close();

        QMessageBox::information(this, "Éxito", "Producto guardado en el archivo.");
        cargarInventario();
        ui->txtId->clear();
        ui->txtCategoria->clear();
        ui->txtModelo->clear();
        ui->txtPrecio->clear();
    } else {
        QMessageBox::warning(this, "Error", "No se pudo abrir el archivo de texto.");
    }
}

void dispositivos_electronicos::cargarInventario()
{

    ui->tablaDisponibles->clear();


    QFile archivo("inventario.txt");
    if (archivo.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream entrada(&archivo);

        while (!entrada.atEnd()) {
            QString linea = entrada.readLine();
            QStringList datos = linea.split(",");

            if (datos.size() == 4) {
                QTreeWidgetItem *item = new QTreeWidgetItem(ui->tablaDisponibles);
                item->setText(0, datos[0]);
                item->setText(1, datos[1]);
                item->setText(2, datos[2]);
                item->setText(3, datos[3]);
            }
        }
        archivo.close();
    }
}


void dispositivos_electronicos::on_btnEliminar_clicked()
{
    QString idBuscado = ui->txtIdEliminar->text();

    if (idBuscado.isEmpty()) {
        QMessageBox::warning(this, "Aviso", "Por favor ingresa el ID del producto a eliminar.");
        return;
    }

    QFile archivo("inventario.txt");
    QStringList lineasRestantes;
    bool encontrado = false;

    if (archivo.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream entrada(&archivo);
        while (!entrada.atEnd()) {
            QString linea = entrada.readLine();
            QStringList datos = linea.split(",");

            if (datos.size() > 0 && datos[0] == idBuscado) {
                encontrado = true;
            } else {
                lineasRestantes.append(linea);
            }
        }
        archivo.close();
    }

    if (encontrado) {
        QFile archivoNuevo("inventario.txt");
        if (archivoNuevo.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream salida(&archivoNuevo);
            for (const QString& l : lineasRestantes) {
                salida << l << "\n";
            }
            archivoNuevo.close();
        }

        QMessageBox::information(this, "Éxito", "Producto eliminado correctamente.");

        cargarInventario();
        ui->txtIdEliminar->clear();
    } else {
        QMessageBox::warning(this, "Error", "No se encontró ningún producto con ese ID.");
    }
}
