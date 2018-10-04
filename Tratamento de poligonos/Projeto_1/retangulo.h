#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"

/**
 * @brief The Retangulo class serve para
 * estabelecer informações básicas de um retangulo.
 */
class Retangulo : public Poligono
{
public:
    /**
     * @brief Retangulo Instancia um objeto retangulo
     * passando como parâmetros as coordenadas do seu
     * ponto inicial, altura e largura.
     * @param x Coordenada x do ponto inicial.
     * @param y Coordeanda y do ponto iincial.
     * @param largura largura do retangulo.
     * @param altura altura do retangulo.
     */
    Retangulo(float x, float y, float largura, float altura);
};

#endif // RETANGULO_H
