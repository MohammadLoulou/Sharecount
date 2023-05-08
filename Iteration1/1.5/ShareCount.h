#ifndef SHARECOUNT_H
#define SHARECOUNT_H

#include "bibCPP.h" 

#include "Compte.h"
#include "Cagnotte.h" 	

#include <string>

namespace sharecount
{
    class ShareCount{
    private:
        int c_co;
        compte::Compte* comptes; 
        
        int c_ca;
        cagnotte::Cagnotte* cagnottes; 

    public: 
        ShareCount(); 
        ~ShareCount(); 
        
        /**
         * \brief Create a new Cagnotte in the ShareCount
         * \param string name of the cagnotte 
         * \return 1 if succes, -1 if fail
         */
        int creerCagnotte(std::string nom); 
        
        /**
         * \brief add a sum in the cagnotte 
         * \param string name of the cagnotte 
         * \param int sum to add
         * \return 1 if succes, -1 if fail 
         */
        int don(std::string nomCagnotte, int sum); 
        
        /**
         * \brief remove a sum in the cagnotte 
         * \param char* name of the cagnotte 
         * \param int sum to remove of the cagnotte
         * \return 1 if succes, -1 if fails
         */
        int prelevement(std::string nomCagnotte, int sum); 
        
        /**
         * \brief add a new Compte in the ShareCount
         * \param std::string mail of the Compte 
         * \param std::string mot_de_passe of the compte 
         * \param std::string confirmation of the mot de passe in the compte
         * \return 1 if succes. -1 if fail 
         */
        int creerCompte(std::string mail, std::string mot_de_passe, std::string confirmation); 
        
    }; 
}
#endif
