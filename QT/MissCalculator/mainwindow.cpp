#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int firstNum, secondNum, result;

void MainWindow::on_addButton_clicked()
{
    firstNum =ui->txtfirstnum->text().toInt();
    secondNum =ui->secondnum->text().toInt();
    result=firstNum + secondNum;
    ui->answerbox->setText(QString::number(result));
}


void MainWindow::on_pushButton_4_clicked()
{
    firstNum =ui->txtfirstnum->text().toInt();
    secondNum =ui->secondnum->text().toInt();
    result=firstNum - secondNum;
    ui->answerbox->setText(QString::number(result));
}


void MainWindow::on_multiplyButton_3_clicked()
{
    firstNum =ui->txtfirstnum->text().toInt();
    secondNum =ui->secondnum->text().toInt();
    result=firstNum * secondNum;
    ui->answerbox->setText(QString::number(result));

}


void MainWindow::on_divideButton_2_clicked()
{
    firstNum =ui->txtfirstnum->text().toInt();
    secondNum =ui->secondnum->text().toInt();
    result=firstNum / secondNum;
    ui->answerbox->setText(QString::number(result));
}

