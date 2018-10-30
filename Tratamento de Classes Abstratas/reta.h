#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"
#include "screen.h"

/**
 * @brief A classe Reta serve para estabelecer
 * informações básicas de uma reta.
 */
class Reta : public FiguraGeometrica{
private:
    int xinicial, yinicial, xfinal, yfinal;
public:
    /**
         * @brief Reta é o método construtor da classe
         * Reta.
         * @param _xinicial é a coordenada X do ponto
         * inicial da reta.
         * @param _yinicial é a coordenada Y do ponto
         * inicial da reta.
         * @param _xfinal é a coordenada X do ponto final
         * da reta.
         * @param _yfinal é a coordenada Y do ponto final
         * da reta.
         */
    Reta(int _xinicial, int _yinicial, int _xfinal, int _yfinal);
    /**
        * @brief draw é o método da classe
        * FiguraGeometrica que serve para desenhar a
        * reta e as outras figuras geométricas.
        * @param t é um ponteiro para uma variável do
        * tipo Screen.
        */
    void draw(Screen &t);
};

#endif // RETA_H
