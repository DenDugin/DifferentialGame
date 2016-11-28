#ifndef PL2_H
#define PL2_H

#include <QWidget>

namespace Ui {
class Pl2;
}

class Pl2 : public QWidget
{
    Q_OBJECT

public:
    /*explicit*/ Pl2(QWidget *parent = 0);
    ~Pl2();

private:
    Ui::Pl2 *ui;
};

#endif // PL2_H
