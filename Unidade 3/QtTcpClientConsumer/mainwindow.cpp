#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QColorDialog>
#include <QString>


MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  socket = new QTcpSocket(this);

  connect(ui->pushButtonGet,
          SIGNAL(clicked(bool)),
          this,
          SLOT(getData()));
  connect(ui->pushButtonConnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(tcpConnect()));
  connect(ui->pushButtonDisconnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(tcpDisconnect()));
  connect(ui->listViewIP,
          SIGNAL(itemDoubleClicked(QListWidgetItem*)),
          this,
          SLOT(tcpStartTemp()));
  connect(ui->pushButtonUpdate,
          SIGNAL(clicked(bool)),
          this,
          SLOT(update()));
  connect(clockWizard,
          SIGNAL(timeout()),
          this,
          SLOT(getData()));
  connect(ui->horizontalSliderTiming,
          SIGNAL(valueChanged(int)),
          this,
          SLOT(setIntervalo()));

  ui->labelTiming->setNum(ui->horizontalSliderTiming->value());
  ui->listViewIP->addItem("127.0.0.1");
}

void MainWindow::tcpConnect(){
  socket->connectToHost(ui->lineEditIP->text(),1234);
  if(socket->waitForConnected(3000)){
    qDebug() << "Connected";
  }
  else{
    qDebug() << "Disconnected";
  }
}

void MainWindow::tcpDisconnect(){
    socket->disconnectFromHost();
    if(socket->waitForConnected(3000)){
      qDebug() << "Could not Disconnect";
    }
    else{
      qDebug() << "Disconnected";
      tcpStopTemp();
    }
}

void MainWindow::getData(){
  QString str;
  QByteArray array;
  QStringList list;
  qint64 thetime;
  qDebug() << "to get data...";
  if(socket->state() == QAbstractSocket::ConnectedState){
    if(socket->isOpen()){
      qDebug() << "reading...";
      socket->write("get 127.0.0.1 5\r\n");
      socket->waitForBytesWritten();
      socket->waitForReadyRead();
      qDebug() << socket->bytesAvailable();
      while(socket->bytesAvailable()){
        str = socket->readLine().replace("\n","").replace("\r","");
        list = str.split(" ");
        if(list.size() == 2){
          bool ok;
          str = list.at(0);
          thetime = str.toLongLong(&ok);
          str = list.at(1);
          qDebug() << thetime << ": " << str;
        }
      }
    }
  }
}

void MainWindow::tcpStopTemp(){
    clockWizard->stop();
}

void MainWindow::tcpStartTemp(){
    if(socket->waitForConnected(0)) clockWizard->start(ui->horizontalSliderTiming->value()*1000);
}

void MainWindow::setIntervalo(){
    clockWizard->setInterval(ui->horizontalSliderTiming->value()*1000);
}

void MainWindow::selectIP(QListWidgetItem* item){
    ui->lineEditIP->setText(item->text());
}

void MainWindow::update(){
    QString str = ui->lineEditIP->text();
    if(str != "")  ui->listViewIP->addItem(str);
}
MainWindow::~MainWindow()
{
  delete socket;
  delete ui;
  delete clockWizard;
}
