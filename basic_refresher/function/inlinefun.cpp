#include <iostream>
using namespace std;
int mul(int x, int y){  // x, y are formal parameters
    return x * y; 
}
int main() {
cout << "Inline functions" << endl;
cout << "Inline functions call is " << mul(2,3) << endl;  // 2,3 are actual function parameters
cout << "Inline functions" << endl;
return 0;
}