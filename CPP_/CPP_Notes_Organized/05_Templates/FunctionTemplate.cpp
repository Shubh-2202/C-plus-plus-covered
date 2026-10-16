#include <iostream>
using namespace std;

template <class T>
T add(T a,T b){
    T c=a+b;
    return c;
}

int main(){
    cout<< add(4,5)<<endl;
    cout<< add(4.5f, 3.7f);
}