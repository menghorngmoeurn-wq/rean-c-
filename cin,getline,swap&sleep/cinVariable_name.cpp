//cin>>variable-name;
//cin.ignore();  // clear enter-key's value
//getline(cin,variable-name);

//cin(int,float,char,string)
//getline(string)

//cin vea ot yk enter te;

//cin= use for p'jol domlei tea vea chop oy yg p'jol domlei mdg 1 sin ban vea jenh oy tt;
//cin>> name or អញ្ញាតិ; but if you dak name like yu yu vea ot jenh te jenh onlu yu;
//getline();
//cin.ignore();
//if mean int num1 and num2 yg trov dak cin >>num1; cin>>num2; 
//if yg jg brer num1 yg trov= cout<< num1;cout<<num1+num2;

//if u want to dak name but nme ng vea long (like kong thida)
//  vea ng jak yk only kong so  yg trov dak tha = getlin(cin,name); 



#include <iostream>
using namespace std;

int main(){

int age;
string fname;
string lname;
char gender;

//age = 18;
//name = "yu yu";

cout<< "Enter age: ";
cin>>age; 

cout<< "Enter  fname: ";  //fname=fristname;
cin>>fname;

cout<<"Enter lname: ";   //lname=lastname;
cin>>lname;

cout<< " Enter gender: ";
cin>>gender;
    
cout << "age =" << age << endl;
cout << "fname =" << fname << " " << lname << endl;   //yg jg oy name jenh mk tang fname and lname yg trov dak jg;
cout << " gender " << gender << endl;

    return 0;
}