#include "reta.h"
#include "screen.h"
#include <iostream>
#include <cmath>

using namespace std;

Reta::Reta(int _xinicial, int _yinicial, int _xfinal, int _yfinal){
    xinicial = _xinicial;
    yinicial = _yinicial;
    xfinal   = _xfinal;
    yfinal   = _yfinal;
}

void Reta::draw(Screen &t){
    int i, j;
    float a;
    for(a=0.0; a < 1; a+=0.01){
        i = (int)(xinicial + a*(xfinal - xinicial));
        j = (int) (yinicial + a*(yfinal - yinicial));
        t.setPixel(i,j);
    }

}




