#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"
#include "screen.h"

class Retangulo : public FiguraGeometrica{
private:
    int xi, yi, largura, altura;

public:
    Retangulo(int _xi=0, int _yi=0, int _largura=0, int _altura=0);
    void draw(Screen &t);
};

#endif // RETANGULO_H
