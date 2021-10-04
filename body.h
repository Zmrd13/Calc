#ifndef BODY_H
#define BODY_H

#include <QMainWindow>
#include <cmath>
QT_BEGIN_NAMESPACE
namespace Ui { class Body; }
QT_END_NAMESPACE

class Body : public QMainWindow
{
    Q_OBJECT

public:
    Body(QWidget *parent = nullptr);
    ~Body();
public slots:
    void sinButton();
    void copyA();
void copyB();
void copyToA();
void copyToB();

private:
    Ui::Body *ui;
};
#endif // BODY_H
