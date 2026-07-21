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
        QFile archivo("carrito.txt");
        if (archivo.open(QIODevice::Append | QIODevice::Text)) {
            QTextStream salida(&archivo);
            salida << textoParaLista << "\n";
            archivo.close();
        }
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
    QFile archivo("carrito.txt");
    if (archivo.open(QIODevice::WriteOnly | QIODevice::Text)) {
        archivo.close();
    }
}

void dispositivos_electronicos::on_btnCrear_clicked()
{
    QString id = ui->txtId->text();
    QString categoria = ui->txtCategoria->text();
    QString modelo = ui->txtModelo->text();
    QString precio = ui->txtPrecio->text();


    if (id.isEmpty() or categoria.isEmpty() or modelo.isEmpty() or precio.isEmpty()) {
        QMessageBox::warning(this, "Aviso", "Por favor llena todos los campos.");
        return;
    }

    for (int i = 0; i < ui->tablaDisponibles->topLevelItemCount(); ++i) {
        QTreeWidgetItem *item = ui->tablaDisponibles->topLevelItem(i);

        if (id == item->text(0)) {
            QMessageBox::warning(this, "Error", "El ID ya está registrado.");
            return;
        }
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
    QFile archivo("inventario.txt");

    if (archivo.size() == 0) {
        archivo.open(QIODevice::WriteOnly | QIODevice::Text);
        QTextStream salida(&archivo);

        for (int i = 0; i < ui->tablaDisponibles->topLevelItemCount(); ++i) {
            QTreeWidgetItem *item = ui->tablaDisponibles->topLevelItem(i);
            salida << item->text(0) << "," << item->text(1) << "," << item->text(2) << "," << item->text(3) << "\n";
        }
        archivo.close();
        return;
    }

    ui->tablaDisponibles->clear();

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
    QListWidgetItem *itemSeleccionado = ui->listWidget->currentItem();

    if (!itemSeleccionado) {
        QMessageBox::warning(this, "Aviso", "Por favor selecciona un producto del carrito para eliminar.");
        return;
    }

    // Eliminar de la lista visual
    delete itemSeleccionado;

    // Reescribir el archivo carrito.txt con los elementos que quedan en el listWidget
    QFile archivo("carrito.txt");
    if (archivo.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream salida(&archivo);

        for (int i = 0; i < ui->listWidget->count(); ++i) {
            salida << ui->listWidget->item(i)->text() << "\n";
        }

        archivo.close();
        QMessageBox::information(this, "Éxito", "Producto eliminado del carrito correctamente.");
    } else {
        QMessageBox::warning(this, "Error", "No se pudo actualizar el archivo de carrito.");
    }
}

void dispositivos_electronicos::on_tablaDisponibles_itemClicked(QTreeWidgetItem *, int)
{
    ui->listWidget->clearSelection();
}


void dispositivos_electronicos::on_btnActualizar_clicked()
{
    QString id = ui->txtId->text();
    QString categoria = ui->txtCategoria->text();
    QString modelo = ui->txtModelo->text();
    QString precio = ui->txtPrecio->text();


    if (id.isEmpty() or categoria.isEmpty() or modelo.isEmpty() or precio.isEmpty()) {
        QMessageBox::warning(this, "Aviso", "Por favor llena todos los campos.");
        return;
    }

    if (id=="" or id==" " or categoria=="" or categoria==" " or precio=="" or precio==" ") {
        QMessageBox::warning(this, "Error", "No se permite espacios en blanco");
        return;
    }

    bool encontrado = false;
    for (int i = 0; i < ui->tablaDisponibles->topLevelItemCount(); ++i) {
        QTreeWidgetItem *item = ui->tablaDisponibles->topLevelItem(i);

        if (id == item->text(0)) {
            // 1. Se actualiza en la tabla visual
            item->setText(1, categoria);
            item->setText(2, modelo);
            item->setText(3, precio);
            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        QFile archivo("inventario.txt");
        if (archivo.open(QIODevice::WriteOnly | QIODevice::Truncate | QIODevice::Text)) {
            QTextStream salida(&archivo);

            for (int i = 0; i < ui->tablaDisponibles->topLevelItemCount(); ++i) {
                QTreeWidgetItem *it = ui->tablaDisponibles->topLevelItem(i);
                salida << it->text(0) << ","
                       << it->text(1) << ","
                       << it->text(2) << ","
                       << it->text(3) << "\n";
            }
            archivo.close();
            QMessageBox::information(this, "Éxito", "Producto actualizado correctamente.");
        } else {
            QMessageBox::warning(this, "Error", "No se pudo abrir el archivo para actualizar.");
        }
    } else {
        QFile archivo("inventario.txt");
        if (archivo.open(QIODevice::Append | QIODevice::Text)) {
            QTextStream salida(&archivo);
            salida << id << "," << categoria << "," << modelo << "," << precio << "\n";
            archivo.close();

            QMessageBox::information(this, "Éxito", "Producto registrado correctamente.");

            cargarInventario();
        } else {
            QMessageBox::warning(this, "Error", "No se pudo abrir el archivo de texto.");
            return;
        }
    }

    ui->txtId->clear();
    ui->txtCategoria->clear();
    ui->txtModelo->clear();
    ui->txtPrecio->clear();
}

