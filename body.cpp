#include "body.h"
#include "ui_body.h"

Body::Body(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Body)
{
    ui->setupUi(this);
}

Body::~Body()
{
    delete ui;
}

