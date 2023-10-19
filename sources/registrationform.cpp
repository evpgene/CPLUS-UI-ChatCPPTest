#include "registrationform.h"
#include "ui_registrationform.h"

registrationForm::registrationForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::registrationForm)
{
    ui->setupUi(this);
}

registrationForm::~registrationForm()
{
    delete ui;
}

void registrationForm::on_loginButton_clicked()
{
    emit loginRequested();
}


void registrationForm::on_buttonBox_accepted()
{

}


void registrationForm::on_buttonBox_rejected()
{

}

