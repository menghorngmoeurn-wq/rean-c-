#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    system("cls");
    cout << "\033[0;38;2;55;100;255;48;2;0;0;9m";
    cout << "|" << setfill('-') << setw(31) << "|"
         << setw(31) << "|"
         << setw(31) << "|"
         << setw(31) << "|" << endl;

    cout << "|" << setfill(' ') << setw(17) << "Name" << setw(14) << "|"
         << setw(16) << "Age" << setw(15) << "|" 
         << setw(18) << "Gender" << setw(13) << "|"
         << setw(17) << "Class" << setw(14) << "|"<< endl;

    cout << "|" << setfill('-') << setw(31) << "|"
         << setw(31) << "|"
         << setw(31) << "|"
         << setw(31) << "|" << endl;
         
    cout << "\033[0m";

    cout << "|" << setfill(' ') << setw(17)<< "Kitty" << setw(14) << "|" 
         << setw(16) << "16" << setw(15) << "|"
         << setw(18) << "Female" << setw(13) << "|"
         << setw(16) << "M6" << setw(15) << "|" << endl;
 
    return 0;
}