#include "jeurapidite.h"


JeuRapidite::JeuRapidite()
{
    this->setWindowTitle("Jeu Famille de mot");
    this->setGeometry(100,100,800,600);
    this->jeu = new Rapidite();

    this->init_components();
    this->init_layouts();
    this->init_slots();

}


void JeuRapidite::init_components(){
    this->centre= new QWidget();
    this->saisie = new QLineEdit();
    this->regles = new QLabel("Recopiez cette phrase : “Je voudrais rassurer les peuples qui meurent de faim dans le monde : ici, on mange pour vous.”  ");
    this->theme = new QLabel("Le temps est compte, il commencera des la premiere lettre saisie. Bonne chance !");

    this->resultat = new QLabel();
}

void JeuRapidite::init_layouts(){

    this->setCentralWidget(this->centre);
    this->vboxlayout = new QVBoxLayout();
    this->vboxlayout->addWidget(this->regles);
     this->vboxlayout->addWidget(this->theme);
     this->vboxlayout->addWidget(this->saisie);
     this->vboxlayout->addWidget(this->resultat);
    this->centre->setLayout(this->vboxlayout);

}

void JeuRapidite::init_slots(){
    connect(this->saisie,SIGNAL(textChanged(QString)),this,SLOT(declenche_timer(QString )));
    connect(this->saisie,SIGNAL(editingFinished()),this,SLOT(verifie()));

}

void JeuRapidite::declenche_timer(QString ){
    if(this->getFlag()==1){
        return;
       } else{
        this->jeu->debutTimer();
        this->setFlag(1);
    }

}

void JeuRapidite::verifie(){
    int tempsFinal = this->jeu->finTimer();
    this->jeu->recopierPhrase(this->saisie->text().toStdString());
    this->saisie->setEnabled(false);
    int issue;
    issue = this->jeu->timing(tempsFinal);
    if (issue == 0){
        issue = this->jeu->testerPhrase();
        if(issue ==0)
            this->resultat->setText("C'est gagne");
        else
            this->resultat->setText("Vous avez mal recopie. Vous perdez");
    }else
        this->resultat->setText("Vous avez depasser le temps imparti. Vous perdez");
}

void JeuRapidite::setFlag(int i){
    this->flag=i;
}
int JeuRapidite::getFlag(){
    return this->flag;
}

JeuRapidite::~JeuRapidite(){

}
