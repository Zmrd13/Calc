#ifndef BODY_H
#define BODY_H

#include <QMainWindow>
#include <cmath>
#include <about.h>
QT_BEGIN_NAMESPACE
namespace Ui { class Body; }
QT_END_NAMESPACE

class Body : public QMainWindow
{
    Q_OBJECT

public:
    Body(QWidget *parent = nullptr);
    ~Body();
private slots:
    void sinA();
    void cosA();
    void copyA();
void copyB();
void copyToA();
void copyToB();
void minus();
void plus();
void div();
void mult();
void showShort();
void clean();

private:
    Ui::Body *ui;
};
#endif // BODY_H
