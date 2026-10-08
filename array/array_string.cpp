#include <iostream>
#include <windows.h>
using namespace std;

void lyrics(string text , int ch_delay){
    for(char ch : text){
        Sleep(ch_delay);
        cout << ch ;
    }
    cout << endl;

}
int main(){
    lyrics("I miss you" , 100);
    lyrics("I miss you" , 100);
    lyrics("I miss you" , 100);
    lyrics("I miss you" , 100);
    lyrics("I miss you" , 100);
    lyrics("I miss you" , 100);
    lyrics("I miss you" , 100);
    lyrics("I miss you" , 100);
    

    // string text =  NULL;
    //char* text ; (vea s'dea ng string)
    //dea char* in C
    //dea string in c++

    
    return 0;
}