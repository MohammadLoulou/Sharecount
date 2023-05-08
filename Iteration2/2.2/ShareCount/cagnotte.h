#ifndef CAGNOTTE_H
#define CAGNOTTE_H

#include "compte.h"

class Cagnotte
{
    private :
        double montantCagnotte;

    public:
        Cagnotte();
        void augmenterCagnotte(Compte compte, double montant);
};

#endif // CAGNOTTE_H
