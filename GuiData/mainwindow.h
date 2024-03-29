#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "form2.h"

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
    void on_btnSave_clicked();

    void on_btnOpenForm2_clicked();
    void slotLnameShow();

private:
    Ui::MainWindow *ui;
    QString fname;
    //esitellään Form2 luokan olio täällä, jotta
    //sen näkyvyysalue on koko luokka eli kaikissa metodeissa
    //päästään käsiksi olioon
    Form2 *objectForm2;
};
#endif // MAINWINDOW_H
