#include <iostream>
#include <windows.h>
using namespace std;

#define PI 3.14
#define RED "\033[38;2;255;0;0m"
#define GREEN "\033[38;2;0;255;0m"
#define BLUE "\033[38;2;0;0;255m"
#define YELLOW "\033[38;2;255;255;0m"
#define RESET "\033[0m"

// #define "\033[48;2;255;0;0m"

int main(){
    cout << "PI :" << PI << endl;
    cout << RED;
    cout << "RED" << endl;
    cout << GREEN;
    cout << "GREEN" << endl;
    cout << BLUE;
    cout << "BLUE" << endl;
    cout << YELLOW;
    cout << "YELLOW" << endl;
    cout << RESET;

    // cout << "a";
    // Sleep(300);
    // cout << "\rd";
    // Sleep(300);
    // cout << "\re";
    // Sleep(300);
    // cout << "\rb";
    // Sleep(300);
    // cout << "\rf";

    return 0;
}