#ifndef FAMILLEMOT_H
#define FAMILLEMOT_H

#include "rapidite.h"

class familleMot
{
private:
    std::vector< std::string > liste;
    std::vector< std::string > theme;
    std::string themeCourant;
    std::vector< int > perdant;
    void creertheme();
public:
    familleMot();
    void ajouterMot(std::string  liste);
    void viderListe(std::vector< std::string > liste);

    void afficherTheme();
    void trouverPerdants();
    std::vector<int> afficherResultat(std::vector< int > perdant, std::string themest, std::vector< std::string > liste);
};

#endif // FAMILLEMOT_H
