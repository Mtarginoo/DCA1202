#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QScrollBar>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
    socket = new QTcpSocket(this);

    connect(ui->pushButtonConnect,
            SIGNAL(clicked(bool)),
            this,
            SLOT(tcpConnect()));
    connect(ui->pushButtonDisconnect,
            SIGNAL(clicked(bool)),
            this,
            SLOT(disconTcp()));
    connect(ui->horizontalSliderTimming,
            SIGNAL(valueChanged(int)),
            this,
            SLOT(setIntervalo()));
    connect(ui->pushButtonStart,
            SIGNAL(clicked(bool)),
            this,
            SLOT(startTemp()));
    connect(temp,
            SIGNAL(timeout()),
            this,
            SLOT(putData()));
    connect(ui->pushButtonStop,
            SIGNAL(clicked(bool)),
            this,
            SLOT(stopTemp()));
}

void MainWindow::tcpConnect(){
    socket->connectToHost(ui->lineEditIP->text(), 1234);
    if(socket->waitForConnected(3000)){
        qDebug() << "Connected";
        atualizaDados("Connected\n");
    }
    else{
        qDebug() << "Disconnected";
        atualizaDados("Disconnected\n");
    }
}

void MainWindow::disconTcp()
{
    socket->disconnectFromHost();
    if(socket->waitForConnected(3000)){
        atualizaDados("Connected\n");
        qDebug() << "Connected";
    }
    else{
        atualizaDados("Disconnected\n");
        qDebug() << "Disconnect";
    }
    temp ->stop();
}

void MainWindow::setIntervalo(){
    temp->setInterval(ui->horizontalSliderTimming->value()*1000);
}

void MainWindow::atualizaDados(QString s){
    dados.append(s);
    ui->textBrowser->setText(dados);
    QScrollBar *qsb = ui->textBrowser->verticalScrollBar();
    qsb->setValue(qsb->maximum());
}

void MainWindow::putData(){
    QDateTime date;
    QString s;
    if(socket->state() == QAbstractSocket::ConnectedState){
        int min = ui->horizontalSliderMin->value();
        int max = ui->horizontalSliderMax->value();

        if(max < min){
            int aux = min;
            min = max;
            max = aux;
        }

        date = QDateTime::currentDateTime();
        s = "set" +
                date.toString(Qt::ISODate) +
                " " +
                QString::number((qrand()%(1+max-min)) + min) + "\r\n";

    }

    atualizaDados(s);

    qDebug() <<s;
    qDebug()<<socket->write(s.toStdString().c_str()) << " bytes writen";
    if(socket->waitForBytesWritten(3000)){
        qDebug() << "wrote";
    }
}

void MainWindow::startTemp(){
    if(socket->waitForConnected(0)){
        temp->start(ui->horizontalSliderTimming->value()*1000);
    }
}

void MainWindow::stopTemp(){
    temp->stop();
}



MainWindow::~MainWindow(){
    delete socket;
    delete ui;
    delete temp;
}
