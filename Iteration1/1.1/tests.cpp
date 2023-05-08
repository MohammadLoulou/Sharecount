#include "bibCPP.h"

#include "Cagnotte.h"
using namespace std; 

void testCagnotte(){
    cout<<"test Quidam"<<endl;
    char* nom = "Patreon"; 
    cagnotte::Cagnotte c = cagnotte::Cagnotte(nom); 
    cout<<"Nom : "<<c.getNom()<<endl;
    cout<<"Argent : "<<c.getArgent()<<endl;
    
}

int main(){
    testCagnotte(); 
}
