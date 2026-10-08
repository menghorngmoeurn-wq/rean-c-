#include <iostream>
using namespace std;

int main(){
//cin(ignore) ber yg ot jg dak yg can dak kleng getline(cin>>ws,name)
    int code;
    string name;
    int qty;
    double price,total,discount,payment;

    cout<< "------Input-------" << endl;
    cout<<"Enter code :";cin>>code;cin.ignore(1000,'\n');
    cout<<"Enter name :";getline(cin,name);
    cout<<"Enter qty :";cin>>qty;
    cout<<"Enter price :";cin>>price;
    
total = qty*price;

if (total >=1 && total <= 10){
    discount = 10;
}
  else if(total >10 ){
    discount = 20;
}
 else if (total >20 ){
    discount = 30;
}
 else if (total > 30 ){
    discount = 40;
}
 else if (total >40 ){
    discount = 50;
}
 else{
    discount = 60;
}

payment = total - (total*discount);

cout<<"-------result-------" << endl;
cout<<"discount :" << discount << endl;
cout <<"total :" << total << endl;
cout <<"payment :" << payment << endl;

    return 0;
}