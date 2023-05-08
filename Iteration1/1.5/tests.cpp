#include "bibCPP.h"

#include "Cagnotte.h"
#include "Compte.h"
#include "ShareCount.h"

#include <string>
using namespace std; 

void operationResult(int op){
    if(op == FAIL){
        cout<<"Operation échouée"<<endl; 
    }
    if(op == SUCCES){
        cout<<"Operation réussie"<<endl; 
    }
}

void testShareCount(){
    cout<<"test ShareCount"<<endl; 
    sharecount::ShareCount sc = sharecount::ShareCount(); 
    
    cout<<"Test Creation de Compte"<<endl; 
    string mail = ""; 
    cout << "Email : " << endl;
    cin >> mail;
    cout << "Mot de passe : " << endl;
    string mot_de_passe = "";
    cin >> mot_de_passe;
    cout << "Confirmez votre mot de passe :" << endl;
    string c1 = "";
    cin >> c1;
    operationResult(sc.creerCompte(mail, mot_de_passe, c1)); 
    
    cout<<"Test Cagnotte"<<endl; 
    string c3 = "Cagnotte";
    string c4 = "Cagnotte2"; 
    operationResult(sc.creerCagnotte(c3));
    
    cout<<"Test Don"<<endl; 
    int sum = 5; 
    operationResult(sc.don(c4,sum)); 
    operationResult(sc.don(c3,sum)); 
}

void testCompte(){
    cout<<"Test Compte"<<endl; 
    string mail = ""; 
    cout << "Email : " << endl;
    cin >> mail;
    cout << "Mot de passe : " << endl;
    string mot_de_passe = "";
    cin >> mot_de_passe;
    
    compte::Compte c = compte::Compte(mail, mot_de_passe); 
    cout<<"mail : "<<c.getMail()<<endl; 
    cout<<"Mot De Passe : "<<c.getMotDePasse()<<endl; 
}

void testCagnotte(){
    cout<<"test Cagnotte"<<endl;
    string nom = "";
    cout << "Donnez un nom de cagnotte : " << endl;
    cin >> nom; 
    cagnotte::Cagnotte c = cagnotte::Cagnotte(nom); 
    cout<<"Nom : "<<c.getNom()<<endl;
    cout<<"Argent : "<<c.getArgent()<<endl;
    
    cout << "Indiquez une valeur ( a ) : " << endl;
    int a; 
    cin >> a;
    cout << "Indiquez une valeur ( b ) : " << endl;
    int b;
    cin >> b;
    
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
    testCompte(); 
    testShareCount();
}
