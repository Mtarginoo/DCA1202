#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"


class Poligono
{
protected:
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
    Point centroMassa();
};

#endif // POLIGONO_H
