#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    gpio = GPIO::GPIOManager::getInstance();

    led1 = GPIO::GPIOConst::getInstance()->getGpioByName("TIMER4"); //P2_A(7)
    gpio->exportPin(led1);
    gpio->setDirection(led1, GPIO::OUTPUT);
    gpio->setValue(led1, GPIO::LOW);

    led2 = GPIO::GPIOConst::getInstance()->getGpioByName("TIMER5"); //P2_A(9)
    gpio->exportPin(led2);
    gpio->setDirection(led2, GPIO::OUTPUT);
    gpio->setValue(led2, GPIO::LOW);

    led3 = GPIO::GPIOConst::getInstance()->getGpioByName("TIMER6"); //P2_A(8)
    gpio->exportPin(led3);
    gpio->setDirection(led3, GPIO::OUTPUT);
    gpio->setValue(led3, GPIO::LOW);

    led4 = GPIO::GPIOConst::getInstance()->getGpioByName("TIMER7"); //P2_A(10)
    gpio->exportPin(led4);
    gpio->setDirection(led4, GPIO::OUTPUT);
    gpio->setValue(led4, GPIO::LOW);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnLED1ON_clicked()
{
    gpio->setValue(led1, GPIO::HIGH); //Turn on led1
}

void MainWindow::on_bynLED1OFF_clicked()
{
    gpio->setValue(led1, GPIO::LOW); //Turn off led1
}

void MainWindow::on_btnLED2ON_clicked()
{
    gpio->setValue(led2, GPIO::HIGH); //Turn on led2
}

void MainWindow::on_btnLED2OFF_clicked()
{
    gpio->setValue(led2, GPIO::LOW); //Turn off led2
}

void MainWindow::on_btnLED3ON_clicked()
{
    gpio->setValue(led3, GPIO::HIGH); //Turn on led3
}

void MainWindow::on_btnLED3OFF_clicked()
{
    gpio->setValue(led3, GPIO::LOW); //Turn off led3
}

void MainWindow::on_btnLED4ON_clicked()
{
    gpio->setValue(led4, GPIO::HIGH); //Turn on lef4
}

void MainWindow::on_btnLED4OFF_clicked()
{
    gpio->setValue(led4, GPIO::LOW); //Turn off led4
}
