#ifndef DISPOSITIVOS_ELECTRONICOS_H
#define DISPOSITIVOS_ELECTRONICOS_H
#include <QTreeWidgetItem>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class dispositivos_electronicos;
}
QT_END_NAMESPACE

class dispositivos_electronicos : public QMainWindow
{
    Q_OBJECT

public:
    explicit dispositivos_electronicos(QWidget *parent = nullptr);
    ~dispositivos_electronicos() override;

private slots:
    void on_btnAgregar_clicked();

    void on_btncalcular_clicked();

    void on_btnpagar_clicked();

    void on_btnCrear_clicked();

    void on_btnEliminar_clicked();

    void on_tablaDisponibles_itemClicked(QTreeWidgetItem *item, int column);

private:
    Ui::dispositivos_electronicos *ui;
    void cargarInventario();
};
#endif // DISPOSITIVOS_ELECTRONICOS_H
