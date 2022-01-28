#include "famillemot.h"

void familleMot::ajouterMot( std::vector< std::string > liste)
{
    std::string mot;
    std::cin >> mot;
    liste.push_back(mot);
}

void familleMot::creertheme()
{
    std::vector< std::string > theme;
    theme.push_back("fruits");
    theme.push_back("légumes");
    theme.push_back("animaux");
    theme.push_back("couleurs");
    theme.push_back("genres de musique");
    theme.push_back("véhicules");
    theme.push_back("sports");
    theme.push_back("séries");
    theme.push_back("partie du corps");
}

void familleMot::viderListe(std::vector< std::string > liste)
{
    liste.clear();
}

void familleMot::trouverPerdants(std::vector< std::string > liste)
{
    int x = liste.size();
        for ( int i = 0 ; i < x ; i++){
            for ( int j = 0 ; j < x ; j++)
            {
                if(liste[i].compare(liste[j]) == 0 && i != j)
                {
                    std::vector< int > perdant;
                    perdant.push_back(i);
                }
            }
        }
}

void familleMot::afficherTheme(std::vector< std::string > theme)
{
    std::string themest = theme[rand() % theme.size()];
    std::cout << "le theme de ce round est : "<< themest << std::endl;
}

void familleMot::afficherResultat(std::vector< int > perdant , std::string themest, std::vector< std::string > liste)
{
    std::cout << "le theme de ce round était : "<<  themest << std::endl;
//    std::cout << "les participants ont répondus : "<<  liste << std::endl;
//    std::cout << "Et les perdants sont les joueurs numéro : "<<  perdant << std::endl;
}







