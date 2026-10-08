#include <iostream>
using namespace std;

int main(){

   int id,hour;
   string name;
   char sex;
   float salary,rate,total;
   
   //input 
cout<< "Enter id : "; cin>>id; cin.ignore();
cout<< "Enter name : "; getline(cin,name);
cout<< "Enter sex : "; cin>>sex;
cout<< "Enter salary : "; cin>>salary;
cout<< "Enter hour : "; cin>>hour;
cout<< "Enter rate : "; cin>>rate;

// find total
total = salary + (rate * hour);
//output

cout<<"id   " << id << endl;
cout<<"name   " << name << endl;
cout<<"sex   " << sex << endl;
cout<<"salary   " << salary << endl;
cout<<"hour   " << hour << endl;
cout<<"rate  " << rate << "$" << endl;
cout<<"id   " << id << endl;
cout<<"total   " << total << "$" << endl;
    return 0;
}