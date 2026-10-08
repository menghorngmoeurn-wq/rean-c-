#include <iostream>
using namespace std;
//alias
//local_variable/globle_variable 
//block_scope
//-------
//array
// string-method
// pointer
// memory-allocation
// structure
// oop(class/object)
// file handling
// database(basic/connect db with cpp)
// (all of khang ler chea lesson dea trov rean)


int main(){
//normal
    int c = 10;
    int d = c;
    //         a                   b
    // -----------------   -------------------
    // |      10       |   |       10        |
    // -----------------   -------------------
    cout <<" Enter c :" << c << endl; cin>>c;
    cout <<" Enter d :" << d << endl; cin>>d;

    //alias
    int a = 10;
    int& b = a;
    //         a,b has same place to put or change value for eacher other
    //                             a,b
    //                       -----------------
    //                       |      10       |
    //                       -----------------
    cout <<" Enter a :" << a << endl; cin>>a;
    cout <<" Enter b :" << b << endl; cin>>b;

    return 0;
}