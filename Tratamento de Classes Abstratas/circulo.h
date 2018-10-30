#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"
#include "screen.h"

class Circulo : public FiguraGeometrica{
private:
    /**
         * @brief Circulo é o método construtor da
         * classe Circulo
         *
         * @param _x é a coordenada X do ponto no centro
         * do círculo.
         *
         * @param _y é a coordenada Y do ponto no centro
         * do círculo.
         *
         * @param _raio é o valor do raio do círculo.
         *
         * @param _p é o tipo do preenchimento que será
         * aplicado no círculo. (1 para preenchimento cheio
         * e 0 para preenchimento vazio)
         *
         */
    int raio, x, y;
    bool p;
public:
    Circulo(int _x, int _y, int _raio, bool _p);
    /**
         * @brief draw é o método da classe
         * FiguraGeometrica que serve para desenhar o
         * círculo.
         * @param t é um ponteiro para uma variável do tipo
         * Screen.
         */
    void draw(Screen &t);
};

#endif // CIRCULO_H
