#include "carte.h"

Carte::Carte()
{

}

Carte::Carte(int v,std::string f){
    this->valeur=v;
    this->forme=f;
}

Carte::Carte(int v,std::string f, std::string m){
    this->valeur=v;
    this->forme=f;
    this->minijeu=m;
}


int Carte::getValeur(){
    return this->valeur;
}

std::string Carte::getForme(){
    return this->forme;
}

 std::string Carte::getMiniJeu(){
    return this->minijeu;
}

void Carte::setMiniJeu( std::string m){
    this->minijeu = m;
}

void Carte::affiche(){
    std::cout<< this->valeur<<" de "<<this->forme<<" MiniJeu : "<<this->minijeu<<std::endl;
}
