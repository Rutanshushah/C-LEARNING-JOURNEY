#include<iostream>
using namespace std;
int main(){
    double balance;

    cout<<"Enter your current balance: ";
    cin>>balance;

    while(balance>0){
        balance=balance-100;
        cout<<"Your balance is decreasing,\n"<<balance<<"remaining balance!\n";
    }
    cout<<"your balance balance is empty!";

}
