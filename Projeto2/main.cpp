#include <iostream>
#include "screen.h"
#include "reta.h"
#include "figurageometrica.h"
#include "retangulo.h"
#include "circulo.h"
#include <vector>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    char brush;
    int x0, y0, x1, y1, largura, altura, raio;
    bool fillmode;
    ifstream input;
    ofstream output;
    Screen tela(10,10);
    char comando[9];

    input.open("/home/mtarginoo/Documentos/UFRN/BCT/Quinto\ Semestre/Programação\ Avançada/DCA1202/Projeto2/input.txt");

    if(input.is_open()){
        cout<<"Arquivo aberto"<<endl;
    }
    else{
        cout<<"Falha ao tentar abrir arquivo"<<endl;
    }

    input>>comando;

    while(input.good()){
        if(strcmp("dim", comando)==0){
            input>>x0>>y0;
            tela = Screen(x0,y0);
        }
        else if(strcmp("line", comando)==0){
            input>>x0>>y0>>x1>>y1>>brush;
            Reta r(x0,y0,x1,y1);
            tela.setBrush(brush);
            r.draw(tela);
        }
        /*else if(strcmp("rectangle", comando)==0){
            input>>x0>>y0>>largura>>altura>>fillmode>>brush;
            Retangulo ret()
        }*/
        input>>comando;
    }

    input.close();

    output.open("/home/mtarginoo/Documentos/UFRN/BCT/Quinto\ Semestre/Programação\ Avançada/DCA1202/Projeto2/output.txt");
    if(!output.is_open()){
        cout<<"Falha ao abrir o arquivo"<<endl;
    }

    output<<tela;

    output.close();

    /*Screen tela(100,200);
    Circulo c1(50,50,15,1);
    tela.setBrush('&');
    Reta r1(80,80,8,9);
    tela.setPixel(1,100);
    Retangulo rt1(1,1,10,10);
    rt1.draw(tela);
    c1.draw(tela);
    r1.draw(tela);

    cout<<tela;*/
    return 0;
}
