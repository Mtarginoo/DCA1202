#ifndef POINT_H
#define POINT_H


/**
 * @brief The Point class serve para
 * estabelecer informações básicas de um
 * tipo comum chamado Point
 */
class Point
{
private:
    float x, y;
public:
    /**
     * @brief setX é um método que serve
     * para realizar a atribuição da coordenada x
     * de um ponto.
     */
    void setX(float);
    /**
     * @brief setY é um método que serve
     * para realizar a atribuição da coordenada y
     * de um ponto.
     */
    void setY(float);
    /**
     * @brief setXY é um método que serve
     * pare realizar a atribuição, simultaneamente, das coordenadas x e y
     * de um ponto.
     */
    void setXY(float, float);
    /**
     * @brief getX é um método que retorna o valor
     * da coordenada x de um ponto.
     * @return float <coordenada_x_do_ponto>
     */
    float getX(void);
    /**
     * @brief é um método que retorna o valor
     * da coordenada y de um ponto.
     * @return float <coordenada_y_do_ponto>
     */
    float getY(void);
    /**
     * @brief add Realiza a adição das coordenadas
     * x e y de dois pontos.
     * @param p1 O parâmetro p1 é o ponto a ser adicionado.
     * @return Retorna o ponto com as coordenadas somadas.
     */
    Point add(Point p1);
    /**
     * @brief sub Realiza a subtração das coordenadas
     * x e y de dois pontos.
     * @param p1 O parâmetro p1 é ponto a ser subtraído.
     * @return Retorna o ponto com as coordendas subtraídas.
     */
    Point sub(Point p1);
    /**
     * @brief norma Método que retorna o módulo do vetor.
     * @return float <modulo>
     */
    float norma();
    /**
     * @brief translada Método que translada as coordenadas x e y
     * do ponto para (x+a, y+b).
     * @param a É o valor que será somado a coordenada x.
     * @param b É o valor que será somado a coordenada y.
     */
    void translada(float a, float b);
    /**
     * @brief imprime Método que imprime o ponto na forma (x,y)
     */
    void imprime();
};

#endif // POINT_H
