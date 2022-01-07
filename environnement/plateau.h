#ifndef PLATEAU_H
#define PLATEAU_H
#include <string>
#include <iostream>
#include <stdio.h>
#include "paquet.h"
#include "joueur.h"
#include <vector>

class Plateau
{
private:
    Paquet paquet;
    int nbJoueur;
    std::vector<Joueur> listeJoueurs;
    std::vector<Joueur> listeBuveurs;


public:
    Plateau();
    Paquet getPaquet();
    int getNbJoueur();
    std::vector<Joueur> getListeJoueurs();
    std::vector<Joueur> getListeBuveurs();

    void ajouteJoueur(Joueur j);
    void tireCarte();
};

#endif // PLATEAU_H
