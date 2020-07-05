#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_point_clicked();

    void on_pushButton_plus_clicked();

    void on_pushButton_sub_clicked();

    void on_pushButton_mult_clicked();

    void on_pushButton_dividion_clicked();

    void on_pushButton_back_clicked();

    void on_pushButton_AC_clicked();


    void on_pushButton_equal_clicked();

private:
    Ui::MainWindow *ui;
    QString str1;
    float arr[3];
    float result;
    char yunsuanfu;
};
#endif // MAINWINDOW_H
