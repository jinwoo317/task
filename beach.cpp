#include "beach_.h"
#include "ui_beach_.h"
#include "database.h"

beach_::beach_(Database db,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::beach_)
    //db(db)
{
    this->db = db;
    ui->setupUi(this);
}

beach_::~beach_()
{
    delete ui;
}

void beach_::on_pushButton_clicked()
{
    sprintf(query, "SELECT * FROM beach");
    sql_query.exec(QString::fromLocal8Bit(query)); // fromLocal8Bit 한글꺠짐 해결 방법
    while(sql_query.next())
    {
       ui->textBrowser->append(sql_query.value(0).toString());

    }
}

void beach_::on_exit_btn_clicked()
{
     this->close();
}
