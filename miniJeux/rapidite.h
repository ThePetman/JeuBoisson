#ifndef RAPIDITE_H
#define RAPIDITE_H

#include <string>
#include <iostream>
#include <string>
#include <QTimer>
#include <QTime>

class Rapidite
{
protected:

    int tempsallouer;
    QTime tempsdebut;
    std::string phrase;

public:
    Rapidite();
    void setTempsallouer(int a);

    int finTimer();
    void debutTimer();

    void recopierPhrase(std::string p);

    int testerPhrase();
    int timing(int tempstotal);

    int afficherResultat(int timing, int testerphrase);
};

#endif
