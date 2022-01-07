#include "carte.h"

Carte::Carte()
{

}

Carte::Carte(int v,std::string f){
    this->valeur=v;
    this->forme=f;
}

int Carte::getValeur(){
    return this->valeur;
}

std::string Carte::getForme(){
    return this->forme;
}

MiniJeu Carte::getMiniJeu(){
    return this->minijeu;
}

void Carte::setMiniJeu(MiniJeu m){
    this->minijeu = m;
}

void Carte::affiche(){
    std::cout<< this->valeur<<" de "<<this->forme<<" MiniJeu : "<<this->minijeu<<std::endl;
}
