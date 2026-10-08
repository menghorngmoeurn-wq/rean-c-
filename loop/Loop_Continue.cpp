#include <iostream>
using namespace std;

int main(){

    //continue = ber meet vea vea ng rom long tv tver 1 tt; 
    // ex = tver dol lek 1 hz meet continue vea ng rom long lek 2 tv tver lek 3 venh;

    for(int i = 1 ; i <= 10 ; i ++){
        if(i == 5){
            continue;
        }
        cout << "KOng #" << i << endl;
    }

    return 0;
}