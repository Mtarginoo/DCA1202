#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <cmath>
#include <QMouseEvent>

#define PI 3.1415

using namespace std;

Plotter::Plotter(QWidget *parent) : QWidget(parent){
    amplitude = 1;
    frequencia = 1;
    angulo = 0;
    // inicia um timer que é repetido a cada 100ms
    timerID = startTimer(100);
    // killTimer(timerID); para o timer;
    //Habilita o rastreio da posição do mouse no componente
    setMouseTracking(true);
}

void Plotter::paintEvent(QPaintEvent *event){
    float y, freq, t;
    int x1,y1,x2,y2;
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    // Brush cor amarela e solida
    brush.setColor(QColor(255, 255, 100));
    brush.setStyle(Qt::SolidPattern);

    // caneta cor vermelha
    pen.setColor(QColor(255, 0, 0));
    pen.setWidth(2);
    // informa ao pintor qual o brush atual
    painter.setBrush(brush);
    // informa ao pintor qual a caneta (pen) atual
    painter.setPen(pen);
    // desenha um retangulo abrangendo toda a extensão do componente
    painter.drawRect(0,0,width(),height());
    // desenha o eixo x na tela
    painter.setBrush(QColor(0, 0, 255));
    painter.setPen(pen);
    painter.drawLine(0, height()/2, width(), height()/2);

    //y = sin(2*PI*freq*t+angulo);

    x1 = 0;
    y1 = height()/2;

    // desenha o seno na tela
    pen.setColor(QColor(0,0,255));
    painter.setPen(pen);

    for(int i=1; i<width(); i++){
        x2 = i;
        y2 = height()/2 *(1-amplitude*sin(2*PI*x2*frequencia/width()+angulo));
        painter.drawLine(x1,y1,x2,y2);
        x1 = x2;
        y1 = y2;
    }

}

void Plotter::timerEvent(QTimerEvent *event)
{
    angulo = angulo + velocidade;
    if(angulo > 2*PI){
        angulo = 0;
    }
    repaint();
}

void Plotter::mousePressEvent(QMouseEvent *event)
{
    emit mudouX(event->x());
    emit mudouY(event->y());
}

void Plotter::mouseMoveEvent(QMouseEvent *event)
{
    emit mudouX(event->x());
    emit mudouY(event->y());
}

void Plotter::setAmplitude(int _amplitude)
{
    amplitude = _amplitude/99.0;
    repaint();
}

void Plotter::setFrequencia(int _frequencia)
{
    frequencia = _frequencia;
    repaint();
}

void Plotter::setVelocidade(int _velocidade)
{
    velocidade = _velocidade/99.0;
    repaint();
}




