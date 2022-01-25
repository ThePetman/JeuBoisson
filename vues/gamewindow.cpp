#include "gamewindow.h"

GameWindow::GameWindow(QWidget *parent): QMainWindow(parent)
{
    this->setWindowTitle("Jeu");
    this->setGeometry(200,200,800,600);
    this->init_components();
    this->init_layouts();
}

void GameWindow::init_components(){
    this->centre = new QWidget();
    this->haut = new QWidget();
    haut->setStyleSheet("background-color : yellow");
    this->milieu = new QWidget();
    milieu->setStyleSheet("background-color : red");
    this->bas = new QWidget();
    bas->setStyleSheet("background-color : green");

    this->lancer = new QPushButton("Lancer le minijeu");
    this->tirer = new QPushButton("Tirer une carte");

}

void GameWindow::init_layouts(){
    this->setCentralWidget(this->centre);

    this->vboxlayout = new QVBoxLayout();
    QSizePolicy haut(QSizePolicy::Preferred, QSizePolicy::Preferred);
    haut.setVerticalStretch(2);
    this->haut->setSizePolicy(haut);
    this->vboxlayout->addWidget(this->haut);
    QSizePolicy milieu(QSizePolicy::Preferred, QSizePolicy::Preferred);
    milieu.setVerticalStretch(3);
    this->milieu->setSizePolicy(milieu);
    this->vboxlayout->addWidget(this->milieu);
    QSizePolicy bas(QSizePolicy::Preferred, QSizePolicy::Preferred);
    bas.setVerticalStretch(1);
    this->bas->setSizePolicy(bas);
    this->vboxlayout->addWidget(this->bas);


    this->centre->setLayout(this->vboxlayout);

    this->hboxlayout = new QHBoxLayout();
    this->hboxlayout->addWidget(this->tirer);
    this->hboxlayout->addWidget(this->lancer);
    this->bas->setLayout(this->hboxlayout);

}

GameWindow::~GameWindow(){

}
