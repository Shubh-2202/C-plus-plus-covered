
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // string st = "Shubh bhai";

    // ofstream out("Sample.txt");

    // out << st;

    // out.close();

    string st2;
    ifstream in("Sample2.txt");
    while(getline(in,st2)){
        cout<<st2<<endl;
    }

    in.close();
    return 0;

}
