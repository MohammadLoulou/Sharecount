#include "mainsharecount.h"
#include "ui_mainsharecount.h"

MainShareCount::MainShareCount(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainShareCount)
{
    ui->setupUi(this);
}

MainShareCount::~MainShareCount()
{
    delete ui;
}

void MainShareCount::on_confirmationInscription_accepted()
{
    QString mail = ui->mailInscription->text();
    QString password = ui->passwordInscription->text();
    QString cpassword = ui->cPasswordInscription->text();
    on_confirmationInscription_rejected();
}


void MainShareCount::on_confirmationInscription_rejected()
{
        ui->mailInscription->clear();
        ui->passwordInscription->clear();
        ui->cPasswordInscription->clear();
}


void MainShareCount::on_confirmationConnexion_accepted()
{
    QString mail = ui->mailConnexion->text();
    QString password = ui->mailConnexion->text();
    on_confirmationConnexion_rejected();
}


void MainShareCount::on_confirmationConnexion_rejected()
{

   ui->passwordConnexion->clear();
   ui->mailConnexion->clear();
}
