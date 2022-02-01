#ifndef FAMILLEMOT_H
#define FAMILLEMOT_H

#include "rapidite.h"
#include <cstdlib>
#include <cstdlib>

class FamilleMot
{
private:
    std::vector< std::string > liste;
    std::vector< std::string > theme;
    std::string themeCourant;
    std::vector< int > perdant;
    void creertheme();

public:
    FamilleMot();
    void ajouterMot(std::string  liste);
    void viderListe(std::vector< std::string > liste);
    void setTheme(std::string  t);
    void afficherTheme();
    void trouverPerdants();
    std::string getThemeCourant();
    std::vector<int> afficherResultat();

};

#endif // FAMILLEMOT_H
