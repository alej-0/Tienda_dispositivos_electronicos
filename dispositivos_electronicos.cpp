#include "dispositivos_electronicos.h"
#include "./ui_dispositivos_electronicos.h"

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

}

