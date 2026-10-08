#include <iostream>
using namespace std;

int main(){

    int k = 1;
    do{
        cout<<"\033[48;2;"<< k <<";135;0m";
        cout<< k  << " " ;
        cout<<"\033[0m";

        k++;
    }while(k<=255);

    return 0;
}