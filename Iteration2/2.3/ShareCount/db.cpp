#include "db.h"
#include <QtSql>
#include <QCoreApplication>
#include <QtSql/QSqlDatabase>
#include <iostream>
#include <string>
#include <QDebug>


QSqlDatabase db::ConnexionDB()
{
    db::dataBase = QSqlDatabase::addDatabase("QSQLITE");
    db::dataBase.setHostName("localhost");
    db::dataBase.setDatabaseName("mydb.db");

    if(!db::dataBase.open())
         qDebug() << "Erreur : ouverture bdd " << db::dataBase.lastError();
    db::dataBase.exec("CREATE TABLE IF NOT EXISTS compte(mail text primary key,mdp text, argent float DEFAULT 50);");
    db::dataBase.exec("CREATE TABLE IF NOT EXISTS facture(mailDebiteur text, mailDestinataire text, montant int, id int);");
    db::dataBase.exec("CREATE TABLE IF NOT EXISTS cagnotte(id INT PRIMARY KEY NOT NULL AUTO_INCREMENT, nom text, argent int);");

    return db::dataBase;
}


db::db(){

    ConnexionDB();
}


// permet de creer un compte
Compte db::creerCompte(std::string mail, std::string mdp)
{
    if(!db::dataBase.isOpen())  // ouverture de la base de donnée si elle n'est pas deja ouverte
    {
        db::dataBase = ConnexionDB();
    }

    Compte compte(mail, mdp); // on instancie un compte

    QSqlQuery query(db::dataBase); // permet de faire des requetes sql

    query.prepare("INSERT INTO compte(mail, mdp) VALUES(:mail,:mdp);"); // on insert dans la bdd les données du compte que l'on recupere
    query.bindValue(":mail",QString::fromStdString(mail));
    query.bindValue(":mdp",QString::fromStdString(mdp));

    query.exec(); // on execute la requete

    return compte;
}


bool db::verifierDonneesConnexion(std::string identifiant, std::string mdp){
    return true;
}

// permet de se connecter a la bdd
void db::connexion(std::string mail, std::string mdp){
    if(!db::dataBase.isOpen())
    {
        db::dataBase = ConnexionDB();
    }
}
