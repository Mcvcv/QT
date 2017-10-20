#include "formw.h"
#include "ui_formw.h"

#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <iostream>
#include <string>
#include <QString>
#include <QTableWidget>
#include <QDesktopServices>
#include <QLabel>
#include <QWidgetData>
#include <QTableView>




#include <QSortFilterProxyModel>


Formw::Formw(HWND parent) :
    QWinWidget(parent),
    ui(new Ui::Formw)
{
    ui->setupUi(this);
    model = new QSqlQueryModel;
    db = QSqlDatabase::addDatabase("QSQLITE");
    Dialogs=new QDialog(this);
}

Formw::~Formw()
{
    delete ui;
}
//传输字体
void Formw::setlabel(char* str)
{
    ui->textBrowser_2->setText(str);
}

void Formw::on_open_clicked()
{
//      Dialogs->show();
    QString dataname = QFileDialog::getOpenFileName(this, tr(""),"D:","*db");
    qDebug() << dataname;
    ui->textBrowser->setText(QString(dataname));



    if (!dataname.isEmpty())
    {
        db.setDatabaseName(dataname);
        if(!db.open())
        {
            qDebug() << "Failed to open database.";
        }
        qDebug() << db.isOpen();
        ui->subcase->clear();
        ui->datatype->clear();
        ui->datacompoent->clear();
        ui->layer->clear();
        ui->tableView->show();

        QSqlQuery  query1,query2,query3,query4;


        query1.exec("select distinct Subcase from Element_Subcase");
        while (query1.next())
        {
            ui->subcase->addItem(query1.value(0).toString());
        }
        query2.exec("select distinct DataType from Element_DataType");
        while (query2.next())
        {
            ui->datatype->addItem(query2.value(0).toString());
        }
        query3.exec("select distinct DataComponent from Element_DataComponent");
        while (query3.next())
        {
            ui->datacompoent->addItem(query3.value(0).toString());
        }
        query4.exec("select distinct DataLayer from Element_DataLayer");
        while (query4.next())
        {
            ui->layer->addItem(query4.value(0).toString());
        }

    }

}

void Formw::on_apply_clicked()
{
    QString sub = ui->subcase->currentText();
    QString dt = ui->datatype->currentText();
    QString dc = ui->datacompoent->currentText();
    QString dl = ui->layer->currentText();
    model->setQuery(QString("select * from Element_Result where Subcase=%1 and DataType='%2' and DataComponent='%3' and DataLayer='%4' ").arg(sub).arg(dt).arg(dc).arg(dl));


}

void Formw::on_clear_clicked()
{
    ui->textBrowser->clear();
    ui->subcase->clear();
    ui->datatype->clear();
    ui->datacompoent->clear();
    ui->layer->clear();
    ui->tableView->show();

}

