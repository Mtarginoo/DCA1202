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
    Retangulo ret2(x, y, 2, 2);
    centro = ret2.centroMassa();
    // ret2.imprimePol();
    //centro.imprime();
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
    cout<<"A area do retangulo rotacionado eh: "<<area3<<" u.a \n";


    /*Point p1, p2, p3, p4;
    p1.setXY(0, 0);
    p2.setXY(4, 0);
    p3.setXY(4, 4);
    Poligono pol1(p1, p2, p3);
    p4.setXY(0, 4);
    pol1.addVertice(p4);
    float a;
    a = pol1.areaPoligono();
    cout << "A area do poligono eh: " << a << endl;
    pol1.imprimePol();
    pol1.transladaPol(2, 2);
    pol1.imprimePol();
    */

    /*
    p1.setX(3);
    p1.setY(9);
    cout << "P1: ";
    p1.imprime();
    p1.setXY(42, 8);
    cout << "\nP1: ";
    p1.imprime();
    p2.setX(1);
    p2.setY(1);
    cout << "\nP2: ";
    p2.imprime();
    p3 = p1.add(p2);
    cout << "\nP1 + P2: ";
    p3.imprime();
    p3 = p1.sub(p2);
    cout << "\nP3 = P1 - P2: ";
    p3.imprime();
    cout << "\nNORMA P1: ";
    cout << p1.norma() << endl;
    cout << "\nNORMA P2: ";
    cout << p2.norma() << endl;
    cout << "\nNORMA P3: ";
    cout << p3.norma() << endl;
    p1.translada(10, 10);
    cout << "\nP1 TRANSLADADO: ";
    p1.imprime();
    */
    return 0;
}
