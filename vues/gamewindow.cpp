#include "gamewindow.h"

GameWindow::GameWindow(QWidget *parent): QMainWindow(parent)
{
    this->setWindowTitle("Jeu");
    this->setGeometry(200,200,800,600);

    this->init_components();
    this->init_layouts();
    this->init_slots();


}

void GameWindow::init_components(){
    this->centre = new QWidget();
    this->haut = new QWidget();
    haut->setStyleSheet("background-color : yellow");
    this->milieu = new QWidget();
    milieu->setStyleSheet("background-color : red");
    this->carte = new QLabel();
    this->bas = new QWidget();
    bas->setStyleSheet("background-color : green");

    this->lancer = new QPushButton("Lancer le minijeu");
    this->tirer = new QPushButton("Tirer une carte");
    this->infoJeu = new QLabel();
    this->infoJoueur = new QLabel();

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
    this->carte->setSizePolicy(milieu);
    this->vboxlayout->addWidget(this->carte);

    QSizePolicy bas(QSizePolicy::Preferred, QSizePolicy::Preferred);
    bas.setVerticalStretch(1);
    this->bas->setSizePolicy(bas);
    this->vboxlayout->addWidget(this->bas);


    this->centre->setLayout(this->vboxlayout);

    this->hboxlayout = new QHBoxLayout();
    this->hboxlayout->addWidget(this->tirer);
    this->hboxlayout->addWidget(this->lancer);
    this->hboxlayout->addWidget(this->infoJoueur);
     this->hboxlayout->addWidget(this->infoJeu);
    this->bas->setLayout(this->hboxlayout);

}

void GameWindow::init_slots(){
    connect(this->tirer, SIGNAL(clicked()),this,SLOT(choisir_carte()));
    connect(this->tirer, SIGNAL(clicked()),this,SLOT(affiche_action()));
}

void GameWindow::init_joueurs(){
    this->gridlayout = new QGridLayout();
    this->haut->setLayout(gridlayout);
    int taille = this->plateau->getListeJoueurs()->size();
    int c=1;
    for(int i =0; i<taille;i++){



        QWidget* widget = new QWidget();
        QVBoxLayout* layout = new QVBoxLayout();

//        QIcon* icon = new QIcon("joueurs.png");
//        layout->add
        std::string numero = "Joueur " + std::to_string(i+1);
        QLabel* titre = new QLabel(QString::fromStdString(numero));
        layout->addWidget(titre);
        QLabel* nom = new QLabel(QString::fromStdString(this->plateau->getListeJoueurs()->at(i).getNom()));
        layout->addWidget(nom);
        QLabel* sexe = new QLabel(QString::fromStdString(this->plateau->getListeJoueurs()->at(i).stdGenre()));
        layout->addWidget(sexe);
        widget->setLayout(layout);
        widget->setStyleSheet("background-color : red");
        gridlayout->addWidget(widget,0,i);
        c++;
    }
}
void GameWindow::init_paquet(){
    QFile file("../Jeu/JeuBoisson/environnement/cartes.txt");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;
    QTextStream in(&file);
    while(!in.atEnd()){
        QString line = in.readLine();
        QStringList list = line.split(";");
        this->plateau->getPaquet()->ajouteCarte(Carte(list[0].toInt(),list[1].toStdString(),list[2].toStdString()));
    }
    file.close();

    this->plateau->getPaquet()->melangePaquet();
    this->plateau->getPaquet()->affiche();


}

void GameWindow::choisir_carte(){
    this->plateau->joueur_suivant();
    this->plateau->getPaquet()->tireCarte();
    std::string carte = std::to_string(this->plateau->getPaquet()->getCarteCourante().getValeur()) +" de "+this->plateau->getPaquet()->getCarteCourante().getForme();
    this->carte->setText(QString::fromStdString(carte ));

}

void GameWindow::affiche_action(){
    std::string minijeu = this->plateau->getPaquet()->getCarteCourante().getMiniJeu();
    std::string forme = this->plateau->getPaquet()->getCarteCourante().getForme();
    std::string joueur = "Joueur "+std::to_string(this->plateau->getJoueurCourrant()->getId())+":";
    this->infoJoueur->setText(QString::fromStdString(joueur));
    if(minijeu=="none"){
        this->infoJeu->setText("Aucune action ce tour");
    }else if (minijeu =="1"){
        if(forme=="careau" || forme =="coeur")
            this->infoJeu->setText("Distribue 1 gorgee");
        else
            this->infoJeu->setText("Bois 1 gorgee");
    }else if (minijeu =="2"){
        if(forme=="careau" || forme =="coeur")
            this->infoJeu->setText("Distribue 2 gorgee");
        else
            this->infoJeu->setText("Bois 2 gorgee");
    }
}

GameWindow::~GameWindow(){

}
