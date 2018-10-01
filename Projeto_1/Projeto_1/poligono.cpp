#include "poligono.h"
#include <iostream>
#include <cmath>
#include "point.h"

Poligono::Poligono()
{
    p = new ponto[100];
}

Poligono::~Poligono(){
    delete [] p;
}


