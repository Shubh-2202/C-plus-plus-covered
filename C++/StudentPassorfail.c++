// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int reg_number;
    int marks1;
    int marks2;
    int marks3;

    void getData(){
        cout<<"Enter Name: ";
        cin>>name;
        cout<<endl;
        cout<<"Enter Reg_no: ";
        cin>>reg_number;
        cout<<endl;
        cout<<"Enter marks1: ";
        cin>>marks1;
        cout<<endl;
        cout<<"Enter marks2: ";
        cin>>marks2;
        cout<<endl;
        cout<<"Enter marks3: ";
        cin>>marks3;
        cout<<endl;
    }

    void putdata(){
        cout<<"Name: "<<name<<endl;
        cout<<"Reg no: "<<reg_number<<endl;
        cout<<"Marks1: "<<marks1<<endl;
        cout<<"Marks2: "<<marks2<<endl;
        cout<<"Marks3: "<<marks3<<endl;

        int avg=(marks1+marks2+marks3)/3;
        if(avg>60){
            cout<<"Your are Passed with good marks: "<<avg<<endl;
        }
        else
            cout<<"Your are Failed: "<<avg<<endl;
    }
};

int main(){
    int n;
    cout<<"Enter Total Student: ";
    cin>>n;
    Student stu[n];

    for(int i=0;i<n;i++){
        stu[i].getData();
    }

    for(int i=0;i<n;i++){
        stu[i].putdata();
    }
}