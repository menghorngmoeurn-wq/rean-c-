#include <iostream>
using namespace std;
void sum1(int n);
void sum2(int n);
void sum3(int n);

int main(){
    int op,n;
    while(true){//Infinite loop = chea loop dea der rhot ot jes chop;

   cout << "*****  Menu  *****"       << endl;
   cout << " 1. sum1          "       << endl; 
   cout << " 2. sum2          "       << endl; 
   cout << " 3. sum3          "       << endl; 
   cout << " 4. sum4          "       << endl; 
   cout << " **************** "       << endl;
    
   cout << "choose an option : "; cin>> op;
    switch(op){
        case 1:{
            cout << "enter n : ";cin>>n;
            sum1(n);
            break;
        }
        case 2:{
            cout << "enter n : ";cin>>n;
            sum2(n);
            break;
        }
        case 3:{
            cout << "enter n : ";cin>>n;
            sum1(n);
            break;
        }
        case 4:{
           exit(0);
        }
    }
}

    return 0;
}
void sum1(int n){
    int sum1 = 0;
    for(int i = 1 ; i <= n ; i++){
        sum1 += i;
    }
    cout << "sum1 = " << sum1 << endl;
}
void sum2(int n){
    int sum2 = 0;
    for(int i = 1 ; i <= n ; i++){
        sum2 += 2*i;
    }
    cout << "sum2 = " << sum2 << endl;
}
void sum3(int n){
    int sum3 = 0;
    for(int i = 1; i <= 3 ; i++){
        sum3 += 2*i + 1;
    }
    cout << "sum3 = " << sum3 << endl;
}
