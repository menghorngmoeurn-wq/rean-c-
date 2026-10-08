#include <iostream>
using namespace std;

int main(){
//comparaison operator : jg oy yg jes brer សញ្ញា​ ;
// >,<,<=,>=,==,!=;
int a = 10;
int b = 10;

cout << (a > b) << endl;
cout << (a < b) << endl;

cout << ((a > b) > (a < b)) << endl;
cout << ((a < b) > (a > b)) << endl;

cout << (a >= b) << endl;
cout << (a <= b) << endl;

cout << ((a >= b) >= (a <= b)) << endl;
cout << ((a >= b) <= (a <= b)) << endl;

cout << (a == b) << endl;
cout << (a != b) << endl;

cout << ((a == b) == (a != b)) << endl;
cout << ((a == b) != (a != b)) << endl;


    return 0;
}