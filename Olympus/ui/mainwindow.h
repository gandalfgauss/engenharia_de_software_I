#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../src/lib/system.h"
#include "loginscreen.h"
#include "utility.h"
#include <QtSql>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    void updateBoardMedals();
    void dataBaseToSystem();
private slots:
    void on_login_button_clicked();

    void on_btn_medals_board_clicked();


    void on_btn_filtroCountry_clicked();

    void on_btn_filtroModality_clicked();

private:
    Ui::MainWindow *ui;
    System* system;
    LoginScreen* loginscreen;

};
#endif // MAINWINDOW_H
