#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;

    cout  <<" ENTER FRIST NUMBER:";
    cin >> a;
    cout<<"ENTER OPERATOR (+,-,*,/):";
    cin>>op;
    cout<<"ENTER SECOND NUMBER:";
    cin>>b;

    switch (op){
        case'+': cout<<"result="<<a+b;
        break;
        case'-': cout<<"result="<<a-b;
        break;
        case'*': cout<<"result="<<a*b;
        break;
        case'/':  if (b!=0)
        cout<<"result="<<(float)a/b;
        else
        cout<<"cannot divide by zero!";
        break;
        befault:
        cout<<"invalid operator!";
    }
   return 0;
}
