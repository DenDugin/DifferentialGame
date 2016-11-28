#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QVector3D>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->menu_2,SIGNAL(aboutToShow()),this,SLOT(PL()));


// для 1 игрока
    // начальная точка первого игрока
    double x = 0;//ui->textBoxXAttacker->text().toDouble();
    double y =0;// ui->textBoxYAttacker->text().toDouble();
    double z = 0;//ui->textBoxZAttacker->text().toDouble();
    double InitialVelocity = 10;//ui->textBoxAttackerSpeed->text().toDouble();
    double Acceleration = 2;//ui->textBoxAttackerBoost->text().toDouble();
    double EngineLife = 40;//ui->textBoxAttackerMaxTime->text().toDouble();

    // конечная точка первого игрока
    double xx = 30;//ui->textBoxXProtect->text().toDouble();
    double yy = 0;//ui->textBoxYProtect->text().toDouble();
    double zz = 0;//ui->textBoxZProtect->text().toDouble();
    double TypeMovObj = ui->textBoxFeatureBetaK->text().toDouble();
    //double bk = ui->textBoxFeatureBk->text().toDouble();

    double Epsilon = 1;


    //  для 2 игрока
        double x2 = 0; // usless
        double y2 = 0; // usless
        double z2 = 0; // usless
        double InitialVelocity2=10;
        double Acceleration2=2;
        double EngineLife2 = 99999; // usless
        double Roadblock = 5;
        double A = 1;


     // пункты защиты
        double x3 = 0;
        double y3 = 30;
        double z3 = 0;

        digits.push_back(1);



    //  MainCalculationsAlghoritmSecond

// создаем списки из классов атакующих, обороняющихся и пунктов защиты

//  var game = new GameMovableObjects<MovableDefenderPlayer>(inputData);



}

void MainWindow::Solver()
{
struct param // для 2 игрока
{
 int N; // количество единиц защиты игрока 2
 int Q; // Определяет количество позиций куда игрока 2 может разместить свои посты защиты
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



//std::list<int> row;


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
