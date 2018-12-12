#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QWidget>
#include <QTimer>
#include <QListWidgetItem>

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
    /**
   * @brief getData Método usado para receber os dados do servidor
   */
  void getData();
  /**
   * @brief tcpConnect Método usado para conectar o cliente consumidor ao servidor com o endereço fornecido pelo usuário
   */
  void tcpConnect();
  /**
   * @brief tcpDisconnect Método usado para desconectar o cliente consumidor do servidor
   */
  void tcpDisconnect();
  /**
   * @brief tcpStartTemp Método que serve para iniciar o temporizador usado na aquisição dos dados
   */
  void tcpStartTemp();
  /**
   * @brief tcpStopTemp Método que serve para iniciar o temporizador usado na aquisição dos dados
   */
  void tcpStopTemp();
  /**
   * @brief update Método que serve para atualizar a listas de endereços IP disponíveis para conectar com o cliente consumidor
   */
  void update();
  /**
   * @brief selectIP Método que serve para que o usuário indique o endereço a ser conectado pelo cliente consumidor
   * @param item ponteiro que aponta para o IP a ser passado
   */
  void selectIP(QListWidgetItem *item);
  /**
   * @brief setIntervalo Método que serve para que o usuário insira um intervalo em que os dados sejam plotados na tela
   */
  void setIntervalo();



private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  QTimer *clockWizard = new QTimer(this);
  QList <int> dados;
  //int dados[20];

};

#endif // MAINWINDOW_H
