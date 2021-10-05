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
    connect(ui->sinButton,SIGNAL(clicked()),SLOT(sinA()));
    connect(ui->cosButton,SIGNAL(clicked()),SLOT(cosA()));
    connect(ui->minusButton,SIGNAL(clicked()),SLOT(minus()));
    connect(ui->divButton,SIGNAL(clicked()),SLOT(div()));
    connect(ui->plusButton,SIGNAL(clicked()),SLOT(plus()));
    connect(ui->multButton,SIGNAL(clicked()),SLOT(mult()));
}

Body::~Body()
{
    delete ui;
}

void Body::sinA(){
    if(ui->textEdit->toPlainText()==""){
        ui->answerText->setPlainText("A is empty");
        return;
    }
    double temp=sin(ui->textEdit->toPlainText().toDouble());

    ui->answerText->setPlainText(QString::number(temp));
}
void Body::cosA(){
    if(ui->textEdit->toPlainText()==""){
        ui->answerText->setPlainText("A is empty");
        return;
    }
    double temp=cos(ui->textEdit->toPlainText().toDouble());
    ui->answerText->setPlainText(QString::number(temp));
}
void Body::minus(){
    if(ui->textEdit->toPlainText()==""){
        ui->answerText->setPlainText("A is empty");
        return;
    }
    if(ui->textEdit_2->toPlainText()==""){
        ui->answerText->setPlainText("B is empty");
        return;
    }
    double temp=(ui->textEdit->toPlainText().toDouble())-(ui->textEdit_2->toPlainText().toDouble());
    ui->answerText->setPlainText(QString::number(temp));
}
void Body::plus(){
    if(ui->textEdit->toPlainText()==""){
        ui->answerText->setPlainText("A is empty");
        return;
    }
    if(ui->textEdit_2->toPlainText()==""){
        ui->answerText->setPlainText("B is empty");
        return;
    }
    double temp=(ui->textEdit->toPlainText().toDouble())+(ui->textEdit_2->toPlainText().toDouble());
    ui->answerText->setPlainText(QString::number(temp));
}
void Body::div(){
    if(ui->textEdit->toPlainText()==""){
        ui->answerText->setPlainText("A is empty");
        return;
    }
    if(ui->textEdit_2->toPlainText()==""){
        ui->answerText->setPlainText("B is empty");
        return;
    }
    double temp=(ui->textEdit->toPlainText().toDouble())/(ui->textEdit_2->toPlainText().toDouble());
    ui->answerText->setPlainText(QString::number(temp));
}
void Body::mult(){
    if(ui->textEdit->toPlainText()==""){
        ui->answerText->setPlainText("A is empty");
        return;
    }
    if(ui->textEdit_2->toPlainText()==""){
        ui->answerText->setPlainText("B is empty");
        return;
    }
    double temp=(ui->textEdit->toPlainText().toDouble())*(ui->textEdit_2->toPlainText().toDouble());
    ui->answerText->setPlainText(QString::number(temp));
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
