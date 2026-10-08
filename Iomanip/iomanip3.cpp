#include <iostream>
#include <iomanip>
using namespace std;

int main(){
system("chcp 65001");
//system("cls");

cout << "\033[4;38;2;255;55;255;48;2;0;0;0m";

cout << "╔══════════╦══════════╦══════════╦══════════╗" << endl;

cout << left
     << "│ "
     << setw(10) << "ID"
     << "│ "
     << setw(10) << "Name"
     << "│ "
     << setw(10) << "Price"
     << "│ "
     << setw(10) << "Stock"
     << "│ "
     << endl; 
     
cout << "╠══════════╬══════════╬══════════╬══════════╣" << endl;

cout << left
     << "│ " 
     << setw(10) << "001"
     << "│ "
     << setw(10) << "Nha"
     << "│ "
     << setw(10) << "100000$"
     << "│ "
     << setw(10) << "NoStock"
     << endl;

return 0;
}