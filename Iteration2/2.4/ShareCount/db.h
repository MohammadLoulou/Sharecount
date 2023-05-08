#ifndef DB_H
#define DB_H
#include <QSqlDatabase>
#include "compte.h"
#include "cagnotte.h"

class db
{
public:
    db();

    /**
     * @brief creerCompte
     * @param mail
     * @param mdp
     * @return Compte
     */
    Compte creerCompte(std::string mail, std::string mdp);

    /**
     * @brief compte
     * @param mail
     * @param mdp
     * @return Compte
     */
    Compte compte(std::string mail, std::string mdp);

    /**
     * @brief verifierDonneesConnexion
     * @param identifiant id
     * @param mdp password
     * @return true if the password and the id are correct, false else
     */
    bool verifierDonneesConnexion(std::string identifiant, std::string mdp);

    /**
     * @brief ConnexionDB connexion to the database
     * @return QSqlDatabase
     */
    static QSqlDatabase ConnexionDB();

    inline static QSqlDatabase dataBase;

    /**
     * @brief connexion
     * @param mail
     * @param mdp
     */
    void connexion(std::string mail, std::string mdp);

    /**
     * @brief creerCagnotte
     * @param nom
     */
    void creerCagnotte(std::string nom);

    /**
     * @brief supprCagnotte
     * @param nom
     */
    void supprCagnotte(std::string nom);
};


#endif // DB_H
