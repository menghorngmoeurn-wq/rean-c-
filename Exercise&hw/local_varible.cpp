#include <iostream>
using namespace std;
//golbal variable
string name ="kong";

void profile();

int main(){
    //local varible
    //string name = "kong";
    profile();
    name = "ka ka";
    profile();

    return 0;
}
void profile(){
    cout << "Name : " << name << endl;
}