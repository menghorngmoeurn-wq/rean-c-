#include <iostream>
using namespace std;
//prototype function = chea function dea yg write tea kbal nv ler int main te body vea write nv krom int main;
void mystatus();
void mystatus(string name);
void mystatus(string name,int age);
int main(){
    mystatus();
    mystatus("Meii");
    mystatus("jii",18);
    return 0;
}
void mystatus(){
    cout<< "hi jonhh" << endl;
}
void mystatus(string name){
    cout << "My name :" << name << endl;
}
void mystatus(string name,int age){
    cout << "My name :" << name << endl;
    cout << "I'm " << age << "years oild" << endl;
}
    

