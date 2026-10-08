#include <iostream>
#include <iomanip>
using namespace std;

int main(){
system("cls");
cout << setfill('+') << setw(8) << "[A]" << setw(5) << "" << endl;
cout << setfill('-') << setw(8) << "[B]" << setw(5) << "" << endl;
cout << setfill('@') << setw(8) << "[c]" << setw(5) << "" << endl;
cout << setfill('&') << setw(8) << "[D]" << setfill('!') << setw(5) << "" << endl;
cout << setfill('^') << setw(8) << "[E]" << setfill('%') << setw(5) << "" << endl;
    return 0;
}