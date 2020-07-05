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


void MainWindow::on_pushButton_1_clicked()
{
    QString str="1";
    str1.append(str);
    ui->lineEdit_input->setText(str1);
}

void MainWindow::on_pushButton_2_clicked()
{
    QString str="2";
    str1.append(str);
    ui->lineEdit_input->setText(str1);
}

void MainWindow::on_pushButton_3_clicked()
{
    QString str="3";
    str1.append(str);
    ui->lineEdit_input->setText(str1);
}

void MainWindow::on_pushButton_4_clicked()
{
    QString str="4";
    str1.append(str);
    ui->lineEdit_input->setText(str1);
}

void MainWindow::on_pushButton_5_clicked()
{
    QString str="5";
    str1.append(str);
    ui->lineEdit_input->setText(str1);
}

void MainWindow::on_pushButton_6_clicked()
{
    QString str="6";
    str1.append(str);
    ui->lineEdit_input->setText(str1);
}

void MainWindow::on_pushButton_7_clicked()
{
    QString str="7";
    str1.append(str);
    ui->lineEdit_input->setText(str1);
}

void MainWindow::on_pushButton_8_clicked()
{
    QString str="8";
    str1.append(str);
    ui->lineEdit_input->setText(str1);
}

void MainWindow::on_pushButton_9_clicked()
{
    QString str="9";
    str1.append(str);
    ui->lineEdit_input->setText(str1);
}

void MainWindow::on_pushButton_0_clicked()
{
    QString str="0";
    str1.append(str);
    ui->lineEdit_input->setText(str1);
}

void MainWindow::on_pushButton_point_clicked()
{
    QString str=".";
    str1.append(str);
    ui->lineEdit_input->setText(str1);
}

void MainWindow::on_pushButton_plus_clicked()
{
    yunsuanfu='+';
    QString str=" + ";
    str1.append(str);
    ui->lineEdit_input->setText(str1);
}

void MainWindow::on_pushButton_sub_clicked()
{
    yunsuanfu='-';
    QString str=" - ";
    str1.append(str);
    ui->lineEdit_input->setText(str1);
}

void MainWindow::on_pushButton_mult_clicked()
{
    yunsuanfu='*';
    QString str=" * ";
    str1.append(str);
    ui->lineEdit_input->setText(str1);
}

void MainWindow::on_pushButton_dividion_clicked()
{
    yunsuanfu='/';
    QString str=" / ";
    str1.append(str);
    ui->lineEdit_input->setText(str1);
}

void MainWindow::on_pushButton_back_clicked()
{
    str1=str1.left(str1.length()-1);
    ui->lineEdit_input->setText(str1);
}

void MainWindow::on_pushButton_AC_clicked()
{
    str1.clear();
    ui->lineEdit_input->clear();
    ui->lineEdit_output->clear();
}

void MainWindow::on_pushButton_equal_clicked()
{
    ui->lineEdit_output->clear();
    QStringList Str_List = str1.split(" ");
    Str_List[0]=Str_List[0].simplified();
    arr[0]=Str_List[0].toDouble();
    Str_List[2]=Str_List[2].simplified();
    arr[1]=Str_List[2].toDouble();
    switch(yunsuanfu)
    {
        case'+':
            result=arr[0]+arr[1];
        break;
        case'-':
            result=arr[0]-arr[1];
        break;
        case'*':
            result=arr[0]*arr[1];
        break;
        case'/':
            if(arr[1]!=0)
                result=arr[0]/arr[2];
            else
                result=0;
        break;
    default:
        break;
    }
    ui->lineEdit_output->setText(tr("%1").arg(result));
    str1.clear();
}
