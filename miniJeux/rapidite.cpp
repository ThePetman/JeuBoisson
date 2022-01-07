#include "rapidite.h"

Rapidite::Rapidite()
{
    QTime tempsseuil = QTime::currentTime();
    tempsseuil = tempsseuil.addSecs(20);

    std::string phrase;
    std::string bphrase = "Je voudrais rassurer les peuples qui meurent de faim dans le monde : ici, on mange pour vous.";
    std::cout << "Recopiez cette phrase : “Je voudrais rassurer les peuples qui meurent de faim dans le monde : ici, on mange pour vous.”  ";
    std::cin >> phrase;

    while(phrase.compare(bphrase) != 0){
        std::cout << "Mauvaise phrase ! Réessayer : “Je voudrais rassurer les peuples qui meurent de faim dans le monde : ici, on mange pour vous.”  ";
        std::cin >> phrase;
    }

    QTime tempsactuel = QTime::currentTime();
    if(tempsactuel <= tempsseuil){
        std::cout << "Bravo, vous avez gagné ! Tous les autres participent boivent une gorgée.";
    }
    else{
        std::cout << "Vous avez perdu ! Vous buvez deux gorgées !";
    }
}

