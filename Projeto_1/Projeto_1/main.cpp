#include <iostream>
#include "point.h"

using namespace std;

int main()
{
    Point p1, p2, p3;
    float norma;
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
    return 0;
}
