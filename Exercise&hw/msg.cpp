#include <iostream>
#include <windows.h>
using namespace std;//dak using namespce std cuz yg ot jg dak muk cout tha std jrern dg like (std :: cout <<)

int main(){
    system("cls");//ber dak systeam("cls"); it mean when u run code ah ler system ng vea lub jorl 
    system("chcp 65001");
    cout <<"\033[5;38;2;255;51;153;48;2;255;255;0m"; //code color (if u want to dak color you need to dak ) that 38 chea letter and 48 chea background    system("cls");
    cout << "4";
    Sleep(1000);// it mean 1000ms ban vea lert jenh code oy
    system("cls");//it mwean vea jenh hz lub venh (jenh lek 4 hz lub jorl lert jenh lek 3 venh)
    cout << "3";
    Sleep(1000);
    system("cls");
    cout << "2";
    Sleep(1000);
    system("cls");
    cout << "1";
    Sleep(1000);
    system("cls");
    mciSendString("open v.mp3 alias m",NULL,0,NULL);//ke dak mp3 cuz vea trov p'jol music 
    mciSendString("play m",NULL,0,NULL);//NULL,O,NULL (trov tea dak pel yg jg play music)g++ msg.cpp -lwinmm -o a;.\a
    system("pause");// kom oy vea chop pleam pleam but ver yg jg bit music ng yg joj enter
    cout << "\033[0m";//code bit color if u want to remove color (letter and background)

    return 0;
}
//when u run already u must put g++ msg.cpp -lwinmm -o a;.\a (a ng do ban but ber ah muk dak a kroy kr a dea )
//msg.cpp ng do tv tam name file dea tv dak