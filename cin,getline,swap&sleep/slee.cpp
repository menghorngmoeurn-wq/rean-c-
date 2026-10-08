#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
int main(){
system("chcp 65001");//b'rer pel yg yg ey pi krav mk ; like ╔ ╗ ╚ ╝ ╩ ╦ ╠ ╣ ╬ ║ ;
cout << "\033[?25l";
system("cls");
cout <<"\rI"<< endl; 
this_thread::sleep_for(chrono::milliseconds(100));
system("cls");
cout <<"\rL"<< endl;
this_thread::sleep_for(chrono::milliseconds(100));
system("cls");
cout <<"\rO"<< endl;
system("cls");this_thread::sleep_for(chrono::milliseconds(100));
cout <<"\rV"<< endl;
system("cls");this_thread::sleep_for(chrono::milliseconds(100));
cout <<"\rE"<< endl;
system("cls");this_thread::sleep_for(chrono::milliseconds(100));
cout <<"\rM"<< endl;
system("cls");this_thread::sleep_for(chrono::milliseconds(100));
cout <<"\rY"<< endl;
system("cls");this_thread::sleep_for(chrono::milliseconds(100));
cout <<"\rS"<< endl;
system("cls");this_thread::sleep_for(chrono::milliseconds(100));
cout <<"\ro"<< endl;
system("cls");this_thread::sleep_for(chrono::milliseconds(100));
cout <<"\rN"<< endl; 

    return 0;
}