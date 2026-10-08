#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    int id[10];
    string names[10];
    char gender[10];
    int age[10];

    int n;
    cout << "Enter number n : ";cin >> n;

    cout << "****input****" << endl;
    for(int i = 0 ; i < n ; i ++){
        cout << "Enter id [ "<< i << " ] :";
        cin >> id[i];
        cout << "Enter names [ "<< i << " ] :";
        cin >> names[i];
        cout << "Enter gender [ "<< i << " ] :";
        cin >> gender[i];
        cout << "Enter age [ "<< i << " ] :";
        cin >> age[i];
    }


    cout <<"****output****" << endl;
    cout << left 
         << setw(10) << "id" 
         << setw(15) << "names"
         << setw(15) << "gender"
         << setw(15) << "age"
         
         << endl;

    for(int i = 0; i < n ; i ++ ){
        cout << left 
        << setw(10) << id[i] 
        << setw(15) << names[i]
        << setw(15) << gender[i]
         << setw(15) << age[i]
        << endl;
    }
    

    return 0;
}