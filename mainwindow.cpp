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

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(btn_clicked()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(btn_clicked()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(btn_clicked()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(btn_clicked()));
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(btn_clicked()));
    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(btn_clicked()));
    connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(btn_clicked()));
    connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(btn_clicked()));
    connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(btn_clicked()));

    ui->statusBar->showMessage("Current: Player1 | Next: Player2");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::actionnew_game()
{
    ui->statusBar->showMessage("Current: Player1 | Next: Player2");
    ui->pushButton->setText("");
    ui->pushButton_2->setText("");
    ui->pushButton_3->setText("");
    ui->pushButton_4->setText("");
    ui->pushButton_5->setText("");
    ui->pushButton_6->setText("");
    ui->pushButton_7->setText("");
    ui->pushButton_8->setText("");
    ui->pushButton_9->setText("");
}

void MainWindow::action_exit()
{
    this->close();
}

void MainWindow::btn_clicked()
{
    auto button = (QPushButton*)sender();
    if (nextPlayer == 1 && button->text() == "")
    {
        ui->statusBar->showMessage("Current: Player2 | Next: Player1");
        nextPlayer = 0;
        button->setText("X");
    }
    else
    {
        if (nextPlayer == 0 && button->text() == "")
        {
            ui->statusBar->showMessage("Current: Player1 | Next: Player2");
            nextPlayer = 1;
            button->setText("O");
        }
    }
}

