#ifndef JOUEUR_H
#define JOUEUR_H
#include <string>
#include <iostream>
#include <stdio.h>

typedef enum {Homme,Femme} Sexe;

class Joueur
{
  private:
      std::string nom;
      Sexe genre;
      int gorgees;
  public:
      Joueur(std::string n, Sexe s);
      Joueur();
      std::string getNom();
      Sexe getGenre();
      int getGorgees();
      void setNom(std::string n);
//      void setGenre(Sexe s);
//      void setGorgee(int g );

      void incrementeGorgees();




};

#endif // JOUEUR_H
