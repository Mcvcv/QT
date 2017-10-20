#ifndef FORMW_H
#define FORMW_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QWinWidget>
#include <QDialog>

#include <QSortFilterProxyModel>

#include <QHBoxLayout>

namespace Ui {
class Formw;
}

class Formw : public QWinWidget
{
    Q_OBJECT

public:
    explicit Formw(HWND parent);
    ~Formw();
    void setlabel(char* str);


private slots:
    void on_open_clicked();

    void on_apply_clicked();

    void on_clear_clicked();

private:
    Ui::Formw *ui;
    QSqlQueryModel *model;
    QSqlDatabase db;
    QSqlQuery query;
    QDialog *Dialogs;



};

#endif // FORMW_H
