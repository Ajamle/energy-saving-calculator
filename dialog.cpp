#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Water pipe");
    ui->comboBox->addItem("Charger");
    ui->comboBox->addItem("TV light");
}
ui(new Ui::Dialog)
{
ui->setupUi(this);
ui->comboBox->addItem("30 seconds");
ui->comboBox->addItem("1 minute");
ui->comboBox->addItem("1 hour");
ui->comboBox->addItem("1 day");
ui->comboBox->addItem("1 month");
}
ui(new Ui::Dialog)
{
ui->setupUi(this);
ui->comboBox->addItem("per day");
ui->comboBox->addItem("per week");
ui->comboBox->addItem("per month");
ui->comboBox->addItem("per year");
}
Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QMessageBox::information(this, "1,17 BAM",
                             "0,71 BAM"
                             "0,37 BAM");
}
