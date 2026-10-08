#include <iostream>
#include <windows.h>
using namespace std;

int main(){

    char text[] = { 'a','b','c','d'};

    for(char ch: text ){

        Sleep(500);
        cout << ch << " ";
    }

    return 0;
}