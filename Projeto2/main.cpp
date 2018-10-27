#include <iostream>
#include "screen.h"
#include "reta.h"
#include "figurageometrica.h"
#include "retangulo.h"
#include "circulo.h"
#include <vector>
using namespace std;

int main()
{
    Screen tela(100,200);
    Circulo c1(50,50,15,1);
    tela.setBrush('&');
    Reta r1(80,80,8,9);
    tela.setPixel(1,100);
    Retangulo rt1(1,1,10,10);
    rt1.draw(tela);
    c1.draw(tela);
    r1.draw(tela);

    cout<<tela;
    return 0;
}
