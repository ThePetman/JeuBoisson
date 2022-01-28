#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "environnement/plateau.h"
#include "vues/gamewindow.h"

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
#include <QIcon>
#include <QComboBox>




class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
     Plateau* getPlateau(void);
     Plateau* plateau;
     void affiche_joueurs(void);
     GameWindow* g;



private:
    QWidget* centre;
    QWidget* gauche;
    QWidget* droite;
    QWidget* haut;
    QWidget* milieu;
    QHBoxLayout* hboxlayout;
    QVBoxLayout* vboxlayout;
    QVBoxLayout* vboxlayoutcartes;
    QFormLayout* formlayout;
    QPushButton* jouer;
    QPushButton* ajouter;
    QLineEdit* nom;
    QComboBox* sexe;

    QGridLayout* grid;

    void init_components(void);
    void init_layouts(void);
    void init_slots(void);

    void init_cartes(void);

public slots:
    void init_gameWindow(void);
    void ajoute_joueur(void);







};
#endif // MAINWINDOW_H
