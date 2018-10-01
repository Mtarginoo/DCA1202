#include "point.h"
#include <cmath>
#include <iostream>
using namespace std;

void Point::setX(float _x){
    x = _x;
}
void Point::setY(float _y){
    y = _y;
}
void Point::setXY(float _x, float _y){
    x = _x;
    y = _y;
}
float Point::getX(void){
    return x;
}
float Point::getY(void){
    return y;
}

Point Point::add(Point p1){
    Point soma;

    soma.x=x+p1.x;
    soma.y=y+p1.y;
    return soma;
}

Point Point::sub(Point p1){
    Point subtracao;

    subtracao.x = x-p1.x;
    subtracao.y = y-p1.y;
    return subtracao;
}

float Point::norma(){
    float a, b, n;
    a = x;
    b = y;
    n = sqrt((a*a)+(b*b));
    return n;

}

void Point::translada(float a, float b){
    x = x+a;
    y = y+b;
}

void Point::imprime(){
    cout<<"("<<x<<", "<<y<<")"<<endl;
}







