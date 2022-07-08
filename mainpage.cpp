#include "mainpage.h"
#include "ui_mainpage.h"
#include "beach_.h"
#include "ui_beach_.h"
#include "signup.h"
#include "member.h"
#include "database.h"
#include "user.h"

mainpage::mainpage(QString id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainpage),
    id(id)
{
    ui->setupUi(this);
}

mainpage::~mainpage()
{
    delete ui;
}

void mainpage::on_beachPush_clicked()
{
    this->hide();
    beach_ b(db);
    b.setModal(true);
    b.exec();
    this->show();
}

void mainpage::on_userPush_clicked()
{
    this->hide();
    member u(id, db);
    u.setModal(true);
    u.exec();
    this->show();

}
