#include "pl2.h"
#include "ui_pl2.h"

Pl2::Pl2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Pl2)
{
    ui->setupUi(this);
//  для 2 игрока
    double x2 = 0;
    double y2 = 0;
    double z2 = 0;
    double InitialVelocity2=0;
    double Acceleration2=0;
    double EngineLife2 = 0;
    double Roadblock = 0;
    double A = 0;

}

Pl2::~Pl2()
{
    delete ui;
}
