#include "screen.h"
#include <iostream>
#include <vector>

using namespace std;

Screen::Screen(int _ncol, int _nlin){
    nlin = _nlin;
    ncol = _ncol;
    mat = vector<vector<char>>(nlin, vector<char>(ncol,' '));//alocando matriz de vetor de vetor de char e preenchendo com espaços.
}

void Screen::setPixel(int x, int y){
    if((x<ncol) && (y<nlin) && (x>0) && (y>0)){
        mat[x][y] = brush;
    }
}

void Screen::clear(){
    for(int i=0; i<mat.size(); i++){
        for(int j=0; j<mat[i].size(); j++){
            mat[i][j] = ' ';
        }
    }
}

void Screen::setBrush(char _brush){
    brush = _brush;
}

ostream& operator <<(ostream &os, Screen &t){
    for(int i=0; i<t.ncol; i++){
        for(int j=0; j<t.nlin; j++){
            os << t.mat[j][i];
        }
        os <<endl;
    }
    return(os);
}

