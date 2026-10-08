#include <iostream>
using namespace std;

int main(){

    int id;
    string name,dob;//dob = date of birth;
    char sex,grade;
    float s1,s2,s3;//sc= score;
    float total,average;
    
    cout<<"id :";cin>>id;cin.ignore(1000,'\n');
    cout<<"name :";getline(cin,name);
    cout<<"dob :";cin>>dob;
    cout<<"sex :";cin>>sex;
    cout<<"s1 :";cin>>s1;
    cout<<"s2 :";cin>>s2;
    cout<<"s3 :";cin>>s3;

    
    total= s1+s2+s3;
    average=total/3;

    if(average >= 90 && average <= 100){
        grade = 'A';
    }
    else if(average >= 80 ){
        grade = 'B';
    }
    else if(average >=70  ){
        grade = 'C';
    }    
    else if(average >=60  ){
        grade = 'D';
    }  
    else if(average >=50  ){
        grade = 'E';
    }else{
        grade = 'F';
    } 
    cout<<"total :" << total << endl;
    cout<<"average :" << average << endl;
    cout<<"grade :" << grade << endl;

    return 0;
}