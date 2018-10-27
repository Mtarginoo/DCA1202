#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"
#include "screen.h"

class Circulo : public FiguraGeometrica{
private:
    int raio, x, y;
    bool p;
public:
    Circulo(int _x, int _y, int _raio, bool _p);
    void draw(Screen &t);
};

#endif // CIRCULO_H
