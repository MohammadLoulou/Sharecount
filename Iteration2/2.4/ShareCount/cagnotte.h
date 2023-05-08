#ifndef CAGNOTTE_H
#define CAGNOTTE_H

#include "compte.h"

class Cagnotte
{
    private :
        std::string nom;
        double montantCagnotte;

    public:
        Cagnotte();

        /**
         * @brief augmenterCagnotte augmente l'argent dans la cagnotte
         * @param compte
         * @param montant
         */
        void augmenterCagnotte(Compte compte, double montant);

        /**
         * @brief setNom
         * @param nom
         */
        void setNom(std::string nom);
};

#endif // CAGNOTTE_H
