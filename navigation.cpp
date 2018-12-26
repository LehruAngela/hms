#include "navigation.h"
#include "ui_navigation.h"
#include "dialog.h"
#include <QtSql>
#include "receiptionist.h"
#include "doctor.h"
#include "laboratory.h"
#include "pharmacy.h"
#include "cashier.h"
#include "invoice.h"
#include "appointments.h"
#include <QAction>
#include <QActionEvent>
#include "triage.h"
#include "admin.h"
#include "searchpatient.h"
#include "appointment_receptionist.h"
#include "pharmacy_newstock.h"

Navigation::Navigation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Navigation)
{
    ui->setupUi(this);

    QPixmap bkgnd("/home/zeus/hms/Images/hms3.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

Navigation::~Navigation()
{
    delete ui;
}


void Navigation::on_pushButton_clicked()
{
    SearchPatient mySP;
    mySP.setModal(true);
    mySP.exec();
}

void Navigation::on_pushButton_2_clicked()
{
    Doctor myDoc;
    myDoc.setModal(true);
    myDoc.exec();
}

void Navigation::on_pushButton_3_clicked()
{
    Triage myTr;
    myTr.setModal(true);
    myTr.exec();
}

void Navigation::on_pushButton_4_clicked()
{
    Laboratory myLab;
    myLab.setModal(true);
    myLab.exec();
}

void Navigation::on_pushButton_5_clicked()
{
    Pharmacy myPharm;
    myPharm.setModal(true);
    myPharm.exec();
}

void Navigation::on_pushButton_6_clicked()
{
    Cashier myCash;
    myCash.setModal(true);
    myCash.exec();
}

void Navigation::on_pushButton_7_clicked()
{
    Invoice myInv;
    myInv.setModal(true);
    myInv.exec();
}

void Navigation::on_pushButton_8_clicked()
{
    Appointment_receptionist myAppoint;
    myAppoint.setModal(true);
    myAppoint.exec();
}

void Navigation::on_pushButton_10_clicked()
{
    this->hide();
    Admin myAd;
    myAd.setModal(true);
    myAd.exec();

}

void Navigation::on_pushButton_11_clicked()
{
    this->hide();
    Dialog myAd;
    myAd.setModal(true);
    myAd.exec();
}

void Navigation::on_pushButton_9_clicked()
{
    Pharmacy_newstock myPharm;
    myPharm.setModal(true);
    myPharm.exec();
}
