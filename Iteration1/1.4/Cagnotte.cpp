#include "Cagnotte.h" 

using namespace cagnotte;

Cagnotte::Cagnotte(char* nom){
    this->nom = nom; 
    this->argent = 0;
}

Cagnotte::~Cagnotte(){
}

int Cagnotte::getArgent(){
    return this->argent; 
}

char* Cagnotte::getNom(){
    return this->nom; 
}

void Cagnotte::don(int sum){
    argent = argent + sum; 
}

void Cagnotte::prelevement(int sum){
    argent = argent - sum; 
    if(argent<0){
        argent = 0; 
    }
}

