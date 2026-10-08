#include <iostream>
using namespace std;

int main(){
//condition = ka dak lakkhan oy mean tea 2 kak ney kot is T and F;
//condition vea mean 3 is = if , eles if; if eles if eles;\
// if = der tea lak khan pit;
// if eles = der all lak khan tang 0 & 1;

    int age = 18;

    cout<< "Enter age :";
    cin>>age;

    if ( age >= 18 && age <=100){ 
        cout<< "Are are not 18 anymore!"<< endl;
    }
    if ( age >0 && age < 18) {
        cout<< "Are you a people!" << endl;
    }
    if ( age > 100){
        cout<<"Are you older!" << endl;
    }
    if ( age < 0){
        cout<< "You are just a sperm! "<< endl;
    }
    return 0;
}