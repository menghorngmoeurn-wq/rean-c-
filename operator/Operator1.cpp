#include <iostream>
using namespace std;

int main(){

    string text = "bcd";
    string addText; //pi word yg trov dak ah sor thom pi 2
    // if u don't want to dak jg u need u dak _ (ex:Ahdi_jiki)

    cout<< "Current text : "
        << text
        << endl;

    cout << "Add Text : ";
    cin>>addText;

    text += (" " + addText);
    //text = text + addtext;
    cout<<" update Text : "
        <<  text
        << endl;
        
    return 0;
}