// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;

class Shape{
    public:
    virtual void draw()=0;
};

class Circle:public Shape{
    public:
    void draw() override{
        cout<<"Drawing Circle"<<endl;
    }
};

class Rectangle:public Shape{
    public:
    void draw() override{
        cout<<"Drawing Rectange"<<endl;
    }
};

class Triangle:public Shape{
    public:
    void draw() override{
        cout<<"Drawing Triangle"<<endl;
    }
};

int main(){
    Circle c;
    Rectangle r;
    Triangle t;

    Shape* ptr;
    ptr= &c;
    ptr->draw();

    ptr= &r;
    ptr->draw();

    ptr= &t;
    ptr->draw();
    return 0;
}