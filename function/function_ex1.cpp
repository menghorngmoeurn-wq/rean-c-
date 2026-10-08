#include <iostream>
using namespace std;


void fToc(){
    float f,c;
        cout << "Enter f :" ;
        cin>>f;

        c = (f-32)*5/9;
        
        cout << "Enter c :" << c << endl;
        cin>>c;
        
    }
    int main(){
        fToc();
    
    return 0;
}