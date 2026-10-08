#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    system("cls");
    cout << "\033[0;38;2;255;100;0;48;2;0;0;0m";
    cout << setfill('-') << setw(61) <<"" << endl;
    cout << left 
         << "|  " << setfill(' ') << setw(12) << "Name"
         << "|  " << setfill(' ') << setw(12) << "Class"
         << "|  " << setfill(' ') << setw(12) << "Gender" 
         << "|  " << setfill(' ') << setw(12) << "Age"
         << "|" << endl;
    cout << setfill('-') << setw(61) <<"" << endl;
    cout << left 
         << "|  " << setfill(' ') << setw(12) << "kitty"
         << "|  " << setfill(' ') << setw(12) << "M1 "
         << "|  " << setfill(' ') << setw(12) << "Female " 
         << "|  " << setfill(' ') << setw(12) << "18"
         << "|" << endl;
    cout << left 
         << "|  " << setfill(' ') << setw(12) << "Mickey"
         << "|  " << setfill(' ') << setw(12) << "M2 "
         << "|  " << setfill(' ') << setw(12) << "Female " 
         << "|  " << setfill(' ') << setw(12) << "19"
         << "|" << endl;
   
    cout << left 
         << "|  " << setfill(' ') << setw(12) << "Kurame"
         << "|  " << setfill(' ') << setw(12) << "M3 "
         << "|  " << setfill(' ') << setw(12) << "Male " 
         << "|  " << setfill(' ') << setw(12) << "20"
         << "|" << endl;

    cout << left 
         << "|  " << setfill(' ') << setw(12) << "Doraemon"
         << "|  " << setfill(' ') << setw(12) << "M4 "
         << "|  " << setfill(' ') << setw(12) << "Male " 
         << "|  " << setfill(' ') << setw(12) << "21"
         << "|" << endl;
     cout << setfill('-') << setw(61) <<"" << endl;

    return 0;
}