#ifndef BODY_H
#define BODY_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Body; }
QT_END_NAMESPACE

class Body : public QMainWindow
{
    Q_OBJECT

public:
    Body(QWidget *parent = nullptr);
    ~Body();

private:
    Ui::Body *ui;
};
#endif // BODY_H
