#include <iostream>
#include <windows.h>
using namespace std;

int main(){

//    for(int i =1 ; i <= 3 ; i++){
//     cout<<" i =" << i << endl;  
//     for(int j =1 ; j<= i ; j++){
//         Sleep(1000);
//         cout<<"\tj =" << j << endl;
//     }
//    }


//     int row;
//     cout<<"Enter # row :";
//     cin>>row;
// for(int i = 1; i<= row ; i ++){
//     for(int j =1; j <= i ; j++){
//         cout<<"*" ;
//     }
//     cout<< endl;
// }


// int row;
//      cout<<"Enter # row :";
//           cin>>row;
//  for(int i = 1; i<= row ; i ++){
//    for(int j =1; j <= i ; j++){
//        cout<<j ;
//      }
//      cout<< endl;
//      }



int row;
     cout<<"Enter # row :";
     cin>>row;
 for(int i = 1; i<= row ; i ++){
     for(int j =1; j <= i ; j++){
         cout<<i ;
     }
     cout<< endl;
 }


    return 0;
}