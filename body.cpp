#include "body.h"
#include "ui_body.h"



Body::Body(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Body)
{
    ui->setupUi(this);
    connect(ui->copyAButton,SIGNAL(clicked()),SLOT(copyA()));
    connect(ui->copyBButton,SIGNAL(clicked()),SLOT(copyB()));
    connect(ui->copyToAButton,SIGNAL(clicked()),SLOT(copyToA()));
    connect(ui->copyToBButton,SIGNAL(clicked()),SLOT(copyToB()));
}

Body::~Body()
{
    delete ui;
}

void Body::sinButton(){

}

void Body::copyA(){
    ui->answerText->setPlainText(ui->textEdit->toPlainText());
}
void Body::copyB(){
    ui->answerText->setPlainText(ui->textEdit_2->toPlainText());
}
void Body::copyToA(){
    ui->textEdit->setPlainText(ui->answerText->toPlainText());
}
void Body::copyToB(){
    ui->textEdit_2->setPlainText(ui->answerText->toPlainText());
}
