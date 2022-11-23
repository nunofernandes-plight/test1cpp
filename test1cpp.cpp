#include <iostream>
using namespace std;

int main() {
int x = 7;
int y = 5;
int a = ( x > y ) ? x : y; // here we are using conditional expression to evaluate
cout << "value of a using conditional expression is: " << a <<endl;
//this is equivalent to:

if (x > y){      // here we are usig if-else which will gave same output
    a = x;
    cout << "value of a using if-else is: " << a<<endl;
}else {
    a = y;
    cout << "value of a using if-else is: " << a <<endl;
}
return 0;
}