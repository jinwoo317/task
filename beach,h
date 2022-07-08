#ifndef BEACH__H
#define BEACH__H

#include <QWidget>
#include <QDialog>
#include <iostream>
#include <string>
#include "database.h"

QT_BEGIN_NAMESPACE
namespace Ui { class beach_; }
QT_END_NAMESPACE

class beach_ : public QDialog
{
    Q_OBJECT

public:
    explicit beach_(Database db, QWidget *parent = nullptr);
    ~beach_();

private slots:
    void on_pushButton_clicked();

    void on_exit_btn_clicked();

private:
    Ui::beach_ *ui;
    Database db;
    QSqlQuery sql_query;
    char query[1024];
};

#endif // BEACH__H
