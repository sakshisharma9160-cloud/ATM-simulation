#include<iostream>
using namespace std;
int main(){
    float balance=10000;
    float amount;

    int pin;
    int correctpin=123;  //set the pin here
    cout<<"enter pin:";
    cin>>pin;

    if(pin!=correctpin){
        cout<< "incorrect_pin. access denied"<< endl;
        return 0;  //exits program immediately
    }
        cout<< "pin accepted!" <<endl;
        cout<< "enter withdrawal amount:";
        cin>> amount;
    
    if(amount<=0){
        cout<< "invalid amount" <<endl;
    }
    else if(amount<=balance){
        cout<< "withdrawal successful" <<endl;
        balance=balance-amount;
        cout<< "remaining balance" <<balance;
    }
    else{
        cout<< "insufficient balance" <<endl;
    }
    return 0;
}