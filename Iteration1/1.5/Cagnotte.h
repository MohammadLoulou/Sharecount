#ifndef CAGNOTTE_H 
#define CAGNOTTE_H
#include <string>
namespace cagnotte{
    class Cagnotte{
    private:
        std::string nom; 
        int argent; 
        
    public: 
        Cagnotte(std::string nom);
        ~Cagnotte();
        
        /**
         * \brief getter of the argent of the Cagnotte
         * \param void
         * \return the argent of the Cagnotte
         */
        int getArgent(); 
        
        /**
         * \brief getter of the name of the Cagnotte
         * \param void
         * \return the name of the argent
         */
        std::string getNom(); 
        
        /**
         * \brief add a sum in the Cagnotte
         * \param int sum 
         */
        void don(int sum); 
        
        /**
         * \brief remove a sum in the Cagnotte 
         * \param int sum 
         */
        void prelevement(int sum); 
    }; 
}

#endif
