#ifndef JEUFAMILLEMOT_H
#define JEUFAMILLEMOT_H

#include <QMainWindow>
#include <QLabel>
#include <QLineEdit>
#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <vector>

#include "../miniJeux/famillemot.h"
#include "../environnement/joueur.h"




  class JeuFamilleMot : public QMainWindow
{
    Q_OBJECT

    public:
    JeuFamilleMot(int n);

    ~JeuFamilleMot();
    std::vector<Joueur>* listeJoueurs;
    void ajouteJoueur(Joueur* j);
    std::vector<Joueur>* listePerdants;
    std::vector<Joueur>* getListePerdant;
    FamilleMot* jeu;
    void setTaille(int t);
     int getCompteur();
      int getTaille();


  private:
    QWidget* centre;
    QLabel* regles;
    QLabel* theme;
    QLabel* resultat;
    QLineEdit* saisie;
    QVBoxLayout* vboxlayout;

    int taille;
    int compteur;

    void init_components(void);
    void init_layouts(void);
    void init_slots(void);
    void affiche_resultat(void);
  public slots:
    void ajoute_mot(void);



};

#endif // JEUFAMILLEMOT_H
