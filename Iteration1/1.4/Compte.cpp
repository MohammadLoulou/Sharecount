#include "Compte.h"

using namespace compte;

Compte::Compte(char* mail, char* mot_de_passe){
    this->mail = mail; 
    this->mot_de_passe = mot_de_passe; 
}

Compte::~Compte(){
}

char* Compte::getMail(){
    return mail; 
}

char* Compte::getMotDePasse(){
    return mot_de_passe; 
}
