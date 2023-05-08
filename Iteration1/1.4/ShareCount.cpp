#include "ShareCount.h" 

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
