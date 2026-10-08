#include <iostream>
using namespace std;
void person(){
    cout << "hi :jonh" << endl;
}
void person(string name){
    cout << "My name is : " << name << endl;
}
void person(string name , int age){
    cout << "My name is : " << name << endl;
    cout << "I'm " << age << "years old" << endl;
}

int main(){
    person();
    person("jany");
    person("mouy",18);
    

    

    return 0;
}