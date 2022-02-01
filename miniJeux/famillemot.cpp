#include "famillemot.h"

familleMot::familleMot(){
    this->creertheme();
    this->afficherTheme();
}

void familleMot::ajouterMot(  std::string  mot)
{

    this->liste.push_back(mot);
}

void familleMot::creertheme()
{

    this->theme.push_back("fruits");
    this->theme.push_back("legumes");
    this->theme.push_back("animaux");
    this->theme.push_back("couleurs");
    this->theme.push_back("genres de musique");
    this->theme.push_back("vehicules");
    this->theme.push_back("sports");
    this->theme.push_back("series");
    this->theme.push_back("partie du corps");
}

void familleMot::viderListe(std::vector< std::string > liste)
{
    liste.clear();
}

void familleMot::trouverPerdants()
{
    int x = this->liste.size();
        for ( int i = 0 ; i < x ; i++){
            for ( int j = 0 ; j < x ; j++)
            {
                if(this->liste[i].compare(this->liste[j]) == 0 && i != j)
                {

                    this->perdant.push_back(i);
                }
            }
        }
}

void familleMot::afficherTheme()
{
    this->themeCourant = theme[rand() % theme.size()];
    std::cout << "le theme de ce round est : "<< this->themeCourant << std::endl;

}

std::vector<int> familleMot::afficherResultat(std::vector< int > perdant , std::string themest, std::vector< std::string > liste)
{
    int x = liste.size();
    int y = perdant.size();
    std::cout << "le theme de ce round était : "<<  themest << std::endl;
    for ( int i = 0 ; i < x ; i++){
        std::cout << "le participant numéro " << x << " a répondus : " << liste[x] << std::endl;
    }
    for ( int i = 0 ; i < y ; i++){
        std::cout  << "le joueur numéro " <<  perdant[y] << " a perdus" << std::endl;
    }
    return perdant;
}







