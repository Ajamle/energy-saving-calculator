#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Type of energy spender");
    ui->comboBox->addItem("Water pipe");
    ui->comboBox->addItem("Charger");
    ui->comboBox->addItem("TV light");

    ui->comboBox_2->addItem("Time of usage");
    ui->comboBox_2->addItem("30 seconds");
    ui->comboBox_2->addItem("1 minute");
    ui->comboBox_2->addItem("1 hour");
    ui->comboBox_2->addItem("1 day");
    ui->comboBox_2->addItem("1 month");

    ui->comboBox_3->addItem("Average time of saving");
    ui->comboBox_3->addItem("per day");
    ui->comboBox_3->addItem("per week");
    ui->comboBox_3->addItem("per month");
    ui->comboBox_3->addItem("per year");

   ui->comboBox_4->addItem("Price of utilities");
    ui->comboBox_4->addItem("1,17 BAM");
    ui->comboBox_4->addItem("0,71 BAM");
    ui->comboBox_4->addItem("0,37 BAM");
    //price of utilities should be automatically selected once the user chooses option in comboBox1
ui->comboBox_5->addItem("Type of utility changed");

}
ui->setupUi(this);
ui->comboBox_6;
connect(ui->comboBox_6, SIGNAL(currentTextChanged(QString)), this, SLOT(onTypeOfUtilityChanged(QString)));
void Dialog::onTypeOfUtilityChanged(QString type)
{
    qDebug() << "Now the type is... " << type;
}
Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QMessageBox::information(this, "Enter", "This is your saving");
}
