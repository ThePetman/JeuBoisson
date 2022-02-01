#include "famillemot.h"

FamilleMot::FamilleMot(){
    this->creertheme();
    this->afficherTheme();
}

void FamilleMot::ajouterMot(  std::string  mot)
{

    this->liste.push_back(mot);
}

void FamilleMot::creertheme()
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

void FamilleMot::viderListe(std::vector< std::string > liste)
{
    liste.clear();
}

std::string FamilleMot::getThemeCourant(){
    return this->themeCourant;
}

void FamilleMot::trouverPerdants()
{
    int x = this->liste.size();
        for ( int i = 0 ; i < x ; i++){
            for ( int j = 0 ; j < x ; j++)
            {
                if(this->liste[i].compare(this->liste[j]) == 0 && i != j)
                {
                    std::cout<<this->liste.at(i)<<std::endl;
                    std::cout<<i<<std::endl;
                    this->perdant.push_back(i);
                }
            }
        }
}

void FamilleMot::setTheme(std::string t){
    this->themeCourant= t;
}

void FamilleMot::afficherTheme()
{
    srand((unsigned int)time(0));
    this->setTheme(this->theme[rand()%this->theme.size()]);
    std::cout << "le theme de ce round est : "<< this->themeCourant << std::endl;

}

std::vector<int> FamilleMot::afficherResultat()
{
    this->trouverPerdants();
    int x = this->liste.size();
    int y = this->perdant.size();

    for ( int i = 0 ; i < x ; i++){
        std::cout << "le participant numero " << i << " a repondu : " << liste[i] << std::endl;
    }
    for ( int i = 0 ; i < y ; i++){
        std::cout  << "le joueur numero " <<  this->perdant.at(i) << " a perdu" << std::endl;
    }
    return perdant;
}









