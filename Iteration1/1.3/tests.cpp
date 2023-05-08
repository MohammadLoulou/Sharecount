#include "bibCPP.h"

#include "Cagnotte.h"
#include "Compte.h"

using namespace std; 

void testCompte(){
    cout<<"Test Compte"<<endl; 
    char* mail = "toto@gmail.com"; 
    char* mot_de_passe = "mot_de_passe"; 
    
    compte::Compte c = compte::Compte(mail, mot_de_passe); 
    cout<<"mail : "<<c.getMail()<<endl; 
    cout<<"Mot De Passe : "<<c.getMotDePasse()<<endl; 
}

void testCagnotte(){
    cout<<"test Cagnotte"<<endl;
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
    testCompte(); 
    testCagnotte(); 
}
