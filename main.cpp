#include "dispositivos_electronicos.h"
#include <QFile>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile archivo("inventario.txt");
    if (!archivo.exists()) {
        archivo.open(QIODevice::WriteOnly | QIODevice::Text);
        archivo.close();
    }
    dispositivos_electronicos w;
    w.show();
    return QApplication::exec();
}
