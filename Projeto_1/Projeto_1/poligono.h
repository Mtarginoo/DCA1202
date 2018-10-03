#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"
#include <cmath>
#define PI  M_PI

class Poligono
{
private:
    int contVert;
    Point vertices[100];
public:
    Poligono();
    Poligono(Point, Point, Point);
    void addVertice(Point);
    int qtdVertice();
    float areaPoligono();
    void transladaPol(float, float);
    void imprimePol();
    void rotacionaPol(float, Point);

};

#endif // POLIGONO_H

