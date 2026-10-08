#include <iostream>
using namespace std;

int main(){
//login system
//username && password

string username;
string password;
cout<<"1 = login successfully."<<endl;
cout<<"0 = worng credentials."<<endl;

cout<<"=======Login system======="<<endl;

cout<<"Enter username :";cin>>username;
cout<<"Enter password :";cin>>password;

cout<< "Result: "
    << ((username == "horng") && (password == "1234")) 
    <<endl;
    
    return 0;
}