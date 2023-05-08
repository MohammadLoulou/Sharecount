#include "Compte.h"
#include <string>
using namespace compte;

Compte::Compte(std::string mail, std::string mot_de_passe){
    this->mail = mail; 
    this->mot_de_passe = mot_de_passe; 
}

Compte::~Compte(){
}

std::string Compte::getMail(){
    return mail; 
}

std::string Compte::getMotDePasse(){
    return mot_de_passe; 
}
