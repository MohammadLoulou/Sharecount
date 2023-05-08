#ifndef COMPTE_H
#define COMPTE_H
#include <string>

class Compte{
    private:
        std::string mail;
        std::string mot_de_passe;
        float argent;
    public:
        Compte(std::string mail, std::string mot_de_passe);
        Compte();
        ~Compte();

        /**
         * \brief Getter of the mail in Compte
         * \param void
         * \return the mail of the Compte
         */
        std::string getMail();

        /**
         * \brief Getter of the mot de passe in Compte
         * \param void
         * \return the mot_de_passe of the Compte
         */
        std::string getMotDePasse();

        /**
         * \brief Getter of the montant in compte
         * \param void
         * \return the montant of the Compte
         */
        float getArgent();

        void setArgent(float montant);
    };

#endif
