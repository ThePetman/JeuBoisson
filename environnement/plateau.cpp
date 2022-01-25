#include "plateau.h"

Plateau::Plateau()
{
    this->paquet=Paquet();
}

Paquet Plateau::getPaquet(){
    return this->paquet;
}

int Plateau::getNbJoueur(){
    return this->listeJoueurs.size();
}

std::vector<Joueur> Plateau::getListeBuveurs(){
    return this->listeBuveurs;
}

std::vector<Joueur> Plateau::getListeJoueurs(){
    return this->listeJoueurs;
}

void Plateau::ajouteJoueur(Joueur j){

    this->listeJoueurs.push_back(j);
}

void Plateau::tireCarte(){
    this->paquet.tireCarte();
}
