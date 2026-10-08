#include <iostream>
#include <iomanip>
using namespace std;

int main(){
system("chcp 65001");
system("cls");

cout << "\033[6;38;2;255;55;255;48;2;0;0;0m";

cout << "╔══════════╦══════════╦══════════╦══════════╗" << endl;

cout << left
     << "║ "
     << setw(9) << "ID"
     << "║ "
     << setw(9) << "Name"
     << "║ "
     << setw(9) << "Price"
     << "║ "
     << setw(9) << "Stock"
     << "║ "
     << endl; 
     
cout << "╠══════════╬══════════╬══════════╬══════════╣" << endl;

cout << left
     << "║ " 
     << setw(9) << "001"
     << "║ "
     << setw(9) << "chii"
     << "║ "
     << setw(9) << "90000$"
     << "║ "
     << setw(9) << "NoStock"
     << "║ " << endl;

     cout << "╠══════════╬══════════╬══════════╬══════════╣" << endl;

    cout << left
     << "║ " 
     << setw(9) << "002"
     << "║ "
     << setw(9) << "yuk"
     << "║ "
     << setw(9) << "80000$"
     << "║ "
     << setw(9) << "Stock"
     << "║ " << endl;

    cout << "╠══════════╬══════════╬══════════╬══════════╣" << endl;

     cout << left
     << "║ " 
     << setw(9) << "003"
     << "║ "
     << setw(9) << "kka"
     << "║ "
     << setw(9) << "80000$"
     << "║ "
     << setw(9) << "NoStock"
     << "║ " << endl;

cout << "╚══════════╩══════════╩══════════╩══════════╝" << endl;


return 0;
}


