#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main(){
    system("cls");
    // homework id ,title,Auther,year;
    int id =01234567;
    string school = "Coding Internaternol School";
    string title = "Code Book";
    string auther = "Mr.Kim Yu";
    int year = 2005;
    cout <<"\033[3;38;2;255;205;0;48;2;0;0;0m";
    cout << setfill('_') << setw(100) << "" << endl;
    cout << "|" << setfill(' ') << setw(100) << "|" << endl;
    cout << "| "<< "School: " << setw(55) << school << setfill(' ') << setw(36) << "|" << endl;
    cout << "|" << setfill(' ') << setw(100) << "|" << endl;
    cout << "| "<< "id: " << id  << setfill(' ') << setw(89) << "|" << endl;
    cout << "|" << setfill(' ') << setw(100) << "|" << endl;
    cout << "|" << setfill(' ') << setw(100) << "|" << endl;
    cout << "|" << setfill(' ') << setw(100) << "|" << endl;
    cout << "|" << setfill(' ') << setw(100) << "|" << endl;

    //cout <<"\033[6;38;2;255;205;0;48;2;0;0;0m";

 cout << "|       " << "$$$$$$$                   $$                 $$$$$$$$                       $$        "<< "      |" << endl;
 cout << "|       " << "$$  __$$                  $$ |                $$  __$$$                     $$ |      "<< "      |" << endl;
 cout << "|       " << "$$ /  $__| $$$$$$$   $$$$$$$ | $$$$$$$        $$ |  $$ | $$$$$$$   $$$$$$$  $$ |  $$$ "<< "      |" << endl;
 cout << "|       " << "$$ |      $$  __$$$ $$  __$$ |$$  __$$$       $$$$$$$$ |$$  __$$$ $$  __$$$ $$ | $$  |"<< "      |" << endl;
 cout << "|       " << "$$ |      $$ /  $$ |$$ /  $$ |$$$$$$$$ |      $$  __$$$ $$ /  $$ |$$ /  $$ |$$$$$$  / "<< "      |" << endl;
 cout << "|       " << "$$ |  $$$ $$ |  $$ |$$ |  $$ |$$   ____|      $$ |  $$ |$$ |  $$ |$$ |  $$ |$$  _$$<  "<< "      |" << endl;
 cout << "|       " << "$$$$$$$  |$$$$$$$  |$$$$$$$$ |$$$$$$$$$       $$$$$$$  |$$$$$$$  |$$$$$$$  |$$ | $$$$ "<< "      |" << endl;
 cout << "|       " << " $______/  $______/  $_______| $_______|      $_______/  $______/  $______/ $__|  $__|"<< "      |" << endl;
  

 cout << "|" << setfill(' ') << setw(100) << "|" << endl;
    cout << "|" << setfill(' ') << setw(100) << "|" << endl;
    cout << "|" << setfill(' ') << setw(100) << "|" << endl;
    cout << "|" << setfill(' ') << setw(100) << "|" << endl;
    cout << "|" << setfill(' ') << setw(100) << "|" << endl;
    cout << "|" << setfill(' ') << setw(100) << "|" << endl;
    cout << "|" << setfill(' ') << setw(100) << "|" << endl;
    cout << "| "<< "Auther: " << auther  << setfill(' ') << setw(82) << "|" << endl;
    cout << "|" << setfill(' ') << setw(100) << "|" << endl;
    cout << "| "<< "Year: " << year  << right << setfill(' ') << setw(89) << "|" << endl; 
    cout << "|" << setfill(' ') << setw(100) << "|" << endl;
    cout << "|" << setfill(' ') << setw(100) << "|" << endl;
     cout << setfill('_') << setw(101) << "" << endl;

    return 0;
}