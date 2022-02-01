#ifndef VITESSEMOT_H
#define VITESSEMOT_H

#include "rapidite.h"

class vitesseMot
{
protected:

    QTime tempsdebut;

    int meilleurtemps;
    int numerodugagnant;

    std::vector< std::string > listemot;
    std::string mot;

    std::vector< int > inputtemps;
    std::vector< std::string > inputmot;

    std::vector< int >listebonjoueur;
    std::vector< int >listebontemps;

public:

    void setListeMot();
    void choixMot();

    void debutTimer();
    int finTimer();

    void inputMot(std::string motd);
    void inputTemps(int tempstotal);

    void triRate();
    int trouverNumeroDuGagnant();
    void afficherresultat();
};

#endif // VITESSEMOT_H
