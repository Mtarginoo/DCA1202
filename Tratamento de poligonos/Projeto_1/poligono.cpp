#include <iostream>
#include <stdlib.h>
#include "poligono.h"
#include <cmath>
#include "point.h"
const double PI = 3.14159;

using namespace std;

Poligono::Poligono() {

}

Poligono::Poligono(Point p1, Point p2, Point p3)
{
    contVert = 3;
    vertices[0] = p1;
    vertices[1] = p2;
    vertices[2] = p3;
}

void Poligono::addVertice(Point p)
{
    if (contVert < 100) {
        vertices[contVert] = p;
        contVert++;
    } else {
        cout << "Não eh possivel inserir mais vertices!" << endl;
    }
}

int Poligono::qtdVertice()
{
    return contVert;
}

float Poligono::areaPoligono()
{
    float area = 0.0;
    int j = contVert - 1;
    for (int i = 0; i < contVert; i++) {
        area += (vertices[j].getX() + vertices[i].getX()) * (vertices[j].getY() - vertices[i].getY());
        j = i;
    }
    if (area<0){
        return area*(-1)/2.0;
    }
    else{
        return area/2.0;
    }
}

void Poligono::transladaPol(float a, float b)
{
    for (int i = 0; i < contVert; i++) {
        vertices[i].translada(a, b);
    }
}

void Poligono::imprimePol()
{
    for (int i = 0; i < contVert; i++) {
        cout << "(" << vertices[i].getX() << ", " << vertices[i].getY() << ") -> ";
        if(i == contVert - 1) {
            cout << "(" << vertices[0].getX() << ", " << vertices[0].getY() << ")" << endl;
        }
    }
}

void Poligono::rotacionaPol(float angle, Point P){
    float co = cos(angle*PI/180.0);
    float se = sin(angle*PI/180.0);
    float xEixo, yEixo, xPonto ,yPonto;
    xEixo = P.getX();
    yEixo = P.getY();


    for(int i=0; i<contVert; i++){

        xPonto = vertices[i].getX();
        yPonto = vertices[i].getY();

        if(!(xPonto == xEixo && yPonto == yEixo)){
            vertices[i].setX(xEixo + co*(xPonto - xEixo) - se*(yPonto - yEixo));
            vertices[i].setY(yEixo + se*(xPonto - xEixo) + co*(yPonto - yEixo));
            if(vertices[i].getX()<0.01&&vertices[i].getX()>0){
                vertices[i].setX(0);
            }
            if(vertices[i].getY()<0.01&&vertices[i].getY()){
                vertices[i].setY(0);
            }
        }
    }
}

Point Poligono::centroMassa(){
    float cx=0.0, cy=0.0, x0=0.0, y0=0.0, x1=0.0, y1=0.0;
    float seisArea = 6*areaPoligono();
    Point centro;
    for(int i=0; i<contVert-1; i++){
        x0 = vertices[i].getX();
        y0 = vertices[i].getY(); //ponto atual

        x1 = vertices[i+1].getX();
        y1 = vertices[i+1].getY(); //proximo ponto

        cx += (x0 + x1)*(x0 * y1 - x1 * y0);
        cy += (y0 + y1)*(x0 * y1 - x1 * y0);
    }

    //proxima iteracao deve ser com o primeiro e ultimo ponto: p[numVert-1] e p[0]
    x0 = vertices[contVert-1].getX();
    y0 = vertices[contVert-1].getY();

    x1 = vertices[0].getX();
    y1 = vertices[0].getY();

    cx += (x0 + x1)*(x0 * y1 - x1 * y0);
    cy += (y0 + y1)*(x0 * y1 - x1 * y0);

    cx = cx/seisArea;
    cy = cy/seisArea;
    centro.setXY(cx, cy);
    return centro;
}


