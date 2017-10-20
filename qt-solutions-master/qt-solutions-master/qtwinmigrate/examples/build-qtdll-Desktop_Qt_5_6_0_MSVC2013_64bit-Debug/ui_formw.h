/********************************************************************************
** Form generated from reading UI file 'formw.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMW_H
#define UI_FORMW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Formw
{
public:
    QFormLayout *formLayout;
    QPushButton *open;
    QTextBrowser *textBrowser;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QComboBox *subcase;
    QComboBox *datatype;
    QComboBox *datacompoent;
    QComboBox *layer;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_2;
    QPushButton *apply;
    QPushButton *clear;
    QPushButton *pushButton_4;
    QTableView *tableView;
    QTextBrowser *textBrowser_2;

    void setupUi(QWidget *Formw)
    {
        if (Formw->objectName().isEmpty())
            Formw->setObjectName(QStringLiteral("Formw"));
        Formw->resize(541, 404);
        Formw->setContextMenuPolicy(Qt::PreventContextMenu);
        formLayout = new QFormLayout(Formw);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        open = new QPushButton(Formw);
        open->setObjectName(QStringLiteral("open"));

        formLayout->setWidget(0, QFormLayout::LabelRole, open);

        textBrowser = new QTextBrowser(Formw);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        formLayout->setWidget(0, QFormLayout::FieldRole, textBrowser);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(Formw);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        label_4 = new QLabel(Formw);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_3->addWidget(label_4);

        label_3 = new QLabel(Formw);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        label = new QLabel(Formw);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_3->addWidget(label);


        formLayout->setLayout(1, QFormLayout::LabelRole, verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        subcase = new QComboBox(Formw);
        subcase->setObjectName(QStringLiteral("subcase"));

        verticalLayout->addWidget(subcase);

        datatype = new QComboBox(Formw);
        datatype->setObjectName(QStringLiteral("datatype"));

        verticalLayout->addWidget(datatype);

        datacompoent = new QComboBox(Formw);
        datacompoent->setObjectName(QStringLiteral("datacompoent"));

        verticalLayout->addWidget(datacompoent);

        layer = new QComboBox(Formw);
        layer->setObjectName(QStringLiteral("layer"));

        verticalLayout->addWidget(layer);


        formLayout->setLayout(1, QFormLayout::FieldRole, verticalLayout);

        pushButton = new QPushButton(Formw);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButton);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        apply = new QPushButton(Formw);
        apply->setObjectName(QStringLiteral("apply"));

        verticalLayout_2->addWidget(apply);

        clear = new QPushButton(Formw);
        clear->setObjectName(QStringLiteral("clear"));

        verticalLayout_2->addWidget(clear);

        pushButton_4 = new QPushButton(Formw);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout_2->addWidget(pushButton_4);


        formLayout->setLayout(2, QFormLayout::FieldRole, verticalLayout_2);

        tableView = new QTableView(Formw);
        tableView->setObjectName(QStringLiteral("tableView"));

        formLayout->setWidget(3, QFormLayout::FieldRole, tableView);

        textBrowser_2 = new QTextBrowser(Formw);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));

        formLayout->setWidget(4, QFormLayout::FieldRole, textBrowser_2);


        retranslateUi(Formw);

        QMetaObject::connectSlotsByName(Formw);
    } // setupUi

    void retranslateUi(QWidget *Formw)
    {
        Formw->setWindowTitle(QApplication::translate("Formw", "Form", 0));
        open->setText(QApplication::translate("Formw", "Open", 0));
        label_2->setText(QApplication::translate("Formw", "Subcase", 0));
        label_4->setText(QApplication::translate("Formw", "Datatype", 0));
        label_3->setText(QApplication::translate("Formw", "Datacompoent", 0));
        label->setText(QApplication::translate("Formw", "layer", 0));
        pushButton->setText(QApplication::translate("Formw", "PushButton", 0));
        apply->setText(QApplication::translate("Formw", "apply", 0));
        clear->setText(QApplication::translate("Formw", "clear", 0));
        pushButton_4->setText(QApplication::translate("Formw", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class Formw: public Ui_Formw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMW_H
