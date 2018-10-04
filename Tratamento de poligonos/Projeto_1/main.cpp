#include <iostream>
#include "point.h"
#include "poligono.h"
#include "retangulo.h"

using namespace std;

int main()
{
    float x, y, altura, largura, area, area2, area3;
    Point centro;
    x = 0;
    y = 0;
    altura = 3;
    largura = 4;

    Retangulo ret1(x, y, altura, largura);
    ret1.imprimePol();
    area = ret1.areaPoligono();
    cout<<"A area do retangulo eh: "<<area<<" u.a\n";
    cout<<endl;

    ret1.transladaPol(-3,4);
    ret1.imprimePol();
    area2 = ret1.areaPoligono();
    cout<<"A area do retangulo transladado eh: "<<area2<<" u.a \n";
    cout<<endl;

    centro = ret1.centroMassa();
    ret1.rotacionaPol(30.0, centro);
    ret1.imprimePol();
    area3 = ret1.areaPoligono();
    cout<<"A area do retangulo rotacionado eh: "<<area3<<" u.a \n\n";


    return 0;
}
