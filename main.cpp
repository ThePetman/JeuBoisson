#include "mainwindow.h"
#include "environnement\paquet.h"
#include "environnement\carte.h"
#include "environnement/joueur.h"

#include <QApplication>

int main(int argc, char *argv[])
{
//    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
//    return a.exec();

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

    Joueur j1 = Joueur("Adrien",Homme);
    Joueur j2 = Joueur("Leom",Femme);
    j1.affiche();
    j2.affiche();



    return 0;
}

// Salut !
