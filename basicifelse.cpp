#include <iostream>
using namespace std;

int main() {
    int x = 7; //change this value to see the result for else condition
    if (x == 7) {
        //this code is executed only if x does indeed contain the integer value 7
        cout << "Value of x is 7"<<endl; 
    } else {
        //this code is executed if the preceding if condition evaluated to false
        cout << "Value of x is not 7 "<<endl;
    }
    return 0;
}