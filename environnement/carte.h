#ifndef CARTE_H
#define CARTE_H
#include <string>
#include <iostream>
#include <stdio.h>
typedef enum {rapidite,vitesseMot,familleMot} MiniJeu;

class Carte
{
private:
    int valeur;
    std::string forme;
     std::string minijeu;


public:
    Carte(int v,std::string f);
    Carte(int v,std::string f,std::string m);
    Carte();
    int getValeur();
    std::string getForme();
    std::string getMiniJeu();
    void setMiniJeu( std::string m);

    void initialiseMiniJeu();
    void affiche();

};

#endif // CARTE_H
