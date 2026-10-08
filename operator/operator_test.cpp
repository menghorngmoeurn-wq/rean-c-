#include <iostream>
using namespace std;

int main(){
//used const cuz yg ot can do domlei vea ban te;

const float balance = 100;
float withdraw ;

    cout<< "========ATM========" << endl;

    cout<< "1 :mean luy ."<< endl;
    cout<< "0 :ot luy ."<< endl;

    cout<< "Balance: "<< balance << endl;

    cout<< "Enter amount : ";
    cin>>withdraw;
    
    cout<< "Result: "<< (withdraw <= balance) << endl;
    return 0;
} 