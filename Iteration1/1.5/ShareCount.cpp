#include "ShareCount.h" 
#include <string>
using namespace sharecount; 

ShareCount::ShareCount(){
    c_co = 0;
    comptes = (compte::Compte*)calloc(max_co,sizeof(compte::Compte)); 
    
    c_ca = 0;
    cagnottes = (cagnotte::Cagnotte*)calloc(max_ca,sizeof(cagnotte::Cagnotte)); 
}

ShareCount::~ShareCount(){
    free(comptes); 
    free(cagnottes); 
}

int ShareCount::creerCagnotte(std::string nom){
    int res = FAIL; 
    if(c_ca<max_ca){
        cagnottes[c_ca] = cagnotte::Cagnotte(nom); 
        c_ca++; 
        res = SUCCES; 
    }
    return res; 
}

int ShareCount::don(std::string nom, int sum){
    int res = FAIL; 
    int i = 0; 
    while(i<c_ca){
        if(nom.compare(cagnottes[i].getNom()) == 0){
            cagnottes[i].don(sum); 
            res = SUCCES; 
            i = c_ca; 
        }
        i++; 
    }
    return res; 
}

int ShareCount::prelevement(std::string nom, int sum){
    int res = FAIL; 
    int i = 0; 
    while(i<c_ca){
        if(nom.compare(cagnottes[i].getNom()) == 0){
            cagnottes[i].prelevement(sum); 
            res = SUCCES; 
            i = c_ca; 
        }
        i++; 
    }
    return res; 
}

int ShareCount::creerCompte(std::string mail, std::string mot_de_passe, std::string confirmation){
    int res = FAIL; 
    if(mot_de_passe.compare(confirmation)  == 0){
        comptes[c_co] = compte::Compte(mail,mot_de_passe); 
        c_co++; 
        res = SUCCES;
    }
    return res; 
}
