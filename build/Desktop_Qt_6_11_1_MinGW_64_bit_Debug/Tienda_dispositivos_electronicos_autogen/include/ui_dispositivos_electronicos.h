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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dispositivos_electronicos
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QTreeWidget *treeWidget;
    QMenuBar *menubar;
    QMenu *menuAplicacion_CRUD;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *dispositivos_electronicos)
    {
        if (dispositivos_electronicos->objectName().isEmpty())
            dispositivos_electronicos->setObjectName("dispositivos_electronicos");
        dispositivos_electronicos->setEnabled(false);
        dispositivos_electronicos->resize(703, 315);
        centralwidget = new QWidget(dispositivos_electronicos);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 10, 331, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 70, 121, 16));
        treeWidget = new QTreeWidget(centralwidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName("treeWidget");
        treeWidget->setGeometry(QRect(40, 100, 301, 131));
        dispositivos_electronicos->setCentralWidget(centralwidget);
        menubar = new QMenuBar(dispositivos_electronicos);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 703, 20));
        menuAplicacion_CRUD = new QMenu(menubar);
        menuAplicacion_CRUD->setObjectName("menuAplicacion_CRUD");
        dispositivos_electronicos->setMenuBar(menubar);
        statusbar = new QStatusBar(dispositivos_electronicos);
        statusbar->setObjectName("statusbar");
        dispositivos_electronicos->setStatusBar(statusbar);

        menubar->addAction(menuAplicacion_CRUD->menuAction());

        retranslateUi(dispositivos_electronicos);

        QMetaObject::connectSlotsByName(dispositivos_electronicos);
    } // setupUi

    void retranslateUi(QMainWindow *dispositivos_electronicos)
    {
        dispositivos_electronicos->setWindowTitle(QCoreApplication::translate("dispositivos_electronicos", "dispositivos_electronicos", nullptr));
        label->setText(QCoreApplication::translate("dispositivos_electronicos", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700; color:#ff0000;\">Tienda de Dispositivos Electr\303\263nicos</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("dispositivos_electronicos", "Dispositivos Disponibles", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("dispositivos_electronicos", "Precio", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("dispositivos_electronicos", "Nombre", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("dispositivos_electronicos", "ID", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(2, QCoreApplication::translate("dispositivos_electronicos", "7.50", nullptr));
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("dispositivos_electronicos", "Audifonos", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("dispositivos_electronicos", "1", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(2, QCoreApplication::translate("dispositivos_electronicos", "5", nullptr));
        ___qtreewidgetitem2->setText(1, QCoreApplication::translate("dispositivos_electronicos", "Cargador ", nullptr));
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("dispositivos_electronicos", "2", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(2, QCoreApplication::translate("dispositivos_electronicos", "8.50", nullptr));
        ___qtreewidgetitem3->setText(1, QCoreApplication::translate("dispositivos_electronicos", "USB 32GB", nullptr));
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("dispositivos_electronicos", "3", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem4->setText(2, QCoreApplication::translate("dispositivos_electronicos", "50", nullptr));
        ___qtreewidgetitem4->setText(1, QCoreApplication::translate("dispositivos_electronicos", "Monitor", nullptr));
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("dispositivos_electronicos", "4", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(4);
        ___qtreewidgetitem5->setText(2, QCoreApplication::translate("dispositivos_electronicos", "500", nullptr));
        ___qtreewidgetitem5->setText(1, QCoreApplication::translate("dispositivos_electronicos", "Laptop", nullptr));
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("dispositivos_electronicos", "5", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidget->topLevelItem(5);
        ___qtreewidgetitem6->setText(2, QCoreApplication::translate("dispositivos_electronicos", "12.75", nullptr));
        ___qtreewidgetitem6->setText(1, QCoreApplication::translate("dispositivos_electronicos", "Mouse", nullptr));
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("dispositivos_electronicos", "6", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

        menuAplicacion_CRUD->setTitle(QCoreApplication::translate("dispositivos_electronicos", "Aplicacion CRUD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dispositivos_electronicos: public Ui_dispositivos_electronicos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPOSITIVOS_ELECTRONICOS_H
