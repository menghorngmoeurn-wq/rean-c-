#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    system("cls");
    cout << "\033[5;38;2;255;51;153;48;2;255;255;0m";
    float A,x;
cout<<"       (square)        " ;
cout<<"\033[0m";
cout << endl;
cout<<"x :";
cin>>x;

cout<<"x : " << x << endl;

A=x*x;
cout<< " A = x*x : "<< A << endl;
 
//*******************************************************************
cout << "\033[5;38;2;255;51;153;48;2;255;255;0m";

float A1,b,h;
cout<<"         Triangle       ";
cout<<"\033[0m";
cout << endl;

cout<<"b :";
cin>>b;
cout<<"h :";
cin>>h;
cout<<"b :" << b << endl;
cout<<"h:" << h<< endl;

A1=0.5*b*h;
cout<<"A1=(0.5)*(b)*(h) :" << A1 << endl;
//********************************************************************
cout << "\033[5;38;2;255;51;153;48;2;255;255;0m";
const float pi=3.14;
float A2,r;
cout<<"        Circle        ";
cout<<"\033[0m";
cout <<endl;
cout<<"r :";
cin>>r;
cout<<"r :"<< r << endl;

A2=pi*(r*r);
cout<<"A2=pi*(r*r) : "<< A2 << endl;
//********************************************************************
cout << "\033[5;38;2;255;51;153;48;2;255;255;0m";
float A3,b2,h1;
cout<<"        Rectangle        ";
cout<<"\033[0m";
cout <<endl;
cout<<"b2 :";
cin>>b2;
cout<<"b3:";
cin>>h;
cout<<"b2 :" << b2 << endl;
cout<<"h1 :" << h<< endl;

A3=b2*h1;
cout<<"A3=b2*h1 : "<< A3 << endl;
//********************************************************************
cout << "\033[5;38;2;255;51;153;48;2;255;255;0m";
const float pi1=3.14;
float A4,a,b3;
cout<<"        Eclipse        ";
cout<<"\033[0m";
cout <<endl;

cout<<"a :";
cin>>a;
cout<<"b3 :";
cin>>b3;

cout<<"a:" << a<< endl;
cout<<"b3:" << b3<< endl;

A4=pi1*a*b3;
cout<<"A4=pi1 *(r*r) : "<< A4 << endl;
//*******************************************************************
cout << "\033[5;38;2;255;51;153;48;2;255;255;0m";

float A5,a1,b4,h2;
cout<<"         Trapezoid       ";
cout<<"\033[0m";
cout << endl;

cout<<"a1 :";
cin>>a1;
cout<<"b4 :";
cin>>b4;
cout<<"h2 :";
cin>>h2;

cout<<"a1 :" << a<< endl;
cout<<"b4 :" << b4 << endl;
cout<<"h2 :" << h2<< endl;

A5=(a1+b4)*h2/2;
cout<<"A5=(a1+b4)*h2/2 :" << A5 << endl;

    return 0;
}