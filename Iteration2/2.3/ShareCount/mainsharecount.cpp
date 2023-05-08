#include "mainsharecount.h"
#include "ui_mainsharecount.h"
#include "db.h"
#include "compte.h"
#include <QMessageBox>
#include <QtSql>
#include <QCoreApplication>
#include <QtSql/QSqlDatabase>
#include <iostream>
#include <string>
#include <QDebug>

MainShareCount::MainShareCount(db& base , QWidget *parent)
    : QMainWindow(parent)
    , bdd(base)
    , ui(new Ui::MainShareCount)
{
    ui->setupUi(this);
}

MainShareCount::~MainShareCount()
{
    delete ui;
}

void MainShareCount::cleanInscription(){
    ui->emailInscription->clear();
    ui->mdpInscription->clear();
    ui->cMdpInscription->clear();
}

void MainShareCount::cleanConnexion(){
    ui->emailC->clear();
    ui->mdpC->clear();
}

void MainShareCount::on_InscriptionAcc_clicked(){
    ui->stackedWidget->setCurrentIndex(1);
}

void MainShareCount::on_ConnexionAcc_clicked(){
    ui->stackedWidget->setCurrentIndex(2);
}

void MainShareCount::on_Inscrit_clicked(){
    QString mail = ui->emailInscription->toPlainText();
    QString mdp = ui->mdpInscription->toPlainText();
    QString cmdp = ui->cMdpInscription->toPlainText();
    cleanInscription();
    if(mail.length()!=0 && mdp.length() != 0 && mail.length()!=0)
    {
        if(mdp.compare(cmdp)==0){
            QSqlQuery query(db::dataBase);

            query.exec(("SELECT * FROM compte WHERE mail=\""+mail+"\";")); // on recherche dans la bdd dans compte
            query.first();

            if(query.value(0) == mail){
                QMessageBox::information(this, "Email déja utilisée", "Veuillez en saisir une autre") ;
            }
            else{
                this->bdd.creerCompte(mail.toStdString(), mdp.toStdString());
                ui->stackedWidget->setCurrentIndex(0);
            }
        }else{
            QMessageBox::information(this,"Mot De passe non confirmé "," veuillez le réécrire");
        }
    }else{
        QMessageBox::information(this, "Champ vide ","Veuillez remplir tous les champs du formulaire");
    }
}

void MainShareCount::on_Connexion_clicked(){
    QString mail = ui->emailC->toPlainText();
    QString mdp = ui->mdpC->toPlainText();
    cleanConnexion();
    if(mail.length()!=0 && mdp.length() != 0){
        this->bdd.connexion(mail.toStdString(), mdp.toStdString());

        QSqlQuery query(db::dataBase);

        query.exec(("SELECT * FROM compte WHERE mail=\""+mail+"\";")); // on recherche dans la bdd dans compte
        query.first();
        if (query.value(1) == mdp && query.value(0) == mail){ // permet de se connecter si l'email et le mdp est correcte
            query.exec("SELECT argent FROM compte WHERE mail=\""+mail+"\";");
            query.first();
            compte.setArgent(query.value(3).toFloat());
            ui->stackedWidget->setCurrentIndex(3);
        }else{
            QMessageBox::information(this, "Mauvaise combinaison", "Email ou mot de passe incorrect") ;
        }
    }else{
        QMessageBox::information(this, "Formulaire Incomplet","Veuillez remplir le formulaire de connexion");
    }

}

void MainShareCount::on_Cagnotte_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainShareCount::on_returnInsc_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainShareCount::on_returnCo_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainShareCount::on_cleanIns_clicked()
{
    cleanInscription();
}


void MainShareCount::on_cleanCo_clicked()
{
    cleanConnexion();
}


void MainShareCount::on_deconnexion_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainShareCount::on_boutonCagnotte_clicked()
{
    QSqlQuery query(db::dataBase);
    query.exec(("SELECT SUM(argent) FROM cagnotte;"));
    query.first();
    float montantActuel = query.value(0).toFloat();
    QString montant = ui->montant->toPlainText();
    cagnotte.augmenterCagnotte(compte, montant.toDouble()+(double)montantActuel);
    montantActuel = query.value(0).toFloat();
    ui->label_11->setText(montantActuel+montant);
}

void MainShareCount::on_createCagnotte_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainShareCount::on_CagnotteReturn_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

