#include <iostream>
using namespace std;

// Singe Inheritence
class Animal{
    public:
    void animal(){
      cout<<"Animal Class!"<<endl;
    }
};

class Dog:public Animal{
    public:
    void bark(){
        cout<<"Barking!"<< endl;
    }
};

int main(){
    Dog d;
    d.animal();
    d.bark();
}