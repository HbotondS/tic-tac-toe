#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void actionnew_game();
    void action_exit();
    void btn_clicked();

private:
    Ui::MainWindow *ui;

    // 0 - PLAYER1
    // 1 - PLAYER2
    int nextPlayer = 1;
};

#endif // MAINWINDOW_H
