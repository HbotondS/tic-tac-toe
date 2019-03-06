#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actionnew_game, SIGNAL(triggered()), this, SLOT(actionnew_game()));
    connect(ui->actionexit, SIGNAL(triggered()), this, SLOT(action_exit()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::actionnew_game()
{
    qDebug() << "test";
}

void MainWindow::action_exit()
{
    this->close();
}

