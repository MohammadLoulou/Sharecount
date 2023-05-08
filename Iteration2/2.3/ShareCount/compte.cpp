#include "compte.h"
#include <string>



Compte::Compte(std::string mail, std::string mot_de_passe)
{
    this->mail = mail;
    this->mot_de_passe = mot_de_passe;
    this->argent = 50;
}

Compte::Compte()
{

}

Compte::~Compte()
{

}

std::string Compte::getMail()
{
    return this->mail;
}

std::string Compte::getMotDePasse()
{
    return this->mot_de_passe;
}

float Compte::getArgent(){
    return this->argent;
}

void Compte::setArgent(float montant)
{
    this->argent = this->argent+montant;
}
