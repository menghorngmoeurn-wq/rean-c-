#include <iostream>
using namespace std;

int main(){
//declaration
float a,b;
char op;
//input value;
cout<<"Enter a: ";cin>>a;
cout<<"Enter b: ";cin>>b;
cout<<"Enter [+,-,*,/]: ";cin>>op;

    switch(op){
        case '+' : {
           cout<< "result :" << a + b << endl;
           break;
    }
        case '-' : {
           cout<< "result :" << a - b << endl;
           break;
    }
        case '*' : {
           cout<< "result :" << a * b << endl;
           break;
    }
        case '/' : {
           cout<< "result :" << a / b << endl;
           break;
    }
    default:{
        cout<<"Worng!" << endl;
        break;
    }
}

    return 0;
}