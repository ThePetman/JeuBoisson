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
     void init_gameWindow(void);


private:
    QWidget* centre;
    QWidget* gauche;
    QWidget* droite;
    QWidget* haut;
    QWidget* milieu;
    QHBoxLayout* hboxlayout;
    QVBoxLayout* vboxlayout;
    QFormLayout* formlayout;
    QPushButton* jouer;
    QPushButton* ajouter;
    QLineEdit* nom;
    QLineEdit* sexe;

    QGridLayout* grid;

    void init_components(void);
    void init_layouts(void);







};
#endif // MAINWINDOW_H
