#include "rapidite.h"

Rapidite::Rapidite(){
    this->setTempsallouer(20);
}

void Rapidite::setTempsallouer(int a)
{
    this->tempsallouer = a;
}

void Rapidite::recopierPhrase(std::string p)
{

    this->phrase = p;
}

int Rapidite::testerPhrase()
{
    std::string bphrase = "Je voudrais rassurer les peuples qui meurent de faim dans le monde : ici, on mange pour vous.";
    if(this->phrase.compare(bphrase) == 0){
            return 0;
    }
    else
        return 1;
}

int Rapidite::timing(int tempstotal)
{
    if(tempstotal <= this->tempsallouer)
        return 0;
    else
        return 1;
}

void Rapidite::debutTimer()
{
    std::cout << "Bravo vous avez gagné !"<< std::endl;
    this->tempsdebut = QTime::currentTime();
}

int Rapidite::finTimer()
{
    QTime tempsfin = QTime::currentTime();
    int dsecondes = this->tempsdebut.second();
    int dminutes = this->tempsdebut.minute();
    int dheures = this->tempsdebut.hour();
    int fsecondes = tempsfin.second();
    int fminutes = tempsfin.minute();
    int fheures = tempsfin.hour();
    int tempstotal = ((fheures-dheures)*3600)+((fminutes-dminutes)*60)+(fsecondes-dsecondes);
    return tempstotal;
}

int Rapidite::afficherResultat(int timing, int testerphrase)
{
    if(timing == 0 && testerphrase == 0){
        std::cout << "Bravo vous avez gagné !"<< std::endl;
        return 0;
    }
    else
    {
        std::cout << "Oups, perdus !"<< std::endl;
        return 1;
    }
}

