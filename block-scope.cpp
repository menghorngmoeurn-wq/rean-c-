#include <iostream>
using namespace std;

int main(){

    int a = 10;

    if(true){
        a = 2000;

        int a = 100;
        a = 200;
        if(true){
            a = 1000;
        }
        a = 300;
    }
    cout << "a = " << a << endl;
    
    return 0;
}