#include <iostream>
using namespace std;

// Multiple Inheritence

class Calculator{
    public:
    int add(int a, int b){
        int c=a+b;
        return c;
    }

    int add(int a,int b,int c){
        int d=a+b+c;
        return d;
    }

    double add(double a,double b){
        double c=a+b;
        return c;
    }
};

int main(){
    Calculator c;
    cout<< c.add(4,5)<<endl;
    cout<< c.add(8,9,10)<<endl;
    cout<< c.add(5.0,6.0)<<endl;
    return 0;
    
}