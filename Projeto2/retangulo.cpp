#include "retangulo.h"
#include "screen.h"
#include <iostream>
using namespace std;


Retangulo::Retangulo(int _xi, int _yi, int _largura, int _altura, bool _fillmode){
    xi = _xi;
    yi = _yi;
    largura = _largura;
    altura = _altura;
    fillmode = _fillmode;
}

void Retangulo::draw(Screen &t){
    if(fillmode){
        for(int i=yi; i<(yi+altura); i++){
            for(int j=xi;j<(xi+largura); j++){
                t.setPixel(i,j);
            }
        }
    }
    else{
        for(int i=xi; i<xi+largura; i++){
            t.setPixel(i, yi);
            t.setPixel(i, yi+altura);
        }
        for(int j=yi; j<yi+altura; j++){
            t.setPixel(xi,j);
            t.setPixel(xi+largura-1, j);
        }
    }
}

