#include <iostream>
using namespace std;
//return function_non parameter = function dea tver ka klun eng hz bos domlei tv krav and min can ttul domlei pi krav te;
// return function = chea function 1 type tver ka klun eng hz bos domlei;
int getAge(){
    return(18);
}
string Name(){
    return"menghorng";
}
bool isSingle(){
    return true;
}
int main(){
    int age = getAge();
    string name = Name();
    bool is_single = isSingle();
    cout<< "My age is :"<< age << endl;
    cout<< "My name is :"<< name << endl;
    cout<< "metals :"<<((is_single)? "Single": "Married") << endl;

    

    return 0;
}