
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double price = 123.4567;

    cout << "Using endl:" << endl;

    cout<<"Set width: "<<setw(10)<<25<<endl;

    // cout<<"Set fill: "<<setfill('*')<<setw(25)<<25<<endl;
    
    cout<<left<<setw(10)<<setfill('*')<<"Ram"<<endl;

    cout<<right<<setw(10)<<setfill('*')<<"Ram"<<endl;

    
    cout<<setprecision(4)<<price<<endl;

    cout<<setbase(8)<<51<<endl;

    cout<<boolalpha<<true<<endl;

    cout<<hex<<455<<endl;

    cout<<fixed<<setprecision(4)<<12.5<<endl;

    cout<<showpos<<25<<endl;
    return 0;
}