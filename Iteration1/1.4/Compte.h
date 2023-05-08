#ifndef COMPTE_H
#define COMPTE_H

namespace compte{
    class Compte{
    private: 
        char* mail; 
        char* mot_de_passe; 
    public: 
        Compte(char* mail, char* mot_de_passe);
        ~Compte();
        
        /**
         * \brief Getter of the mail in Compte 
         * \param void
         * \return the mail of the Compte  
         */
        char* getMail(); 
        
        /**
         * \brief Getter of the mot de passe in Compte 
         * \param void 
         * \return the mot_de_passe of the Compte 
         */
        char* getMotDePasse();
    }; 
}
#endif
