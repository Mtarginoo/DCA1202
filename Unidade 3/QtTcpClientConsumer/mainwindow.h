#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QWidget>
#include <QTimer>
#include <QListWidget>

namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
  

public slots:
  void getData();
  void tcpConnect();
  void tcpDisconnect();
  void tcpStartTemp();
  void tcpStopTemp();
  void update();
  void selectIP(QListWidgetItem *item);
  void setIntervalo();



private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  QTimer *clockWizard = new QTimer(this);
  int dados[20];

};

#endif // MAINWINDOW_H
