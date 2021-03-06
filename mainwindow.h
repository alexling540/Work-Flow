#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include "appointment.h"
#include "worker.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:

    std::vector<Worker*> workers;
    std::vector<Appointment> appointments;
    std::string filename;
private slots:
    void on_demoButton_clicked();

    void on_closeButton_clicked();

    void on_timetableButton_clicked();

    void on_newAppointmentButton_clicked();

    void on_scheduleButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
