#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime> // srand, time
#include <numeric> //iota
#include <algorithm> // random_shuflle

using namespace std;

int main(){
    vector<int> aposta(6,0);
    vector<int> dezenas(60);
    int napostas;
    srand(time(0));

    iota(dezenas.begin(), dezenas.end(), 1);


    random_shuffle(dezenas.begin(), dezenas.end());
    copy(dezenas.begin(), dezenas.begin()+6, aposta.begin());

    for(int i=0; i<aposta.size(); i++){
        cout<< aposta[i] << ", ";
    }

    return 0;
}
