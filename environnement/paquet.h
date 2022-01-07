#ifndef PAQUET_H
#define PAQUET_H
#include "carte.h"
#include <string>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <ctime>

class Paquet
{
private:
    int nbCartes;
    Carte carteCourante;
    std::vector<Carte> paquet;

public:
    Paquet();
    int getNbCarte();
    Carte getCarteCourante();
    std::vector<Carte> getPaquet();
    void setCarteCourante(Carte c);

    void melangePaquet();
    void tireCarte();
    void supprimeCarte();

    void ajouteCarte(Carte c);

    void affiche();
};

#endif // PAQUET_H
