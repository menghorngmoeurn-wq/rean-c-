#include <iostream>
using namespace std;
void Vote();

int main(){

    Vote();

    return 0;
}
void Vote(){
    int op,a=0,b=0;
    while(true){

        cout << "************ choice ***********" << endl;
        cout << "1.A                            " << endl;
        cout << "2.B                            " << endl;
        cout << "3.End                          " << endl;
        cout <<"********************************" << endl;
    
        cout <<"choose the choice :";cin >>op;
        switch(op){
            case 1 :{
                a++;
                break;
            }
            case 2 :{
                b++;
                break;
            }
            case 3 :{
                cout << "*********Result*********" << endl;
                cout << "a= " << a << endl;
                cout << "b= " << b << endl;
                exit(0);
            }
        }
    }
}