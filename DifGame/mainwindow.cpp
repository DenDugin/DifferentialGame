#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QVector3D>
#include <qmath.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->menu_2,SIGNAL(aboutToShow()),this,SLOT(PL()));


    // для 1 игрока
    // начальная точка первого игрока - Атакующего
    double x = 0;//ui->textBoxXAttacker->text().toDouble();
    double y =0;// ui->textBoxYAttacker->text().toDouble();
    double z = 0;//ui->textBoxZAttacker->text().toDouble();
    pl1 = {0,0,0};

    double InitialVelocity = 10;//ui->textBoxAttackerSpeed->text().toDouble();
    Acceleration = 2;//ui->textBoxAttackerBoost->text().toDouble();
    EngineLife = 40;//ui->textBoxAttackerMaxTime->text().toDouble();

    pl1_end = {30,0,0};

    // конечная точка первого игрока
    double xx = 30;//ui->textBoxXProtect->text().toDouble();
    double yy = 0;//ui->textBoxYProtect->text().toDouble();
    double zz = 0;//ui->textBoxZProtect->text().toDouble();
    double TypeMovObj = ui->textBoxFeatureBetaK->text().toDouble();
    //double bk = ui->textBoxFeatureBk->text().toDouble();
     Epsilon = 1.0;


    //  для 2 игрока  - Защищающиеся игроки
     double x2 = 0; // usless
     double y2 = 0; // usless
     double z2 = 0; // usless
     double InitialVelocity2=10;
     Acceleration2=2;
     double EngineLife2 = INT_MAX;//99999; // usless
     double Roadblock = 5;
     double A = 1;


     // пункты защиты
     double x3 = 0;
     double y3 = 30;
     double z3 = 0;

     def = {0,30,0};

     digits.push_back(1);

     // start

     double timeDiscretization =  TimeDiscretizationStep();

     for (int v=1; v * timeDiscretization <= EngineLife; v++)
     {
     QVector3D point;
     point.isNull();
     double lambda1 = INT_MAX;
     double lambda2 = INT_MAX;

     MoveForDefenderToAttaker(def,pl1,timeDiscretization,v*timeDiscretization);
     AddPointToTrack(def);

     // в этом алгоритме мы просто смотрим нет ли рядом оборонителя


     }



//  MainCalculationsAlghoritmSecond
//  создаем списки из классов атакующих, обороняющихся и пунктов защиты
//  var game = new GameMovableObjects<MovableDefenderPlayer>(inputData);
}

QVector3D MainWindow::MoveForDefenderToAttaker(QVector3D &defender, QVector3D &atack, double gameTimeStep, double gameTime)
{
double rangeCanMove = Acceleration2 * gameTimeStep * gameTimeStep / 2.0;

if (atack.distanceToPoint(defender) < 0.1)  return atack;

return MoveOnMaxRangeForDirection(atack,rangeCanMove);

}

QVector3D MainWindow::MoveOnMaxRangeForDirection(QVector3D &point, double speed)
{
    double dist = speed / DistanceToPoint(point);
    zero.setX((zero.x() - point.x()) * dist); // ?? zero ??
    zero.setY((zero.y() - point.y()) * dist);
    zero.setZ((zero.z() - point.z()) * dist);
    return point;
}


double MainWindow::DistanceToPoint(QVector3D &point)
{
 return sqrt(pow(zero.x() - point.x(), 2.0) + pow(zero.y() - point.y(), 2.0) + pow(zero.z() - point.z(), 2.0));
}


void MainWindow::AddPointToTrack(QVector3D &newPoint)
{
track.push_back(newPoint);
}


void MainWindow::Solver()
{
struct param // для 2 игрока
{
 int N = 1; // количество единиц защиты игрока 2
 int Q = 1; // Определяет количество позиций куда игрока 2 может разместить свои посты защиты
};

param Param;

QVector3D Roadblock2;
Roadblock2.setX(111);
Roadblock2.setY(222);
Roadblock2.setZ(333);
qDebug()<<Roadblock2;



// public Permutations(int digitCount, int offset = 1)
int offset = 1;
//QVector <int> digits;// = Число пунктов защиты
for (int index = 0; index < digits.count(); index++)
     digits[index] = index + offset;



foreach (int row, GeneratePermutation().toStdList()) {  // to list ??
    int tempObjectPlayer2 = 0;
    for (int i = 0; i < GeneratePermutation().size(); i++) // row.size??
    {
     if (row > Param.N)
     continue;
    // Param.PointOfDefender[tempObjectPlayer2++].SetRoadblock(Param.PointRoadblock[i].Coordinate);
    }

}



 // GeneratePermutation();

}
QList<int> MainWindow::GeneratePermutation()
{
directions = (new eDirection[digits.length()]());
for (int index = 0; index < digits.length(); index++)
directions[index] = left;


qSort(digits);

return digits.toList();
int mobileIndex;
while (HasMobileInteger(directions,mobileIndex))
{
int mobileValue = digits[mobileIndex];

SwapIntegerWithAdjacent(directions, mobileIndex);

//return digits.toList(); to do function

return digits.toList();

ChangeDirectionOfLargerThanMobileInteger(directions, mobileValue);
}


}




bool MainWindow::HasMobileInteger(eDirection *dir, int mobileIndex)
{
dir = (new eDirection[digits.length()]());
int largestValue = INT_MIN;
mobileIndex = -1;

for (int index = 0; index < digits.length(); index++)
{
if ((index == 0) && (dir[index] == right))
continue;


if ((index == (digits.length() - 1)) && (dir[index] == right))
break;

if (digits[index + (int)dir[index]] < digits[index])
{
    if (digits[index] > largestValue)
    {
        largestValue = digits[index];
        mobileIndex = index;
    }
}
return mobileIndex > -1;
}
}

void MainWindow::SwapIntegerWithAdjacent(eDirection *dir, int index)
{
dir = (new eDirection[digits.length()]());

eDirection tempDirection = dir[index]; // index ??
int tempValue = digits[index];

dir[index] = dir[index + (int)tempDirection];
digits[index] = digits[index + (int)tempDirection];

dir[index + (int)tempDirection] = tempDirection;
digits[index + (int)tempDirection] = tempValue;


}

void MainWindow::ChangeDirectionOfLargerThanMobileInteger(eDirection *dir, int mobileValue)
{
dir = (new eDirection[digits.length()]());

for (int index = 0; index < digits.length(); index++)
{
    if (digits[index] > mobileValue)
        dir[index] = (eDirection)(0 - (int)dir[index]);
}
}

double MainWindow::Solver_Kj()
{
 QList<double> Kj;

 /// ....

double timeDiscretization =  TimeDiscretizationStep();

for (int v=1; v * timeDiscretization <= EngineLife; v++)
{
QVector3D point;
point.isNull();
double lambda1 = INT_MAX;
double lambda2 = INT_MAX;

// передвинуть защищающегося игролка к атакующему
// <returns>точка куда передвинули защищаемого игрока</returns>
//foreach (var, container) {
//...



}


}

double MainWindow::TimeDiscretizationStep()
{

 //=2.0*epsilos / (ускорение защищ


double res = sqrt(2.0*Epsilon/(2));

return res;
// return Math.Sqrt(2.0 * Param.AccuracyTrajectory /
//                   (Param.PointOfAttack.Select(z => z.Acceleration)
//                   .Concat(Param.PointOfDefender.Select(e => e.Acceleration))
//                   .Max()));

}


void MainWindow :: PL()
{
  player2 = new Pl2;

  player2->show();

  // для  2 игрока

}

MainWindow::~MainWindow()
{
    delete ui;
}
