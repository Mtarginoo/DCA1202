#include "retangulo.h"
#include "screen.h"
#include <iostream>
using namespace std;


Retangulo::Retangulo(int _xi, int _yi, int _largura, int _altura){
    xi = _xi;
    yi = _yi;
    largura = _largura;
    altura = _altura;
}

void Retangulo::draw(Screen &t){
    for(int i=yi; i<(yi+altura); i++){
        for(int j=xi;j<(xi+largura); j++){
            t.setPixel(i,j);
        }
    }
}

