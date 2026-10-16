#include <iostream>
using namespace std;

template <class T>
class A{
    public:
    T value;
};

template <class T>
class B:public A<T>{
    public:
    void square(){
        cout<<"Square is: "<<this->value*this->value;
    }
};

int main(){
    B<int> obj;
    obj.value=10;

    obj.square();
}