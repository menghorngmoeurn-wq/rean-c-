#include <iostream>
using namespace std;

int main(){
//condition_statement (if eles)= der lak khan 2 is 0&1 ber ah pi 1 ot 1
// vea der ah pi pi 1
    string eamil;
    string password;

    cout<<"Enter eamil :";
    cin>>eamil;
    cout<<"Enter password :";
    cin>>password;

    if(eamil == "horng@gimal.com" && password == "horng99"){
        cout<< "Login successfully!"<< endl;
    }else{
        cout<< "Login Worng!"<< endl;
    }



    return 0;
}