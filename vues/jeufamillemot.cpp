#include "jeufamillemot.h"

JeuFamilleMot::JeuFamilleMot()
{
    this->setWindowTitle("Jeu Famille de mot");
    this->setGeometry(100,100,800,600);
    //this->jeu = new familleMot();
    this->init_components();
    this->init_layouts();
    //this->init_slots();
    this->listeJoueurs = new  std::vector<Joueur>();
    this->listePerdants = new  std::vector<Joueur>();

}


void JeuFamilleMot::init_components(){
    this->centre= new QWidget();
    this->saisie = new QLineEdit();
    this->regles = new QLabel("Ecrivez chacun votre tour un mot en rapport avec le theme. Les mots identiques perdent. Le theme de ce round est : ");
    this->theme = new QLabel();
    this->resultat = new QLabel();
}

void JeuFamilleMot::init_layouts(){

    this->setCentralWidget(this->centre);
    this->vboxlayout = new QVBoxLayout();
    this->vboxlayout->addWidget(this->regles);
     this->vboxlayout->addWidget(this->theme);
     this->vboxlayout->addWidget(this->saisie);
     this->vboxlayout->addWidget(this->resultat);
    this->centre->setLayout(this->vboxlayout);

}




JeuFamilleMot::~JeuFamilleMot(){

}
