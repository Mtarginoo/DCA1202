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
   int x0, y0, x1, y1, y_temp;
   x0 = x-raio;
   y0 = y-raio;
   x1 = x+raio;
   y1 = y+raio;

   for(int i=x0; i<=x1; i++){
       y_temp = round(sqrt(pow(raio,2)-pow(i-x, 2))+y);
       t.setPixel(i, y_temp);
       y_temp = round(y-sqrt(pow(raio,2)-pow(i-x,2)));
       t.setPixel(i, y_temp);
   }

   int temp;
   if(p){
       for(int i=x0; i<=x1; i++){
           for(int j=y0; j<=y1; j++){
               temp = round(sqrt(pow(i-x, 2)+pow(j-y,2)));
               if(temp<=raio){
                   t.setPixel(i,j);
               }
           }
       }
   }

}

/*void Circulo::draw(Screen &t){
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

}*/
