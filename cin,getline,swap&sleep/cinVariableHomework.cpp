#include <iostream>
using namespace std;

int main(){

   int id;
   int roomnumber;
   string type;
   int price;
   int floor;
   string status;

   system("cls");
cout << "*******Input******"<< endl;
   cout<<"id: ";
   cin>>id;
   cout<<"roomnumber: ";
   cin>>roomnumber;
   cout<<"type: ";
   cin>>type;
   cout<<"price: $"; //$ can not dak in cin ; if u want to dak yg trov dak jong kroy ke;
   cin>>price;
   cout<<"floor :";
   cin>>floor;
   cout<<"status: ";
   cin>>status;

   cout<<"******Output******" << endl;

   cout<<"id :"<< id << endl;
   cout<<"roomnumber :"<< roomnumber << endl;
   cout<<"type :"<< type << endl;
   cout<<"price :$"<< price << endl;
   cout<<"floor :"<< floor << endl;
   cout<<"status :"<<status << endl;


    return 0;
}