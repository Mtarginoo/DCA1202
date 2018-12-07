#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QTimer>
#include <QString>

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
   * @brief putData Método responsável por fazer o envio dos dados aleatórios gerados pela aplicação.
   */
  void putData();
  /**
   * @brief tcpConnect Método responsável por realizar a conexão entre o cliente produtor e o servidor, de acordo com o endereço fornecido.
   */
  void tcpConnect();
  /**
   * @brief disconTcp Método responsável por finalizar a conexão entre o cliente produtor e o servidor.
   */
  void disconTcp();
  /**
   * @brief setIntervalo Método responsável por permitir que o usuário insira uma faixa de valores a serem gereados aleatoriamente pela aplicação.
   */
  void setIntervalo();
  /**
   * @brief startTemp Método responsável por inicializar a contagem da variável Temp.
   */
  void startTemp();
  /**
   * @brief stopTemp Método responsável por finalizar a contagem da variável Temp.
   */
  void stopTemp();


private:
  /**
   * @brief ui Ponteiro para acesso de componentes da classe MainWindow.
   */
  Ui::MainWindow *ui;
  /**
   * @brief socket Ponteiro para o endereço de IP.
   */
  QTcpSocket *socket;
  /**
   * @brief temp temporizador
   */
  QTimer *temp = new QTimer(this);
  /**
   * @brief dados Variável para armazenamento da String passada no endereço de IP.
   */
  QString dados;
  void atualizaDados(QString s);

};

#endif // MAINWINDOW_H
