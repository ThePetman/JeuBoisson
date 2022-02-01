#ifndef JEURAPIDITE_H
#define JEURAPIDITE_H

#include "../miniJeux/rapidite.h"

#include <QLabel>
#include <QLineEdit>
#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <vector>
#include <QMainWindow>

  class JeuRapidite : public QMainWindow
{
    Q_OBJECT
    public:
    JeuRapidite();
    ~JeuRapidite();

     Rapidite* jeu;
     int flag;
     void setFlag(int i);
     int getFlag();


  private:
    QWidget* centre;
    QLabel* regles;
    QLabel* theme;
    QLabel* resultat;
    QLineEdit* saisie;
    QVBoxLayout* vboxlayout;

    void init_components(void);
    void init_layouts(void);
    void init_slots(void);

  public slots:
    void declenche_timer(QString );
    void verifie();
};

#endif // JEURAPIDITE_H
