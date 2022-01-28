#include "plateau.h"

Plateau::Plateau()
{
    this->paquet= new Paquet();
    this->compteur=0;
}

Paquet* Plateau::getPaquet(){
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
    this->paquet->tireCarte();
}

Joueur Plateau::getJoueurCourrant(){
    return this->joueurCourrant;
}

void Plateau::setJoueurCourrant(Joueur j){
    this->joueurCourrant=j;
}

void Plateau::joueur_suivant(){
    std::cout<<"test"<<std::endl;
    int taille = this->getNbJoueur()-1;
    std::cout<<taille<<std::endl;
    std::cout<<this->compteur<<std::endl;

    if(this->compteur==taille){
        this->setJoueurCourrant(this->getListeJoueurs().at(this->compteur));
        this->compteur=0;

    }else{
        this->setJoueurCourrant(this->getListeJoueurs().at(this->compteur));
        this->compteur++;
    }


}
