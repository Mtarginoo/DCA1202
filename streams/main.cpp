#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout, macaco;
    fout.open("/home/mtarginoo/Documentos/UFRN/BCT/Quinto\ Semestre/Programação\ Avançada/DCA1202/streams/acucar.txt");

    if(!fout.is_open()){
        cout<<"O arquivo nao foi aberto"<<endl;
        exit(0);
    }

    fout<<"Sugar";
    fout.close();


    return 0;
}
