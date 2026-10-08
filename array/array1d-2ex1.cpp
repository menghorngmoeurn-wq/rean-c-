#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int id[3];
    string names[3];

    cout << "****input****" << endl;
    for(int i = 0 ; i < 3 ; i ++){
        cout << "Enter id [ "<< i << " ] :";
        cin >> id[i];
        cout << "Enter names [ "<< i << " ] :";
        cin >> names[i];
    }


    cout <<"****output****" << endl;
    cout << left 
         << setw(10) << "id" 
         << setw(15) << "names"
         << endl;

    for(int i = 0; i < 3 ; i ++ ){
        cout << left 
        << setw(10) << id[i] 
        << setw(15) << names[i]
        << endl;
    }
    

    return 0;
}