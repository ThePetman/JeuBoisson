#ifndef FAMILLEMOT_H
#define FAMILLEMOT_H

#include "rapidite.h"

class familleMot
{
private:
    std::vector< std::string > liste;
public:
    familleMot();
    void ajouterMot(std::vector< std::string > liste);
    void viderListe(std::vector< std::string > liste);
    void creertheme();
    void afficherTheme(std::vector< std::string > theme);
    void trouverPerdants(std::vector< std::string > liste);
    void afficherResultat(std::vector< int > perdant, std::string themest, std::vector< std::string > liste);
};

#endif // FAMILLEMOT_H
