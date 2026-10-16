#include <iostream>
using namespace std;

// Multiple Inheritence

class Father{
    public:

    void father(){
        cout<<"Father's Features!"<< endl;
    }
};

class Mother{
    public:

    void mother(){
        cout<<"Mother's Features!" << endl;
    }
};

class Child:public Father,public Mother{
    public:
    void child(){
        cout<<"Hey i am child and I have:"<<endl;
    }
};

int main(){

    Child c;
    c.child();
    c.father();
    c.mother();
    return 0;
    
}