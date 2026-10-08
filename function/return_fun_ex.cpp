#include <iostream>
using namespace std;
float add(){
    float a,b;
    cout<<"add :" << endl;
    cout << "a,b :";cin>>a>>b;
    return a + b; 
}
float dok(){
    float a,b;
    cout << "dok :" << endl;
    cout << "a,b :";cin>>a>>b;
    return a - b; 
}
float kun(){
    float a,b;
    cout << "kun :" << endl;
    cout << "a,b :";cin>>a>>b;
    return a * b; 
}
float devide(){
    float a,b;
    cout << "devide :" << endl;
    cout << "a,b :";cin>>a>>b;
    return a / b; 
}
int main(){
    float add_ = add();
    float dok_ = dok();
    float kun_ = kun();
    float devide_ = devide();
   
    cout << "result add_ :" << add_ <<endl;
    cout << "result dok_ :" << dok_ <<endl;
    cout << "result kun_ :" << kun_ <<endl;
    cout << "result devide_ :" << devide_ <<endl;

    return 0;
}