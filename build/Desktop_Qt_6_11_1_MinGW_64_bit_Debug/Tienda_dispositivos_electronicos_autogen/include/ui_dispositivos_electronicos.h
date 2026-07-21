/********************************************************************************
** Form generated from reading UI file 'dispositivos_electronicos.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPOSITIVOS_ELECTRONICOS_H
#define UI_DISPOSITIVOS_ELECTRONICOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dispositivos_electronicos
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *line;
    QTabWidget *CRUD;
    QWidget *Articulos;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTreeWidget *tablaDisponibles;
    QListWidget *listWidget;
    QPushButton *btnAgregar;
    QPushButton *btnEliminar;
    QWidget *tab_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *txtId;
    QLineEdit *txtCategoria;
    QLineEdit *txtModelo;
    QLineEdit *txtPrecio;
    QPushButton *btnCrear;
    QLabel *label_8;
    QWidget *tab_4;
    QPushButton *btncalcular;
    QLabel *lbltotal;
    QPushButton *btnpagar;
    QLabel *label_9;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *dispositivos_electronicos)
    {
        if (dispositivos_electronicos->objectName().isEmpty())
            dispositivos_electronicos->setObjectName("dispositivos_electronicos");
        dispositivos_electronicos->setEnabled(true);
        dispositivos_electronicos->resize(786, 429);
        centralwidget = new QWidget(dispositivos_electronicos);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line, 4, 0, 2, 1);

        CRUD = new QTabWidget(centralwidget);
        CRUD->setObjectName("CRUD");
        Articulos = new QWidget();
        Articulos->setObjectName("Articulos");
        gridLayout_2 = new QGridLayout(Articulos);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(Articulos);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label->setFont(font);

        gridLayout_2->addWidget(label, 0, 0, 1, 4);

        label_2 = new QLabel(Articulos);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 1, 0, 1, 2);

        label_3 = new QLabel(Articulos);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 1, 3, 1, 1);

        tablaDisponibles = new QTreeWidget(Articulos);
        new QTreeWidgetItem(tablaDisponibles);
        new QTreeWidgetItem(tablaDisponibles);
        new QTreeWidgetItem(tablaDisponibles);
        new QTreeWidgetItem(tablaDisponibles);
        new QTreeWidgetItem(tablaDisponibles);
        new QTreeWidgetItem(tablaDisponibles);
        new QTreeWidgetItem(tablaDisponibles);
        new QTreeWidgetItem(tablaDisponibles);
        new QTreeWidgetItem(tablaDisponibles);
        new QTreeWidgetItem(tablaDisponibles);
        new QTreeWidgetItem(tablaDisponibles);
        new QTreeWidgetItem(tablaDisponibles);
        new QTreeWidgetItem(tablaDisponibles);
        new QTreeWidgetItem(tablaDisponibles);
        new QTreeWidgetItem(tablaDisponibles);
        tablaDisponibles->setObjectName("tablaDisponibles");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tablaDisponibles->sizePolicy().hasHeightForWidth());
        tablaDisponibles->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(tablaDisponibles, 2, 0, 1, 2);

        listWidget = new QListWidget(Articulos);
        listWidget->setObjectName("listWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(listWidget, 2, 2, 1, 2);

        btnAgregar = new QPushButton(Articulos);
        btnAgregar->setObjectName("btnAgregar");

        gridLayout_2->addWidget(btnAgregar, 4, 2, 1, 1);

        btnEliminar = new QPushButton(Articulos);
        btnEliminar->setObjectName("btnEliminar");

        gridLayout_2->addWidget(btnEliminar, 4, 1, 1, 1);

        CRUD->addTab(Articulos, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        label_4 = new QLabel(tab_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(180, 80, 81, 16));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(190, 120, 61, 16));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(200, 180, 61, 16));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(200, 230, 61, 16));
        txtId = new QLineEdit(tab_3);
        txtId->setObjectName("txtId");
        txtId->setGeometry(QRect(310, 80, 113, 22));
        txtCategoria = new QLineEdit(tab_3);
        txtCategoria->setObjectName("txtCategoria");
        txtCategoria->setGeometry(QRect(310, 120, 113, 22));
        txtModelo = new QLineEdit(tab_3);
        txtModelo->setObjectName("txtModelo");
        txtModelo->setGeometry(QRect(310, 170, 113, 22));
        txtPrecio = new QLineEdit(tab_3);
        txtPrecio->setObjectName("txtPrecio");
        txtPrecio->setGeometry(QRect(310, 220, 113, 22));
        btnCrear = new QPushButton(tab_3);
        btnCrear->setObjectName("btnCrear");
        btnCrear->setGeometry(QRect(300, 280, 51, 21));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(0, 20, 768, 28));
        label_8->setFont(font);
        CRUD->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        btncalcular = new QPushButton(tab_4);
        btncalcular->setObjectName("btncalcular");
        btncalcular->setGeometry(QRect(180, 70, 91, 24));
        lbltotal = new QLabel(tab_4);
        lbltotal->setObjectName("lbltotal");
        lbltotal->setGeometry(QRect(340, 70, 101, 21));
        btnpagar = new QPushButton(tab_4);
        btnpagar->setObjectName("btnpagar");
        btnpagar->setGeometry(QRect(250, 140, 75, 24));
        label_9 = new QLabel(tab_4);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(0, 20, 768, 28));
        label_9->setFont(font);
        CRUD->addTab(tab_4, QString());

        gridLayout->addWidget(CRUD, 6, 0, 1, 1);

        dispositivos_electronicos->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(dispositivos_electronicos);
        statusbar->setObjectName("statusbar");
        dispositivos_electronicos->setStatusBar(statusbar);

        retranslateUi(dispositivos_electronicos);

        CRUD->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(dispositivos_electronicos);
    } // setupUi

    void retranslateUi(QMainWindow *dispositivos_electronicos)
    {
        dispositivos_electronicos->setWindowTitle(QCoreApplication::translate("dispositivos_electronicos", "dispositivos_electronicos", nullptr));
        label->setText(QCoreApplication::translate("dispositivos_electronicos", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700; color:#ff0000;\">Tienda de Dispositivos Electr\303\263nicos</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("dispositivos_electronicos", "Dispositivos Disponibles", nullptr));
        label_3->setText(QCoreApplication::translate("dispositivos_electronicos", "Dispositivos Seleccionados", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = tablaDisponibles->headerItem();
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("dispositivos_electronicos", "Precio", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("dispositivos_electronicos", "Modelo", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("dispositivos_electronicos", "Categoria", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("dispositivos_electronicos", "ID", nullptr));

        const bool __sortingEnabled = tablaDisponibles->isSortingEnabled();
        tablaDisponibles->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = tablaDisponibles->topLevelItem(0);
        ___qtreewidgetitem1->setText(3, QCoreApplication::translate("dispositivos_electronicos", "5", nullptr));
        ___qtreewidgetitem1->setText(2, QCoreApplication::translate("dispositivos_electronicos", "Cable USB-C Carga R\303\241pida", nullptr));
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("dispositivos_electronicos", "Accesorios", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("dispositivos_electronicos", "1", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = tablaDisponibles->topLevelItem(1);
        ___qtreewidgetitem2->setText(3, QCoreApplication::translate("dispositivos_electronicos", "25", nullptr));
        ___qtreewidgetitem2->setText(2, QCoreApplication::translate("dispositivos_electronicos", "Aud\303\255fonos Bluetooth In-Ear", nullptr));
        ___qtreewidgetitem2->setText(1, QCoreApplication::translate("dispositivos_electronicos", "Audio", nullptr));
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("dispositivos_electronicos", "2", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = tablaDisponibles->topLevelItem(2);
        ___qtreewidgetitem3->setText(3, QCoreApplication::translate("dispositivos_electronicos", "12", nullptr));
        ___qtreewidgetitem3->setText(2, QCoreApplication::translate("dispositivos_electronicos", "Memoria USB 64GB Kingston", nullptr));
        ___qtreewidgetitem3->setText(1, QCoreApplication::translate("dispositivos_electronicos", "Almacenamiento", nullptr));
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("dispositivos_electronicos", "3", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = tablaDisponibles->topLevelItem(3);
        ___qtreewidgetitem4->setText(3, QCoreApplication::translate("dispositivos_electronicos", "15", nullptr));
        ___qtreewidgetitem4->setText(2, QCoreApplication::translate("dispositivos_electronicos", "Mouse Inal\303\241mbrico Logitech", nullptr));
        ___qtreewidgetitem4->setText(1, QCoreApplication::translate("dispositivos_electronicos", "Perif\303\251ricos", nullptr));
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("dispositivos_electronicos", "4", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = tablaDisponibles->topLevelItem(4);
        ___qtreewidgetitem5->setText(3, QCoreApplication::translate("dispositivos_electronicos", "45", nullptr));
        ___qtreewidgetitem5->setText(2, QCoreApplication::translate("dispositivos_electronicos", "Teclado Mec\303\241nico Redragon", nullptr));
        ___qtreewidgetitem5->setText(1, QCoreApplication::translate("dispositivos_electronicos", "Perif\303\251ricos", nullptr));
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("dispositivos_electronicos", "5", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = tablaDisponibles->topLevelItem(5);
        ___qtreewidgetitem6->setText(3, QCoreApplication::translate("dispositivos_electronicos", "20", nullptr));
        ___qtreewidgetitem6->setText(2, QCoreApplication::translate("dispositivos_electronicos", "Cargador de Pared 67W", nullptr));
        ___qtreewidgetitem6->setText(1, QCoreApplication::translate("dispositivos_electronicos", "Accesorios", nullptr));
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("dispositivos_electronicos", "6", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = tablaDisponibles->topLevelItem(6);
        ___qtreewidgetitem7->setText(3, QCoreApplication::translate("dispositivos_electronicos", "140", nullptr));
        ___qtreewidgetitem7->setText(2, QCoreApplication::translate("dispositivos_electronicos", "Monitor Samsung 24\" FHD", nullptr));
        ___qtreewidgetitem7->setText(1, QCoreApplication::translate("dispositivos_electronicos", "Pantallas", nullptr));
        ___qtreewidgetitem7->setText(0, QCoreApplication::translate("dispositivos_electronicos", "7", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = tablaDisponibles->topLevelItem(7);
        ___qtreewidgetitem8->setText(3, QCoreApplication::translate("dispositivos_electronicos", "450", nullptr));
        ___qtreewidgetitem8->setText(2, QCoreApplication::translate("dispositivos_electronicos", "Smartphone Poco F4 GT", nullptr));
        ___qtreewidgetitem8->setText(1, QCoreApplication::translate("dispositivos_electronicos", "Telefon\303\255a", nullptr));
        ___qtreewidgetitem8->setText(0, QCoreApplication::translate("dispositivos_electronicos", "8", nullptr));
        QTreeWidgetItem *___qtreewidgetitem9 = tablaDisponibles->topLevelItem(8);
        ___qtreewidgetitem9->setText(3, QCoreApplication::translate("dispositivos_electronicos", "650", nullptr));
        ___qtreewidgetitem9->setText(2, QCoreApplication::translate("dispositivos_electronicos", "Laptop HP con Ryzen 5", nullptr));
        ___qtreewidgetitem9->setText(1, QCoreApplication::translate("dispositivos_electronicos", "Computaci\303\263n", nullptr));
        ___qtreewidgetitem9->setText(0, QCoreApplication::translate("dispositivos_electronicos", "9", nullptr));
        QTreeWidgetItem *___qtreewidgetitem10 = tablaDisponibles->topLevelItem(9);
        ___qtreewidgetitem10->setText(3, QCoreApplication::translate("dispositivos_electronicos", "65", nullptr));
        ___qtreewidgetitem10->setText(2, QCoreApplication::translate("dispositivos_electronicos", "Disco Duro Externo 1TB", nullptr));
        ___qtreewidgetitem10->setText(1, QCoreApplication::translate("dispositivos_electronicos", "Almacenamiento", nullptr));
        ___qtreewidgetitem10->setText(0, QCoreApplication::translate("dispositivos_electronicos", "10", nullptr));
        QTreeWidgetItem *___qtreewidgetitem11 = tablaDisponibles->topLevelItem(10);
        ___qtreewidgetitem11->setText(3, QCoreApplication::translate("dispositivos_electronicos", "40", nullptr));
        ___qtreewidgetitem11->setText(2, QCoreApplication::translate("dispositivos_electronicos", "Parlante Port\303\241til JBL Go 3", nullptr));
        ___qtreewidgetitem11->setText(1, QCoreApplication::translate("dispositivos_electronicos", "Audio", nullptr));
        ___qtreewidgetitem11->setText(0, QCoreApplication::translate("dispositivos_electronicos", "11", nullptr));
        QTreeWidgetItem *___qtreewidgetitem12 = tablaDisponibles->topLevelItem(11);
        ___qtreewidgetitem12->setText(3, QCoreApplication::translate("dispositivos_electronicos", "50", nullptr));
        ___qtreewidgetitem12->setText(2, QCoreApplication::translate("dispositivos_electronicos", "Smartwatch Xiaomi Band 8", nullptr));
        ___qtreewidgetitem12->setText(1, QCoreApplication::translate("dispositivos_electronicos", "Wearables", nullptr));
        ___qtreewidgetitem12->setText(0, QCoreApplication::translate("dispositivos_electronicos", "12", nullptr));
        QTreeWidgetItem *___qtreewidgetitem13 = tablaDisponibles->topLevelItem(12);
        ___qtreewidgetitem13->setText(3, QCoreApplication::translate("dispositivos_electronicos", "25", nullptr));
        ___qtreewidgetitem13->setText(2, QCoreApplication::translate("dispositivos_electronicos", "Bater\303\255a Port\303\241til 10000mAh", nullptr));
        ___qtreewidgetitem13->setText(1, QCoreApplication::translate("dispositivos_electronicos", "Accesorios", nullptr));
        ___qtreewidgetitem13->setText(0, QCoreApplication::translate("dispositivos_electronicos", "13", nullptr));
        QTreeWidgetItem *___qtreewidgetitem14 = tablaDisponibles->topLevelItem(13);
        ___qtreewidgetitem14->setText(3, QCoreApplication::translate("dispositivos_electronicos", "45", nullptr));
        ___qtreewidgetitem14->setText(2, QCoreApplication::translate("dispositivos_electronicos", "Router Wi-Fi TP-Link", nullptr));
        ___qtreewidgetitem14->setText(1, QCoreApplication::translate("dispositivos_electronicos", "Redes", nullptr));
        ___qtreewidgetitem14->setText(0, QCoreApplication::translate("dispositivos_electronicos", "14", nullptr));
        QTreeWidgetItem *___qtreewidgetitem15 = tablaDisponibles->topLevelItem(14);
        ___qtreewidgetitem15->setText(3, QCoreApplication::translate("dispositivos_electronicos", "210", nullptr));
        ___qtreewidgetitem15->setText(2, QCoreApplication::translate("dispositivos_electronicos", "Impresora Multifunci\303\263n Epson", nullptr));
        ___qtreewidgetitem15->setText(1, QCoreApplication::translate("dispositivos_electronicos", "Oficina", nullptr));
        ___qtreewidgetitem15->setText(0, QCoreApplication::translate("dispositivos_electronicos", "15", nullptr));
        tablaDisponibles->setSortingEnabled(__sortingEnabled);

        btnAgregar->setText(QCoreApplication::translate("dispositivos_electronicos", "Agregar", nullptr));
        btnEliminar->setText(QCoreApplication::translate("dispositivos_electronicos", "Eliminar", nullptr));
        CRUD->setTabText(CRUD->indexOf(Articulos), QCoreApplication::translate("dispositivos_electronicos", "Articulos", nullptr));
        label_4->setText(QCoreApplication::translate("dispositivos_electronicos", "ID del Producto", nullptr));
        label_5->setText(QCoreApplication::translate("dispositivos_electronicos", "Categor\303\255a", nullptr));
        label_6->setText(QCoreApplication::translate("dispositivos_electronicos", "Modelo", nullptr));
        label_7->setText(QCoreApplication::translate("dispositivos_electronicos", "Precio", nullptr));
        btnCrear->setText(QCoreApplication::translate("dispositivos_electronicos", "Crear", nullptr));
        label_8->setText(QCoreApplication::translate("dispositivos_electronicos", "<html><head/><body><p align=\"center\"><span style=\" color:#ff0000;\">Agregar Dispositivos Electr\303\263nicos</span></p></body></html>", nullptr));
        CRUD->setTabText(CRUD->indexOf(tab_3), QCoreApplication::translate("dispositivos_electronicos", "Agregar", nullptr));
        btncalcular->setText(QCoreApplication::translate("dispositivos_electronicos", "Calcular  Total", nullptr));
        lbltotal->setText(QCoreApplication::translate("dispositivos_electronicos", "Valor de pago", nullptr));
        btnpagar->setText(QCoreApplication::translate("dispositivos_electronicos", "Pagar", nullptr));
        label_9->setText(QCoreApplication::translate("dispositivos_electronicos", "<html><head/><body><p align=\"center\"><span style=\" color:#ff0000;\">Factura</span></p><p align=\"center\"><br/></p></body></html>", nullptr));
        CRUD->setTabText(CRUD->indexOf(tab_4), QCoreApplication::translate("dispositivos_electronicos", "Pagar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dispositivos_electronicos: public Ui_dispositivos_electronicos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPOSITIVOS_ELECTRONICOS_H
