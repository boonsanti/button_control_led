#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "GPIO/GPIOManager.h"
#include "GPIO/GPIOConst.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnLED1ON_clicked();

    void on_bynLED1OFF_clicked();

    void on_btnLED2ON_clicked();

    void on_btnLED2OFF_clicked();

    void on_btnLED3ON_clicked();

    void on_btnLED3OFF_clicked();

    void on_btnLED4ON_clicked();

    void on_btnLED4OFF_clicked();

private:
    Ui::MainWindow *ui;
    GPIO::GPIOManager* gpio;
    int led1;
    int led2;
    int led3;
    int led4;
};

#endif // MAINWINDOW_H
