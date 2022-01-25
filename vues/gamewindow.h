#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QMainWindow>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QSizePolicy>
#include <QFormLayout>


  class GameWindow : public QMainWindow
{
      Q_OBJECT

    public:
    GameWindow(QWidget *parent = nullptr);
    ~GameWindow();

  private:
    QWidget* centre;
    QWidget* haut;
    QWidget* milieu;
    QWidget* bas;
    QPushButton* tirer;
    QPushButton* lancer ;
    QLabel* infoJeu;
    QVBoxLayout* vboxlayout;
    QHBoxLayout* hboxlayout;

    void init_components(void);
    void init_layouts(void);



};

#endif // GAMEWINDOW_H
