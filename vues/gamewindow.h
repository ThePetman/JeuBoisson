#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include "environnement/plateau.h"

#include <QMainWindow>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QSizePolicy>
#include <QFormLayout>
#include <QGridLayout>
#include <QString>
#include <QFile>


  class GameWindow : public QMainWindow
{
      Q_OBJECT

    public:
    GameWindow(QWidget *parent = nullptr);
    ~GameWindow();
    Plateau* plateau;
    void init_joueurs(void);
    void init_paquet(void);


  private:
    QWidget* centre;
    QWidget* haut;
    QWidget* milieu;
    QWidget* bas;
    QPushButton* tirer;
    QPushButton* lancer ;
    QLabel* infoJeu;
    QLabel* infoJoueur;
    QLabel* carte;
    QVBoxLayout* vboxlayout;
    QHBoxLayout* hboxlayout;
    QGridLayout* gridlayout;

    void init_components(void);
    void init_layouts(void);
    void init_slots(void);

  public slots:
    void choisir_carte(void);
    void affiche_action(void);





};

#endif // GAMEWINDOW_H
