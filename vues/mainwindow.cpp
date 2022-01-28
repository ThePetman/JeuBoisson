#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent)

{
    this->setWindowTitle("Jeu");
    this->setGeometry(100,100,800,600);
    this->init_components();
    this->init_layouts();
    this->init_slots();

    this->plateau = new Plateau();
}

void MainWindow::init_components(void){
    this->centre = new QWidget();
    this->droite = new QWidget();
    droite->setStyleSheet("background-color : yellow");
    this->gauche = new QWidget();
    gauche->setStyleSheet("background-color : red");
    this->gauche1 = new QWidget();
    gauche1->setStyleSheet("background-color : white");
    this->gauche2 = new QWidget();
    gauche2->setStyleSheet("background-color : white");
    this->haut = new QWidget();
    haut->setStyleSheet("background-color : pink");
    this->milieu = new QWidget();
    milieu->setStyleSheet("background-color : green");
    this->jouer = new QPushButton("Jouer");

    this->ajouter = new QPushButton("Ajouter le joueur");
    QSize BUTTON_SIZE = QSize(172, 22);
    this->ajouter->setFixedSize(BUTTON_SIZE);
    this->nom = new QLineEdit();
    this->sexe = new QComboBox();
    this->sexe->addItem("Homme");
    this->sexe->addItem("Femme");


}

void MainWindow::init_layouts(void)
{
    this->setCentralWidget(this->centre);


    this->hboxlayout = new QHBoxLayout();

    QSizePolicy centreGauche(QSizePolicy::Preferred, QSizePolicy::Preferred);
    centreGauche.setHorizontalStretch(1);
    this->gauche->setSizePolicy(centreGauche);
    this->hboxlayout->addWidget(this->gauche);
    QSizePolicy centreDroite(QSizePolicy::Preferred, QSizePolicy::Preferred);
    centreDroite.setHorizontalStretch(2);
    this->droite->setSizePolicy(centreDroite);
    this->hboxlayout->addWidget(this->droite);

    this->centre->setLayout(this->hboxlayout);


    this->vboxlayout = new QVBoxLayout();
    QSizePolicy droiteHaut(QSizePolicy::Preferred, QSizePolicy::Preferred);
    droiteHaut.setVerticalStretch(4);
    this->haut->setSizePolicy(droiteHaut);
    this->vboxlayout->addWidget(this->haut);
    QSizePolicy droiteMilieu(QSizePolicy::Preferred, QSizePolicy::Preferred);
    droiteMilieu.setVerticalStretch(2);
    this->milieu->setSizePolicy(droiteMilieu);
    this->vboxlayout->addWidget(this->milieu);
    QSizePolicy droiteBas(QSizePolicy::Preferred, QSizePolicy::Preferred);
    droiteBas.setVerticalStretch(1);
    this->jouer->setSizePolicy(droiteBas);
    this->vboxlayout->addWidget(this->jouer);

    this->droite->setLayout(this->vboxlayout);


    this->formlayout = new QFormLayout();
    this->formlayout->addRow("Nom :",this->nom);
    this->formlayout->addRow("Sexe :",this->sexe);
    this->formlayout->addRow(this->ajouter);
    this->formlayout->setFormAlignment(Qt::AlignCenter);
    this->formlayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);

    this->milieu->setLayout(this->formlayout);

    this->grid= new QGridLayout();
    this->haut->setLayout(this->grid);

    this->hboxlayoutcartes = new QHBoxLayout();
    QSizePolicy gauche1(QSizePolicy::Preferred, QSizePolicy::Preferred);
    gauche1.setHorizontalStretch(1);
    this->gauche1->setSizePolicy(gauche1);
    this->hboxlayoutcartes->addWidget(this->gauche1);
    QSizePolicy gauche2(QSizePolicy::Preferred, QSizePolicy::Preferred);
    gauche2.setHorizontalStretch(1);
    this->gauche2->setSizePolicy(gauche2);
    this->hboxlayoutcartes->addWidget(this->gauche2);
    this->gauche->setLayout(this->hboxlayoutcartes);

    this->layoutcartes1 = new QFormLayout();
    this->gauche1->setLayout(this->layoutcartes1);
    this->layoutcartes2 = new QFormLayout();
    this->gauche2->setLayout(this->layoutcartes2);
}
/*void MainWindow::init_cartes(){
    for(int i=0;i<4;i++){
        for(int j =1;j<14;j++){
            QString valeur;
            QComboBox* minijeu = new QComboBox();
            minijeu->addItem("None");
            minijeu->addItem("1");
            minijeu->addItem("2");
            minijeu->addItem("3");
            minijeu->addItem("4");
            minijeu->addItem("5");
            minijeu->addItem("6");

            switch(i){
            case 0:
                valeur = QString::number(j) + " de pique";
                this->layoutcartes1->addRow(valeur,minijeu);
                break;
            case 1:
                valeur = QString::number(j) + " de coeur";
                this->layoutcartes1->addRow(valeur,minijeu);
                break;
            case 2:
                valeur = QString::number(j) + " de trefle";
                this->layoutcartes2->addRow(valeur,minijeu);
                break;
            case 3:
                valeur = QString::number(j) + " de carreau";
                this->layoutcartes2->addRow(valeur,minijeu);
                break;
            }
        }
    }


}*/


void MainWindow::init_slots(){
    connect(this->jouer,SIGNAL(clicked()),this,SLOT(init_gameWindow()));
    connect(this->ajouter,SIGNAL(clicked()),this,SLOT(ajoute_joueur()));
}

void MainWindow::affiche_joueurs(){

    int taille = this->plateau->getListeJoueurs().size();
    std::cout<<taille<<std::endl;

    for (int i=0;i<taille ;i++ ) {
        QWidget* widget = new QWidget();
        QVBoxLayout* layout = new QVBoxLayout();

//        QIcon* icon = new QIcon("joueurs.png");
//        layout->add
        std::string numero = "Joueur " + std::to_string(i+1);
        QLabel* titre = new QLabel(QString::fromStdString(numero));
        layout->addWidget(titre);
        QLabel* nom = new QLabel(QString::fromStdString(this->plateau->getListeJoueurs().at(i).getNom()));
        layout->addWidget(nom);
        QLabel* sexe = new QLabel(QString::fromStdString(this->plateau->getListeJoueurs().at(i).stdGenre()));
        layout->addWidget(sexe);
        widget->setLayout(layout);
        widget->setStyleSheet("background-color : red");
        if(i<3){
            grid->addWidget(widget,0,i);
        }else{
            grid->addWidget(widget,1,i-3);
        }
    }
}

void MainWindow::init_gameWindow(){
    if(this->getPlateau()->getListeJoueurs().size()<2)
        return;
    this->g = new GameWindow();
    g->plateau = this->getPlateau();
    g->init_joueurs();
    g->init_paquet();
    g->show();

}

void MainWindow::ajoute_joueur(){
    if(this->nom->text().isEmpty()or this->getPlateau()->getListeJoueurs().size()==6)
        return;
    Sexe genre;
    if (this->sexe->currentIndex()==0)
         genre = Homme;
    else
         genre = Femme;
    this->getPlateau()->ajouteJoueur( Joueur(this->nom->text().toStdString(),genre) );
    this->affiche_joueurs();
}

Plateau* MainWindow::getPlateau(){
    return this->plateau;
}

MainWindow::~MainWindow(){

}
