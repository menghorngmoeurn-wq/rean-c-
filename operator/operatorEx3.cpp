#include <iostream>
using namespace std;

int main(){
  system("chcp 65001");
  system("cls");
  float dollar,riel; 
  float exchanged_dollar,exchanged_riel;
  const float curency = 41.35;

  cout<<"Enter riel : ៛";cin>>riel;
  cout<<"Enter Dollar : $";cin>>dollar;
  cout<<"Enter curency is: 1$=40.35៛"<<endl;

  exchanged_dollar = riel / curency;
  exchanged_riel = dollar * curency;
  cout<< "exchanged_dollar = " << riel  << " / " << curency << " = " << exchanged_dollar << " $ " << endl;
  cout<<"exchanged_riel = " << dollar  << " * " << curency << " = " << exchanged_riel << " ៛ " << endl;

    return 0;
}