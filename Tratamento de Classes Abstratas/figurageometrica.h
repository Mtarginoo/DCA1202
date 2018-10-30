#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "screen.h"

/**
 * @brief A classe FiguraGeometrica é a classe
 * mãe de todas as outras classes de
 * figuras geométricas.
 */
class FiguraGeometrica
{
public:
    /**
         * @brief FiguraGeometrica é o construtor da classe
         * FiguraGeometrica.
         */
    FiguraGeometrica();
    /**
        * @brief draw é o método utilizado por todas
        * as classes herdeiras da classe
        * FiguraGeometrica. Serve para desenhar as
        * figuras geométricas.
        * @param t é um ponteiro para uma variável do tipo
        * Screen.
        */
    virtual void draw(Screen &t)=0;
};

#endif // FIGURAGEOMETRICA_H
