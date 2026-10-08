#include <iostream>
using namespace std;

int main(){

    //logical operator.cpp : 
    //&& , || , !
     
    cout << ((50 > 20) && (30 > 20)) << endl;
    cout << ((50 > 20) && (10 > 20)) << endl;
    cout << ((10 > 20) && (40 > 20)) << endl;
    cout << ((10 > 20) && (10 > 20)) << endl;

    cout << ((50 > 20) || (30 > 20)) << endl;
    cout << ((50 > 20) || (10 > 20)) << endl;
    cout << ((10 > 20) || (40 > 20)) << endl;
    cout << ((10 > 20) || (10 > 20)) << endl;

    cout << !((10 > 20) || (10 > 20)) << endl;
    cout << !(!(10 > 20) || (10 > 20)) << endl;
    
    return 0;
}