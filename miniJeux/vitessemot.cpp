#include "vitessemot.h"

void vitesseMot::setListeMot()
{
    listemot.push_back("guitoune");
    listemot.push_back("baragouin");
    listemot.push_back("pipistrelle");
    listemot.push_back("rouspéter");
    listemot.push_back("poutre");
    listemot.push_back("pédiluve");
    listemot.push_back("esperluette");
    listemot.push_back("nyctalope");
    listemot.push_back("pétoncle");
}

void vitesseMot::inputMot(std::string motd)
{
    this->inputmot.push_back(motd);
}

void vitesseMot::inputTemps(int tempstotal)
{
    this->inputtemps.push_back(tempstotal);
}

void vitesseMot::choixMot()
{
    this->mot = listemot[rand() % listemot.size()];;
}

void vitesseMot::debutTimer()
{
    this->tempsdebut = QTime::currentTime();
}

int vitesseMot::finTimer()
{
    QTime tempsfin = QTime::currentTime();
    int dsecondes = tempsdebut.second();
    int dminutes = tempsdebut.minute();
    int dheures = tempsdebut.hour();
    int fsecondes = tempsfin.second();
    int fminutes = tempsfin.minute();
    int fheures = tempsfin.hour();
    int tempstotal = ((fheures-dheures)*3600)+((fminutes-dminutes)*60)+(fsecondes-dsecondes);
    return tempstotal;
}

void vitesseMot::triRate()
{
    int tailleliste = inputmot.size();
    for ( int i = 0 ; i < tailleliste ; i++){
        if(inputmot[i] == mot){
            listebonjoueur.push_back(i);
            listebontemps.push_back(inputtemps[i]);
        }
    }
}

int vitesseMot::trouverNumeroDuGagnant()
{
    meilleurtemps = 0;
    int tailleliste = listebonjoueur.size();
    for ( int i = 0 ; i < tailleliste ; i++){
        if(listebontemps[i] < meilleurtemps){
            meilleurtemps = listebontemps[i];
            numerodugagnant = listebonjoueur[i];
        }
    }
   return numerodugagnant;
}

void vitesseMot::afficherresultat()
{
    std::cout << "le gagnant de ce round est le joueur numero : "<< numerodugagnant << std::endl;
}








