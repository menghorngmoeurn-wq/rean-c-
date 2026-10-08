#include <iostream>
using namespace std;

int main(){

    srand(time(0)); 
    int number = (rand() % 100) + 1;
    
    int i = 1;
    do{
        int quess;
        cout << "quess the number : ";
        cout<<"\033[38;2;"<<i<<";134;0m";
        cout<<"\033[0m";
        cin >> quess;

        if(quess > number){
            cout<< "too hight" << endl;
        }
        else if (quess < number){
            cout<< " too low" << endl;

        }
        else{
            cout << " YOu win!" << endl;
            exit(0);
        }
        i++;
    }while(i <= 5);

    cout<<"You lose!" << endl;
    cout<<"The answer number :" << number << endl;



    return 0;
}