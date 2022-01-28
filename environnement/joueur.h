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
      int id ;
      static int total;
  public:
      Joueur(std::string n, Sexe s);
      Joueur();
      std::string getNom();
      std::string stdGenre();
      Sexe getGenre();
      int getGorgees();
      void setNom(std::string n);
      void setId(int i);
      int getTotal();
//      void setGenre(Sexe s);
//      void setGorgee(int g );

      void incrementeGorgees();
      void incrementeTotal();
      int getId();

      void affiche();





};


#endif // JOUEUR_H
