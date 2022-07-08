#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QDialog>
#include "beach_.h"
#include "database.h"

namespace Ui {
class mainpage;
}

class mainpage : public QDialog
{
    Q_OBJECT

public:
    explicit mainpage(QString id, QWidget *parent = nullptr);
    ~mainpage();

private slots:
    void on_beachPush_clicked();

    void on_userPush_clicked();

private:
    Ui::mainpage *ui;
    Database db;
    QString id;
    QSqlQuery sql_query;
    char query[1024];
};

#endif // MAINPAGE_H
