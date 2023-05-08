#ifndef CAGNOTTE_H 
#define CAGNOTTE_H

namespace cagnotte{
    class Cagnotte{
    private:
        char* nom; 
        int argent; 
        
    public: 
        Cagnotte(char* nom);
        ~Cagnotte();
        
        /**
         * \brief get the argent of the Cagnotte
         * \param void
         * \return the argent of the Cagnotte
         */
        int getArgent(); 
        
        /**
         * \brief get the name of the Cagnotte
         * \param void
         * \return the name of the argent
         */
        char* getNom(); 
    }; 
}

#endif
