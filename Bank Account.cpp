#include <iostream>
#include <string>
using namespace std;

int main(){
    int acc_no;
    cout << "Enter account number: " << endl;
    cin >> acc_no;

    char acc_type;
    cout << "Enter your account type, Savings (s) or Checking (c): " << endl;
    cin >> acc_type;

    if (acc_type!='s' && acc_type!= 'c'){
            cout << "Invalid account type!!!" << endl;
            cout << "Please enter a valid account type" << endl;
            cin >> acc_type;
    }

    double balance;
    cout << "Balance: ";
    cin >> balance;

    switch(acc_type){
        case 's':
            if (balance < 1000){
                balance = balance - 10;
                break;
            }
            else{
                balance = balance * 1.04;
                break;
            }
        
        case 'c':
            if (balance < 1000){
                balance = balance - 25;
                break;
            }
            else if (balance > 6000){
                balance = balance * 1.03;
                break;
            }
            else{
                balance = balance * 1.05;
                break;
            }
            
    }

    string account;
    if (acc_type == 's'){
        account = "Savings";
    }
    else{
         account = "Checking";
    }

    cout << "Account number: " << acc_no << endl;
    cout << "Account Type: " << account << endl;
    cout << "Current Balance: " << balance  << endl;

    if (balance < 1000){
        cout << "You have been charged because your balance falls below the minimum amount" << endl;
    }
    else{
        cout << "Interest has been added since your balance falls above the minimum amount" << endl;
    }
}