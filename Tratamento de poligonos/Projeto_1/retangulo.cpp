#include "retangulo.h"
#include "point.h"
#include "poligono.h"

Retangulo::Retangulo(float x, float y, float largura, float altura)
{
    contVert = 4;
    Point p[4];
    p[0].setXY(x, y);
    p[1].setXY(x, y - altura);
    p[2].setXY(x + largura, y - altura);
    p[3].setXY(x + largura, y);
    for (int i = 0; i < contVert; i++) {
        vertices[i] = p[i];
    }
}
