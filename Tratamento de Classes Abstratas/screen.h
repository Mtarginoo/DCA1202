#ifndef SCREEN_H
#define SCREEN_H

#include <vector>
#include <fstream>

using namespace  std;

/**
 * @brief Na classe Screen contém os métodos
 * utilizados para dar suporte ao desenho de figuras
 * geométricas.
 */

class Screen{
private:
  // armazenam o tamanho da tela de desenho
  // no de linhas e de colunas
  int nlin, ncol;

  // guarda o caractere usado para desenhar
  char brush;

  // armazena a matriz da tela
  /**
     * @brief mat é a matriz de vetores de caracteres onde serão desenhadas
     * as figuras geométricas.
     */
  vector< vector<char> > mat;
public:
  // construtor da classe
  /**
    * @brief Screen é o método construtor da classe
    * Screen.
    * @param nlin é a quantidade de linhas de pixels
    * da tela.
    * @param ncol é a quantidade de colunas de
    * pixels da tela.
    */
  Screen(int nlin, int ncol);

  // desenha um pixel da matriz usando o caratere
  // guardado em 'brush'
  /**
     * @brief O método setPixel serve para desenhar um pixel na tela.
     * @param x é a coordenada X do ponto onde o pixel será desenhado.
     * @param y é a coordenada Y do ponto onde o pixel será desenhado.
     */
  void setPixel(int x, int y);

  // limpa a tela
  /**
     * @brief O método clear apaga todas as figuras geométricas que foram
     * desenhadas na tela.
     */
  void clear();

  // muda o caractere de desenho
  /**
    * @brief Com o método setBrush podemos escolher com qual caractere
    * iremos desenhar na tela.
    * @param No argumento brush fica guardado o caractere com o qual iremos denhar na tela. (Ex.: . , * &)
    */
  void setBrush(char brush);

  // envia a tela para um stream de saida
  /**
    * @brief operator << Sobrecarga do operador <<
    * @param os
    * @param t
    * @return
    */
  friend ostream& operator<<(ostream &os, Screen &t);
};

#endif // SCREEN_H
