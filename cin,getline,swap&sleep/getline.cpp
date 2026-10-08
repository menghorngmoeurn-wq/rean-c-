#include <iostream>
using namespace std;

int main(){
system("cls");
    //getline=yg brer for p'jol domlei oy string yk  tea អក្សរ ;
    //ber yg jg dak lek yg trov dak cin;
    //cin>>Var-Name;
    //getline(cin,var,name) in () ke hav tha agumin (អាគុយម៉ង់);
    //cin=min yk \n;
    //getline= yk\n;
    //yg dak cin.ignore()=for p'dach \n .
    //buffer=chea k'leng dea yg p'tuk domlei b'dos ahson; (\n);
    //cin.ignore =brern for cls buffer;
    int age;
    string name;
    string gender;
    
    cout<< "Enter age :";
    cin >>age;

    cin.ignore(1000,'\n');

    cout<< "Enter name :";
    getline(cin,name);

    cout<<"Enter gender :";
    cin>>gender;


    cout<< "age  : " << age <<  endl;
    cout<< "Name : " << name << endl;
    cout<< "gender : " << gender << endl;

    return 0;
}