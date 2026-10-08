#include <iostream>
using namespace std;

int main(){

    int total,new_use,old_use,pay;

    cout<<"Enter new_use :";cin>>new_use;
    cout<<"Enter old_use :";cin>>old_use;

    total = (new_use) - (old_use);

    if(total >= 1 && total <= 10){
        pay = total * 350;
    }
    else if(total <= 20){
        pay = (10*360) + ((total-10)*450);
    }
    else if(total <=30){
        pay = (10*350) + (10*450) + ((total - 20)*550);
    }
    else if(total <=40){
        pay = (10*350) + (10*450) + (10*550) +((total -30)*650);
    }
    else if(total <=50){
        pay = (10*350) + (10*450) + (10*550) + (10*650) + ((total -40)*750);
    }
    else if(total <=60){
        pay = (10*350) + (10*450) + (10*550) + (10*650) + (10*750) + ((total -50)*850);
    }
    else{
        pay = (10*350) + (10*450) + (10*550) + (10*650) + (10*750) + (10*850) + ((total -60)*950);
    }

    cout<<"total :"<< total << endl;
    cout<<"new_use :"<< new_use << endl;
    cout<<"old_use :"<< old_use << endl;

    return 0;
}