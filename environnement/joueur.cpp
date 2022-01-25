#include "joueur.h"

Joueur::Joueur()
{

}

Joueur::Joueur(std::string n, Sexe s){
    this->nom=n;
    this->genre=s;
    this->gorgees = 0;
}

std::string Joueur::getNom(){
    return this->nom;
}

Sexe Joueur::getGenre()
{
    return this->genre;
}

int Joueur::getGorgees(){
    return this->gorgees;
}

std::string Joueur::stdGenre(){
    switch(this->getGenre()){
    case Homme:
        return "Homme";
    case Femme:
        return "Femme";
    }
}
void Joueur::incrementeGorgees(){
    this->gorgees++;
}

void Joueur::affiche(){
    switch(this->getGenre()){
    case Homme:
        std::cout<<this->nom<<" (Homme) a deja bu : "<<this->gorgees<<" gorgees"<<std::endl;
        break;
    case Femme:
        std::cout<<this->nom<<" (Femme) a deja bu : "<<this->gorgees<<" gorgees"<<std::endl;
        break;
    }

}
