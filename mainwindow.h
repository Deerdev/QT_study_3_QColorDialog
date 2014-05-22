#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class QAction;
class QLabel;

class MainWindow : public QMainWindow
{
    Q_OBJECT

private slots:
    void open();

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QAction *openAction;
    QLabel *msgLabel;
};

#endif // MAINWINDOW_H
