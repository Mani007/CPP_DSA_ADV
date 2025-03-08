#include <iostream>
using namespace std;
void greet(void); // function prototype
int mul(int x, int y){  // x, y are formal parameters
    return x * y; 
}
int main() {
cout << "Inline functions" << endl;
cout << "Inline functions call is " << mul(2,3) << endl;  // 2,3 are actual function parameters
cout << "Inline functions" << endl;
greet();
return 0;
}

void greet(){
    cout << "Hello, World!" << endl;
}