#include <iostream>
using namespace std;
//past by value;ot mean &;
// void swap(int a,int b){
//     //a = 10
//     //b = 20
//     int temp = a;//a=10
//     a = b;//b=20
//     b = temp;
//     cout <<" swap a = " << a << endl;
//     cout <<" swap b = " << b << endl;
// }

//past by referance; mean &;
void swap(int& a,int& b){
    //a = 10
    //b = 20
    int temp = a;//a=10
    a = b;//b=20
    b = temp;
    cout <<" swap a = " << a << endl;
    cout <<" swap b = " << b << endl;
}
int main(){
    int a,b;
    cout << "Enter a :" ;cin >> a;
    cout << "Enter b :" ;cin >> b;
    swap(a,b);
    cout <<" a = " << a << endl;
    cout <<" b = " << b << endl;

    return 0;   
}