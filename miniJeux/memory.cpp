#include "memory.h"

std::vector< std::string > memory::createAlphabet()
{
    std::vector< std::string > alphabet;
    alphabet.push_back("a"),alphabet.push_back("b"),alphabet.push_back("c"),alphabet.push_back("d"),alphabet.push_back("e");
    alphabet.push_back("f"),alphabet.push_back("g"),alphabet.push_back("h"),alphabet.push_back("i"),alphabet.push_back("j");
    alphabet.push_back("k"),alphabet.push_back("l"),alphabet.push_back("m"),alphabet.push_back("n"),alphabet.push_back("o");
    alphabet.push_back("p"),alphabet.push_back("q"),alphabet.push_back("r"),alphabet.push_back("s"),alphabet.push_back("t");
    alphabet.push_back("u"),alphabet.push_back("v"),alphabet.push_back("w"),alphabet.push_back("x"),alphabet.push_back("y");
    alphabet.push_back("z");
    return alphabet;
}

void memory::createMot(std::vector< std::string > alphabet, std::vector< std::string > liste, std::string mot)
{
    int x = 5 + rand() % 10;
    for ( int i = 0 ; i < x ; i++){
        std::string lettre;
        lettre = alphabet[rand() % alphabet.size()];
        liste.push_back(lettre);
        mot.append(lettre);
    }
}

int memory::jouerMemory(std::vector< std::string > liste, std::string mot)
{
    std::string lettrejoueur;
    int numerolettre = rand() % mot.size();
    std::cout << "Mot à retenir : "<< mot << std::endl;
    std::cout << "Vous avez bien retenus le mot ? Veuillez donnez sa "<< numerolettre << "ème lettre" << std::endl;
    std::cin >> lettrejoueur;
    if(lettrejoueur.compare(liste[numerolettre]) != 0)
    {
        std::cout << "Oups ! Vous vous êtes trompé, dommage !" << std::endl;
        return 0;
    }
    else
    {
        std::cout << "Oui c'était bien ça, bien joué !" << std::endl;
        return 1;
    }
}
