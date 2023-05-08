#include "bibCPP.h"

#include "Cagnotte.h"

using namespace std; 

void testCagnotte(){
    cout<<"test Quidam"<<endl;
    char* nom = "Patreon"; 
    cagnotte::Cagnotte c = cagnotte::Cagnotte(nom); 
    cout<<"Nom : "<<c.getNom()<<endl;
    cout<<"Argent : "<<c.getArgent()<<endl;
    
    int a = 20; 
    int b = 20; 
    cout<<"Ajout d'une somme d'argent"<<endl; 
    c.don(a+b); 
    cout<<"Nom : "<<c.getNom()<<endl;
    cout<<"Argent : "<<c.getArgent()<<endl;
    cout<<"Retrait d'une somme"<<endl;
    c.prelevement(a); 
    cout<<"Nom : "<<c.getNom()<<endl;
    cout<<"Argent : "<<c.getArgent()<<endl;
    c.prelevement(b+1); 
    cout<<"Nom : "<<c.getNom()<<endl;
    cout<<"Argent : "<<c.getArgent()<<endl;
}

int main(){
    testCagnotte(); 
}
