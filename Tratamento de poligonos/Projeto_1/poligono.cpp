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



void Poligono::rotacionaPol(float ang, Point p){

    ang = (ang*M_PI)/180;
    float novoX, novoY;
    for(int i=0;i<contVert;i++){
        novoX = p.getX() + (vertices[i].getX() - p.getX()) * cos(ang) - (vertices[i].getY() - p.getY())*sin(ang);
        novoY = p.getY() + (vertices[i].getX() - p.getX())*sin(ang) + (vertices[i].getY() - p.getY())*cos(ang);
        vertices[i].setXY(novoX, novoY);
    }
}

Point Poligono::centroMassa(){
    float cx=0.0, cy=0.0, x0=0.0, y0=0.0, x1=0.0, y1=0.0;
    float seisArea = 6*areaPoligono();
    Point centro;
    for(int i=0; i<contVert-1; i++){
        x0 = vertices[i].getX();
        y0 = vertices[i].getY();

        x1 = vertices[i+1].getX();
        y1 = vertices[i+1].getY();

        cx += (x0 + x1)*(x0 * y1 - x1 * y0);
        cy += (y0 + y1)*(x0 * y1 - x1 * y0);
    }


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


