#include <iostream>
using namespace std;

int main(){
//find even number and odd number
    int number;

    // cout<<"=======even/odd======";<<endl;

    cout<<"1 = lek ku ."<<endl;
    cout<<"0 = lek ot ku."<<endl;

    cout<<"find even / odd number" << endl;

    cout<< "Enter number :";
    cin>>number;

    cout<< "Result: "
        <<((number % 2) == 0)
        << endl;


    return 0;
}