//method : setw(),setprecision()//key word don't have()
//left,right
#include <iostream>//iostream don't have stew so u need to add iomanip
#include <iomanip>
using namespace std;

int main(){
system("cls");
    cout << left << setfill('#') << setw(10) << "abc" << "bbbb";     //1 word dak in ('')
    cout << endl;     
cout << left << setfill('*') << setw(10) << "123" ;// setw(10)dak hz trov dak <<"" yang tix ber min smer ng ot nei
cout << endl;
cout << right << setfill('$') << setw(10) << "abc";
cout << endl;
    return 0;
}
// ctrl L lub 1 jor
//function
//

