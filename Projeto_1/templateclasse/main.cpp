#include <iostream>

using namespace std;

template <class T>
class Vetor{
    T x, y;
public:
    Vetor();
    Vetor(T _x, T _y){
        x = _x; y = _y;
    }
    T getX(){
        return x;
    }
    T getY(){
        return y;
    }
};

template <class T>
Vetor <T>::Vetor(){

}

template <class T>
Vetor<T>::Vetor(T _x, T _y){
    x = _x; y = _y;
}

int main()
{
    Vetor<int> v1;
    Vetor<double> v2(4.5, 8.9);
    cout<<v1.getX()<<endl;
    cout<<v2.getX()<<endl;
    cout<< sizeof(v1)<<endl;
    cout<< sizeof(v2)<<endl;

    return 0;
}
