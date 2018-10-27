#include "circulo.h"
#include <iostream>
#include <cmath>
#include "screen.h"

Circulo::Circulo(int _x, int _y, int _raio, bool _p){
x = _x;
y = _y;
raio = _raio;
p = _p;
}

void Circulo::draw(Screen &t){
    float dp;
    if(!p){
        for(int i=(x-raio); i<=(x+raio); i++){
            for(int j=(y-raio); j<=(y+raio); j++){
             dp = sqrt((i-x)*(i-x)+(j-y)*(j-y));
                if(ceil(dp)==raio){
                        t.setPixel(i,j);
                }
            }
        }
     }
    else{
        for(int i=(x-raio); i<=(x+raio); i++){
            for(int j=(y-raio); j<=(y+raio); j++){
                 if( sqrt((i-x)*(i-x)+(j-y)*(j-y)) <= raio){
                       t.setPixel(i,j);
                 }
            }

         }

   }

}
