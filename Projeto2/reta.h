#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"
#include "screen.h"

class Reta : public FiguraGeometrica{
private:
    int xinicial, yinicial, xfinal, yfinal;
public:
    Reta(int _xinicial, int _yinicial, int _xfinal, int _yfinal);
    void draw(Screen &t);
};

#endif // RETA_H
