#include <iostream>
using namespace std;

template <class T>
class Array{
    T arr[3];

    public:

    void insert(){
        cout<<"Enter Values in Array:";

        for(int i=0;i<3;i++){
            cin>> arr[i];
        }
        
    }

    void display(){

        cout<< "Values in Array are: ";
        for(int i:arr){
            cout<< " " << i;
        }
        cout<< endl;
    }

    void sum(){
         T sum=0;
        for(int i:arr){
            sum= sum+i;
        }
        cout << "Sum of elements are: " << sum;
        cout <<endl;
    }

    void average(){
        T sum=0;
        for(int i:arr){
            sum= sum+i;
        }
        T average=sum/3;

        cout<<"Average is: "<<average<<endl;
    }
};

int main(){
    Array<int> ob1;
    ob1.insert();
    ob1.display();
    ob1.sum();
    ob1.average();
    return 0;
    
}