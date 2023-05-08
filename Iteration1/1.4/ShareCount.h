#ifndef SHARECOUNT_H
#define SHARECOUNT_H

#include "bibCPP.h" 

#include "Compte.h"
#include "Cagnotte.h" 


namespace sharecount{
    class ShareCount{
    private:
        int c_co;
        compte::Compte* comptes; 
        
        int c_ca;
        cagnotte::Cagnotte* cagnottes; 

    public: 
        ShareCount(); 
        ~ShareCount(); 
    }; 
}

#endif SHARECOUNT_H
