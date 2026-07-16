#include "dispositivos_electronicos.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    dispositivos_electronicos w;
    w.show();
    return QApplication::exec();
}
