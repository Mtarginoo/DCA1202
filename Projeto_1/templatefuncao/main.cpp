#include <iostream>
using namespace std;

template <class T, class U>
U media(T a, T b){
    U ret;
    ret = (a+b)/2;
    return ret;
}

template<class T, int n=5>
void alo(T x){
    T vetor[n];
    for(int i=0; i<n; i++){
        vetor[i] = x;
    }
}

int main()
{
    int a, c;
    float b;
    float x;
    a = 4; b = 5;
    c = media<int>(a,b);
    x = media<float>(a,b);
    x = media<int, float>(a,b);
    cout<< "media: "<<x<<endl;

    return 0;
}
