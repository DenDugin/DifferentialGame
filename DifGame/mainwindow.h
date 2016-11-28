#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "pl2.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    Pl2 * player2;
    ~MainWindow();
    void Solver();
    enum eDirection
    {
        left = -1,
        right = 1
    };

    QList<int>PointOfDefender;

    QVector <int> digits;
    eDirection *directions;
    QList<int> GeneratePermutation();


private:
    Ui::MainWindow *ui;
    bool HasMobileInteger(eDirection *dir, int mobileIndex);
    void SwapIntegerWithAdjacent(eDirection *dir, int index);
    void ChangeDirectionOfLargerThanMobileInteger(eDirection *dir,int mobileValue);

public slots:

  void  PL();

};

#endif // MAINWINDOW_H
