#include <iostream>
using namespace std;

int main(){

    //declare array with init value

    string names[3] = {"Ma","Ta","Ka"};

    cout <<"****Input*****" << endl;

    for(int i = 0; i < 3 ; i ++){
    cout << "Enter names[" << (i+1) << "] : ";
    cin >> names[i];
    }
    
    cout <<"****Output****" << endl;

    for(int i = 0; i < 3 ; i++){
        cout << "Names[" << (i+1) << "] : " << names[i] << endl;
    }

    return 0;
}