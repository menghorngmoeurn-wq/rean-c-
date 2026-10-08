#include <iostream>
using namespace std;

int main(){
//declare array with init value

    string names[] = {"Ma","Ta","Ka"};

    cout <<"****Input*****" << endl;

    cout << "Enter names[0]: ";
    cin  >> names[0];
    cout << "Enter names[1]: ";
    cin  >> names[1];
    cout << "Enter names[2]: ";
    cin  >> names[2];

    cout <<"****Output****" << endl;

    cout << names[0] << endl;
    cout << names[1] << endl;
    cout << names[2] << endl;


    return 0;
}