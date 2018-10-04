#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"

/**
 * @brief The Poligono class serve para
 * estabelecer informações báiscas de um Poligono
 */
class Poligono
{
protected:
    int contVert;
    Point vertices[100];
public:
    /**
     * @brief Poligono construtor da classe poligono
     */
    Poligono();
    /**
     * @brief Poligono Instanciando um poligono com pelo menos 3 pontos inicialmente.
     */
    Poligono(Point, Point, Point);
    /**
     * @brief addVertice Adiciona mais um vértice
     * a um poligono, passando no método
     * o ponto a ser adicionado.
     */
    void addVertice(Point);
    /**
     * @brief qtdVertice Método que retorna a quantidade
     * de vértices de um determinado poligono.
     * @return int <quantidade_de_vertices>
     */
    int qtdVertice();
    /**
     * @brief areaPoligono Método que calcula a área
     * de um determinado poligono.
     * @return float <area_do_poligono>
     */
    float areaPoligono();
    /**
     * @brief transladaPol método que translada um poligono.
     * @param coordenadas x e y do deslocamento do poligono.
     */
    void transladaPol(float, float);
    /**
     * @brief imprimePol Método que imprime os vertices do poligono
     * no sentido anti-horário na forma (x0, y0) - > (x1, y1) -> ...
     */
    void imprimePol();
    /**
     * @brief rotacionaPol Método que rotaciona um poligono
     *  em torno de um dado ponto em um determinado ângulo.
     * @param float <angulo_em_graus> , Point <eixo_de_rotacao>
     */
    void rotacionaPol(float, Point);
    /**
     * @brief centroMassa Método que calcula o centro
     * de massa de um dado poligono.
     * @return Point <ponto_do_centro_de_massa>.
     */
    Point centroMassa();
};

#endif // POLIGONO_H
