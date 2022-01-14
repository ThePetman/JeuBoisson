#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QWidget* centre;
    QWidget* gauche;
    QWidget* droite;
    QWidget* haut;
    QWidget* milieu;
    QHBoxLayout* hboxlayout;
    QVBoxLayout* vboxlayout;
    QFormLayout* formlayout;
    QPushButton* jouer;
    QPushButton* ajouter;
    QLineEdit* nom;
    QLineEdit* sexe;

    void init_components(void);
    void init_layouts(void);





};
#endif // MAINWINDOW_H
