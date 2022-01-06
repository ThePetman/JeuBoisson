#include "Error in " Util.relativeFilePath('C:/Users/PC d'Adrien/Documents/ESEO/I2/Qt/mainwindow.h', 'C:/Users/PC d'Adrien/Documents/ESEO/I2/Qt' + '/' + Util.path('mainwindow.cpp'))": SyntaxError: Expected token `)'"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

