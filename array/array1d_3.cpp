#include <iostream>
using namespace std;

int main(){

    int nums[] = {10,20,30,40,50,60,70,90,100};

    //for loop 

    // for(int i = 0; i <= 8 ; i ++){
    //     cout << nums[i] << " ";
    // }


    // range base for loop = (ber yg ot skol domlei jong kroy yg brer vea ban)

    for(int num : nums){
       cout << num  << " ";
    }


    return 0;
}