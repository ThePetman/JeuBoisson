#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent)

{
    this->setWindowTitle("Jeu");
    this->setGeometry(100,100,800,600);
    this->init_components();
    this->init_layouts();
}

void MainWindow::init_components(void){
    this->centre = new QWidget();
    this->droite = new QWidget();
    droite->setStyleSheet("background-color : yellow");
    this->gauche = new QWidget();
    gauche->setStyleSheet("background-color : red");
    this->haut = new QWidget();
    haut->setStyleSheet("background-color : pink");
    this->milieu = new QWidget();
    milieu->setStyleSheet("background-color : green");
    this->jouer = new QPushButton("Jouer");

    this->ajouter = new QPushButton("Ajouter le joueur");
    QSize BUTTON_SIZE = QSize(172, 22);
    this->ajouter->setFixedSize(BUTTON_SIZE);
    this->nom = new QLineEdit();
    this->sexe = new QLineEdit();

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





}

MainWindow::~MainWindow(){

}
