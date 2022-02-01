#include "jeufamillemot.h"

JeuFamilleMot::JeuFamilleMot(int n)
{
    this->setWindowTitle("Jeu Famille de mot");
    this->setGeometry(100,100,800,600);
    this->jeu = new FamilleMot();
    this->setTaille(n);
    this->compteur=0;
    this->init_components();
    this->init_layouts();
    this->init_slots();
    this->listeJoueurs = new  std::vector<Joueur>();
    this->listePerdants = new  std::vector<Joueur>();

}


void JeuFamilleMot::init_components(){
    this->centre= new QWidget();
    this->saisie = new QLineEdit();
    this->regles = new QLabel("Ecrivez chacun votre tour un mot en rapport avec le theme. Les mots identiques perdent. Le theme de ce round est : ");
    this->theme = new QLabel();
    this->theme->setText(QString::fromStdString(this->jeu->getThemeCourant()));
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

void JeuFamilleMot::init_slots(){
    connect(this->saisie,SIGNAL(editingFinished()),this,SLOT(ajoute_mot()));
}

int JeuFamilleMot::getCompteur(){
    return this->compteur;
}
int JeuFamilleMot::getTaille(){
    return this->taille;
}

void JeuFamilleMot::ajoute_mot(){

    std::cout<<this->getCompteur()<<std::endl;




        this->jeu->ajouterMot(this->saisie->text().toStdString());
        this->saisie->clear();
        std::cout<<"test"<<std::endl;
        this->compteur++;
        if(this->getCompteur()==this->getTaille()){
            this->saisie->clear();
            this->affiche_resultat();
            this->saisie->setEnabled(false);
        }



}

void JeuFamilleMot::affiche_resultat(){
    std::vector<int> resultat = this->jeu->afficherResultat();
    QString affiche_perdant;
    for(unsigned long long i =0;i<resultat.size();i++){
        affiche_perdant.append("Joueur : ");
        affiche_perdant.append(QString::fromStdString(std::to_string(resultat.at(i)+1)));
        affiche_perdant.append("   ");
    }
    if(resultat.size()==0)
        affiche_perdant = "Il n'y a pas de perdants";
    this->resultat->setText(affiche_perdant);

}

void JeuFamilleMot::setTaille(int t){
    this->taille=t
;}

JeuFamilleMot::~JeuFamilleMot(){
    delete this->jeu;
}
