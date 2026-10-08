#include <iostream>
using namespace std;

//variable = chea​អញ្ញាតិ​​​ brer for p'tuk data b'dos ahson ler Ram;(vea p'tuk domdei ban tea 1);
// to b'kert varible yg trov = mean (dataType (mean2 is lek and អក្សរ)
//  dea vea men lek kot(ex: int;long) and lek ទសភាគ(ex:float;double) ; varibleName(yg jg dak domlei oy vea yg brer (=) that if have only 1 );
// អក្សរ = 1word yg dak (char)(ex= 'a';) ; jrern word dak (string)(ex= "pisey";)
// តក្ក(bool)

int main(){

    //variable
    //formular
    //dataType variable-name;
    //dataType variable-name=value;
    //datatype:
    // លេខ: int,float
    // អក្សរ:char,string
    // តក្ក:bool
    //id(int),name(string),gender(cher),salary(float)
//noted : name duj knea cann't p'kert;

// int id;
// string name;
// char gender;
// float salary;

int id = 123;
string name = "kim pin";
char gender='F';
float salary=1234.345; 

cout << "====|Before|==== << endl";
cout << "ID " << id << endl;
 cout << "Name" << name << endl;
 cout << "Gender" << gender << endl;
 cout << "salary" << salary << endl;

// cout << id; // this will display garbage value (bach dak "" te)

 id = 123;
 name = "Kong yuuu"; // yg trov dak vea in "";
 gender = 'F';
 salary = 1234.345;

 cout << "====|after|==== << endl";
 cout << "ID: "<< id << endl;
 cout << "Name" << name << endl;
 cout << "Gender" << gender << endl;
 cout << "salary" << salary << endl;


    return 0;
}