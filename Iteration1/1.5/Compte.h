#ifndef COMPTE_H
#define COMPTE_H
#include <string>
namespace compte{
    class Compte{
    private: 
        std::string mail; 
        std::string mot_de_passe; 
    public: 
        Compte(std::string mail, std::string mot_de_passe);
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
    }; 
}
#endif
