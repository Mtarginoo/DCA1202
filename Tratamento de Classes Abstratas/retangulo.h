#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"
#include "screen.h"
/**
 * @brief A classe Retangulo serve para estabelecer
 * informações básicas de um retângulo.
 */
class Retangulo : public FiguraGeometrica{
private:
    int xi, yi, largura, altura;
    bool fillmode;

public:
    /**
        * @brief Retangulo é o método construtor da classe
        * Retangulo.
        * @param _xi é a coordenada X do ponto inicial
        * (vértice superior esquerdo) do retângulo.
        * @param _yi é a coordenada Y do ponto incial do
        * retângulo.
        * @param _largura é a largura do retângulo.
        * @param _altura é a altura do retângulo.
        * @param _fillmode é o tipo de preenchimento
        * do retângulo. (0 para preenchimento vazio e 1
        * para preenchimento cheio).
        */
    Retangulo(int _xi=0, int _yi=0, int _largura=0, int _altura=0, bool _fillmode=0);
    /**
        * @brief draw é o método da classe
        * FiguraGeometrica que serve para desenhar o
        * retângulo e as outras figuras geométricas.
        * @param t é um ponteiro para uma variável do
        * tipo Screen.
        */
    void draw(Screen &t);
};

#endif // RETANGULO_H
