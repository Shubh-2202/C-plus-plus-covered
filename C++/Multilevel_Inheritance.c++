#include <iostream>
using namespace std;

// Multilevel Inheritence
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

class Cat: public Dog{
    public:
    void meow(){
        cout<<"Meowingg!!"<< endl;
    }
};
int main(){
    Dog d;
    Cat c;
    
    d.animal();
    d.bark();
    c.meow();
}