#include <iostream>
using namespace std;

int main(){

    string username;
    string password;

    cout<< "Enter username :";cin>>username;

    if(username == "Baby_Boy"){
        cout<<"Enter Password :";cin>>password;
        if(password == "2345"){
            cout<<"Login successful:"<< endl;
        }
        else{
        cout<<"worng username!"<<endl;
        }
    }
    else{
        cout<<"worng password!"<<endl;
    }


    return 0;
}