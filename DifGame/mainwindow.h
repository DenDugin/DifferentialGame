#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector3D>
#include "pl2.h"

// Test game

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    Pl2 * player2;
    QVector3D pl1;
    QVector3D pl1_end;
    QVector3D pl2;
    QVector3D def;
    QVector3D zero;
    double Epsilon;
    double Acceleration;
    double Acceleration2;
    double EngineLife;

    QList <QVector3D> track;
    ~MainWindow();
    void Solver();
    QVector3D MoveForDefenderToAttaker(QVector3D &defender,QVector3D &atack,double gameTimeStep,double gameTime);

    QVector3D MoveOnMaxRangeForDirection(QVector3D &point, double speed);

    double DistanceToPoint(QVector3D &point);

    void AddPointToTrack(QVector3D &newPoint);

    enum eDirection
    {
        left = -1,
        right = 1
    };

    QList<int>PointOfDefender;

    QVector <int> digits;
    eDirection *directions;
    eDirection *d;
    QList<int> GeneratePermutation();

    double Solver_Kj();
    double  TimeDiscretizationStep();

private:
    Ui::MainWindow *ui;
    bool HasMobileInteger(eDirection *dir, int mobileIndex);
    void SwapIntegerWithAdjacent(eDirection *dir, int index);
    void ChangeDirectionOfLargerThanMobileInteger(eDirection *dir,int mobileValue);

public slots:

  void  PL();

};

#endif // MAINWINDOW_H
