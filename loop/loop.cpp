// Loop = chea rom vil chom dea der again and again der rhot dol meet lak khan dea min pit ban chop;

// loop der ban tor mean 3 domlei = start , stop , step;

// loop mean 3 type = for loop,  while loop,  do while loop;

//for loop = pit nit lak khan sin terb der hz( ber 1 tver ber 0 ot tver);

//while loop = vea duj ng for loop dea but khos knea trong (start,stop,step)ah 3 ng vea nv kleng khos knea;
//jg oy vea der rhot trov du dak while(True);

//do while loop = vea der sin ban pi nit lak khan ;

//start;
// do{
//    codes
//   i++ step;
// }while(stop);

//nested loop = meak ka  gea 1 hz in in ka ngea ng mean ka ngea 1 tt;
//or you can say in loop mean loop 1 hz hz mean loop 1 tt in loop ng;



#include <iostream>
using namespace std;
//for loop
int main(){
    int n;
    cout<<"Enter n: ";cin>>n;
 //for (start;stop;step)
 for (int i = 0 ; i < n ; i++){
    cout<< i << " ";
 }
    cout<<"\nDone for loop" << endl;

    return 0;
}
