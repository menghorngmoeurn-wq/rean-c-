#include <iostream>
using namespace std;

int main(){

    
    float a;
    float b;
    char op;

    cout<<"Enter a :";cin>>a;
    cout<<"Enter [+,-,*,/] :";cin>>op;
    cout<<"Enter b :";cin>>b;

    if(op == '+'){
        cout<<" a+b = " << a+b << endl;
    }
    else if(op == '-'){
        cout<<"a-b ="<< a-b << endl;
    }
    else if(op == '*'){
        cout<<"a*b ="<< a*b << endl;
    }    
    else if(op == '/'){
        cout<<"a/b ="<< a/b << endl; 
    }
    else if(op == '%'){
        cout<<"a%b ="<< (int)a%(int)b << endl;
    
    }else{
        cout<<"Invalid opertator! "<< endl;
    }


    


    return 0;
}