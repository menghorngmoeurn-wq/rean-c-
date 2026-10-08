#include <iostream>
using namespace std;

namespace kh{
    void greeting(){
        cout << "hello" << endl;
    }
}
int main(){
 kh :: greeting();

    // std :: cout << "Hello" << std :: endl;
    //std = standact
    // :: = scope resolution operator
    // << = stream insertion operator
    // <> angle bracket

    return 0;
}
// git --version
// git init
// git branch -M main
// git add preprocessor


