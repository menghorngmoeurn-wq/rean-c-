#include <iostream>
using namespace std;

int main(){

    int code,qty,total;
    string name;
    float uprice,discount,dis,fprice;

    cout<<"Enter code :";cin>>code;
    cout<<"Enter name :";cin.ignore();getline(cin,name);
    cout<<"Enter qty :";cin>>qty;
    cout<<"Enter dis :%";cin>>dis;
    cout<<"Enter uprice :$";cin>>uprice;

    fprice = qty * uprice;
    discount = fprice * (dis/100);
    total = fprice - discount ;


    cout<<"fprice = qty * uprice :" << qty << " * " << uprice << " = " << fprice << " $ " << endl;
    cout<<"discount = fprice * (dis/100) :" << fprice << " * " << dis << "/100 = " << discount << " $ " << endl;
    cout<<"total = fprice - discount :" << fprice << " - " << discount << " = " << total << " $ " << endl;
    
    return 0;
}