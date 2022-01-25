#include "vues\mainwindow.h"
#include "vues\gamewindow.h"
#include "environnement\paquet.h"
#include "environnement\carte.h"
#include "environnement/joueur.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w = MainWindow();
    Joueur j1 = Joueur("Adrien",Homme);
    Joueur j2 = Joueur("Leom",Femme);
    Joueur j3 = Joueur("Gaoul",Homme);
    Joueur j4 = Joueur("Amo",Homme);
    j1.affiche();
    j2.affiche();
    w.plateau->ajouteJoueur(j1);

    w.plateau->ajouteJoueur(j2);
    w.plateau->ajouteJoueur(j3);
    w.plateau->ajouteJoueur(j4);

    w.affiche_joueurs();

    w.show();
    w.init_gameWindow();

//    GameWindow g;
//    g.show();

    return a.exec();

//    Paquet p = Paquet();
//    p.ajouteCarte(Carte(1,"pique"));
//    p.ajouteCarte(Carte(2,"pique"));
//    p.ajouteCarte(Carte(3,"pique"));
//    p.ajouteCarte(Carte(4,"pique"));
//    p.ajouteCarte(Carte(5,"pique"));
//    p.ajouteCarte(Carte(1,"coeur"));
//    p.ajouteCarte(Carte(2,"coeur"));

//    p.melangePaquet();
//    std::cout<<"Paquet melangé:"<<std::endl;
//    p.affiche();
//    std::cout<<"Carte tirée :"<<std::endl;
//    p.tireCarte();
//    p.getCarteCourante().affiche();
//    p.supprimeCarte();
//    std::cout<<"Paquet melangé après 1er tirage :"<<std::endl;
//    p.affiche();

//    Joueur j1 = Joueur("Adrien",Homme);
//    Joueur j2 = Joueur("Leom",Femme);
//    j1.affiche();
//    j2.affiche();



    return 0;
}

// Salut !
