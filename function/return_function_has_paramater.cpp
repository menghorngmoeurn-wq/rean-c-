#include <iostream>
#include"mymath"
using namespace std;
//return_function_has_paramater = function dea tver ka klun eng hz bos domlei tv krav and vea can ttul domlei pi krav ban;
// return-type function-name(paramater1,paramater2,..){
    // int add(int a, int b){
    //     return a + b;
    // }
    // int min(int c ,int d){
    //     return c - d;
    // }
    // int mul(int e ,int f){
    //     return e * f;
    // }
    // int div_(int g ,int h){
    //     return g / h;
    // }
int main(){

    int a,b;

    cout<<"\033[31m";
    cout <<"Enter a ";cin>>a;
    cout <<"Enter b ";cin>>b;
    cout <<"******Result*******" << endl;
    cout << "a + b = "<< add(a,b) <<endl;

    cout <<"Enter a ";cin>>a;
    cout <<"Enter b ";cin>>b;
    cout <<"******Result*******" << endl;
    cout << "a - b = "<< min(a,b) <<endl;

    cout <<"Enter a ";cin>>a;
    cout <<"Enter b ";cin>>b;
    cout <<"******Result*******" << endl;
    cout << "a * b = "<< mul(a,b) <<endl;

    cout <<"Enter a ";cin>>a;
    cout <<"Enter b ";cin>>b;
    cout <<"******Result*******" << endl;
    cout << "a / b = "<< div_(a,b) <<endl;
    cout<<"\033[0m";





    return 0;
}