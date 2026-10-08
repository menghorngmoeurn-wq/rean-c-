#include <iostream>
using namespace std;

int main(){

    //casoi;
    //condition_statement(if) = der tae lak khan 1;

    float a;
    float b;
    char op;//op = operator

    cout<<"Enter a : ";cin>>a;
    cout<<"Enter b : ";cin>>b;
    cout<<"Enter [+,-,*,/]: ";cin>>op;

    if(op == '+'){
    cout<< "a + b = " << a+b << endl;
    }

    if(op == '-'){
        cout<< "a - b = " << a-b << endl;
    }

    if(op == '*'){
        cout<< "a * b = " << a*b << endl;
    }

    if(op == '/'){
        cout<< "a / b = " << a/b << endl;
    }

    return 0;
}