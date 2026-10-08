#include <iostream>
using namespace std;

int main(){ 

    // int a;
    // a = a;
    // cout << a;
    // cout << &a;
    
    system("cls");

    int a = 10; // titang1 mean name 2 or 3
    int & b = a;// titang ddea name new
    int & c = a;
    b = 10;
    c = 20;   

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    system ("cls");

    //const=thea or min brea brul;
    //const int a =10;//yg can not do domdei a ;
    // but ber ot dak const pi muk int te yg can do domlei a ban;
    const float PI = 3.14;
    cout << PI << endl;

    
    return 0;
}