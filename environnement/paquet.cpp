#include "paquet.h"


Paquet::Paquet()
{


}

Carte Paquet::getCarteCourante(){
    return this->carteCourante;
}

int Paquet::getNbCarte(){
    return this->nbCartes;
}

std::vector<Carte> Paquet::getPaquet(){
    return this->paquet;
}

void Paquet::setCarteCourante(Carte c){
    this->carteCourante = c;
}

void Paquet::melangePaquet(){
    srand((unsigned int)time(0));
    int c = 1;
    int taille = this->paquet.size()-1;

    for(int i = 0;i<taille;i++){
       //std::cout<< c<<std::endl;

        int pos = rand() %(taille-c+1);
       // std::cout<< pos<<std::endl;
        Carte tampon = paquet.at(pos);
       // tampon.affiche();
        this->paquet.at(pos)=this->paquet.at(taille-i);
        this->paquet.at(taille-i)=tampon;
        c++;
    }
}

void Paquet::tireCarte(){
    this->setCarteCourante(this->paquet.back());
    this->supprimeCarte();
     std::cout<<"carte tirée : "<<std::endl;
     this->getCarteCourante().affiche();
}

void Paquet::supprimeCarte(){
    this->paquet.pop_back();
}

void Paquet::ajouteCarte(Carte c){

    this->paquet.push_back(c);


}

void Paquet::affiche(){
    for(unsigned long long i=0;i<this->paquet.size();i++){
        this->paquet[i].affiche();
    }
}

