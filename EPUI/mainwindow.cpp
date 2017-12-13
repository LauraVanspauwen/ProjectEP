#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qtimer.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //QTimer::singleShot(0,this,&MainWindow::startThisShit);
    ui->ErrorLabel->hide();
    ui->Inlogwidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*void MainWindow::startThisShit()
{
    MainWindow::on_Inloggen_clicked();
}
*/
void MainWindow::on_Inloggen_clicked()
{

    if((ui->Admin->text() == "Admin") && (ui->Wachtwoord->text() == "Admin"))
    {
        ui->Inlogwidget->setCurrentIndex(1);
    }
    if ((ui->Admin->text() != "Admin") && (ui->Wachtwoord->text() != "Admin"))
    {
        ui->Inlogwidget->setCurrentIndex(0);
        ui->ErrorLabel->show();
    }
}

void MainWindow::on_Uitloggen_clicked()
{
    ui->Inlogwidget->setCurrentIndex(0);
}
