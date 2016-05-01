#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Water pipe");
    ui->comboBox->addItem("Charger");
    ui->comboBox->addItem("TV light");

    ui->comboBox_2->addItem("30 seconds");
    ui->comboBox_2->addItem("1 minute");
    ui->comboBox_2->addItem("1 hour");
    ui->comboBox_2->addItem("1 day");
    ui->comboBox_2->addItem("1 month");

    ui->comboBox_3->addItem("per day");
    ui->comboBox_3->addItem("per week");
    ui->comboBox_3->addItem("per month");
    ui->comboBox_3->addItem("per year");

    ui->comboBox_4->addItem("1,17 BAM");
    ui->comboBox_4->addItem("0,71 BAM");
    ui->comboBox_4->addItem("0,37 BAM");
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QMessageBox::information(this, "Enter", "This is your saving");
}
