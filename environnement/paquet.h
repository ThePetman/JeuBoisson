#ifndef PAQUET_H
#define PAQUET_H
#include "carte.h"
#include <string>
#include <iostream>
#include <stdio.h>
#include <vector>

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

    void choisisCarte();
    void supprimeCarte();
};

#endif // PAQUET_H
