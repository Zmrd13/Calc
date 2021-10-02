#include "body.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Body w;
    w.show();
    return a.exec();
}
