#include <iostream>
#include <windows.h>
using namespace std;

#define RED "\033[1;38;2;255;0;0m"
#define GREEN "\033[1;38;2;0;255;0m"
#define RESET "\033[0m"

void play(){
    mciSendString("open Brown_Eyes.mp3 alias m",NULL,0,NULL);
    mciSendString("play m",NULL,0,NULL);
}
void lyrice(string text,int ch_delay,int line_delay,string color){
    cout << color;
    Sleep(line_delay);
    for(char ch : text){
        Sleep(ch_delay);
        cout << ch;
    }
    cout << endl;
}

int main(){

    play();
    Sleep(14780);
    lyrice(" Remember the first day when I saw your face ?",70,2000,RED);
    Sleep(5);
    lyrice(" Remember the first day when you smiled at me ?",40,1000,GREEN);
    Sleep(5);
    lyrice(" You stepped to me and then you said to me ",50,2000,RED);
    Sleep(5);
    lyrice(" I was the woman you dreamed about ",70,1000,GREEN);
    Sleep(5);
    lyrice(" Remember the first day when you called my house ?",80,1000,RED);
    Sleep(20);
    lyrice(" Remember the first day when you took me out? ",70,1000,GREEN);
    Sleep(20);
    lyrice(" We had butterflies, although we tried to hide ",50,1000,RED);
    Sleep(20);
    lyrice(" And we both had a beautiful night ",70,2000,GREEN);
    Sleep(20);
    lyrice(" The way we held each other's hand ",70,1000,RED);
    Sleep(10);
    lyrice(" The way we talked, the way we laughed ",70,2000,GREEN);
    Sleep(10);
    lyrice(" It felt so good to find true love ",50,1700,RED);
    Sleep(10);
    lyrice(" I knew right then and there you were the one, ooh ",60, 1000,GREEN);
    Sleep(10);
    lyrice(" I know that he loves me 'cause he told me so ",60,1000,RED);
    Sleep(10);
    lyrice(" I know that he loves me 'cause his feelings show ",50,900,GREEN);
    Sleep(10);
    lyrice(" When he stares at me, you see he cares for me ",70,1000,RED);
    Sleep(10);
    lyrice(" You see how he is so deep in love ",50,1000,GREEN);
    
    



    return 0;
}