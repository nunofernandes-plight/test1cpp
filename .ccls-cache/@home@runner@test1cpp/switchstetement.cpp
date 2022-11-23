#include <iostream>
using namespace std;
int main()
{
  int x = 2;
  int temp;
    switch (x) {
    case 1:
        temp = 1;
        break;
    case 2:
        temp = 2;
        break;
    default:
        temp = 3;
        break;
    }
  cout << "Value of temp is: "<< temp << endl;
  return 0;
}