#include <iostream>
using namespace std;

class BankAccount{
    private:
    int balance=1000;

    public:
    void deposite(int amount){
        balance=balance+amount;
    }

    void display(){
        cout << "Balance left: " << balance << endl;
    }

    void withdraw(int amount){
        if(amount > balance){
            cout << "Insufficent Balance!"<< endl;
        }
        else {
            cout<<"Withdrawing......" << endl;
            cout<<"Amount Withdrawn successfully!"<<endl;
            balance=balance-amount;
        }
    }
};

int main(){

    BankAccount b;
    int amt;
    int withdraw;
    cout<< "Enter Amount to deposite: ";
    cin >> amt;
    b.deposite(amt);
    cout << "Enter amount to withdraw: ";
    cin >> withdraw;
    b.withdraw(withdraw);
    b.display();
    return 0;
    
}