#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QPushButton"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void game_over(QList<QPushButton*> list);

private slots:
    void actionnew_game();
    void action_exit();
    void btn_clicked();
    void game_over_msg(QList<QPushButton*> list);

private:
    Ui::MainWindow *ui;

    // 0 - PLAYER1
    // 1 - PLAYER2
    int nextPlayer = 1;
    int clickcount = 0;
};

#endif // MAINWINDOW_H
