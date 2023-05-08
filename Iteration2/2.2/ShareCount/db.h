#ifndef DB_H
#define DB_H
#include <QSqlDatabase>
#include "compte.h"

class db
{
public:
    db();

    Compte creerCompte(std::string mail, std::string mdp);

    Compte compte(std::string mail, std::string mdp);

    bool verifierDonneesConnexion(std::string identifiant, std::string mdp);

    static QSqlDatabase ConnexionDB();

    inline static QSqlDatabase dataBase;

    void connexion(std::string mail, std::string mdp);
};


#endif // DB_H
