#include "vues/mainwindow.h"
#include "environnement\paquet.h"
#include "environnement\carte.h"
#include "environnement/joueur.h"
#include "miniJeux/rapidite.h"
#include "vues/jeurapidite.h"

#include <QApplication>


int main(int argc, char *argv[])
{
QApplication a(argc, argv);

   MainWindow w = MainWindow();
//   JeuRapidite f = JeuRapidite();
//   f.show();





   w.show();
//   w.init_gameWindow();
//   w.init_gameWindow();
//   w.g->choisir_carte();

//    GameWindow g;
//    g.show();


     return a.exec();
    return 0;
}

// Salut !
