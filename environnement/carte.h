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
    MiniJeu minijeu;


public:
    Carte(int v,std::string f);
    Carte();
    int getValeur();
    std::string getForme();
    MiniJeu getMiniJeu();
    void setMiniJeu(MiniJeu m);

    void initialiseMiniJeu();

};

#endif // CARTE_H
