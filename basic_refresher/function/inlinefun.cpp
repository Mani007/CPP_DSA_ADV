#include <iostream>
using namespace std;
// Make sure to choose when to make function inline
// inline function is should not be used in recursions, static variables, in loops, in switch statements
int product(int a, int b=0) { // Function with default parameters, default parameters are always at the end
    return a * b;  // Inline function call
}
// Constant parameter in C++
// void greet(const char *ch){} // constant character pointer of the function
int main() {
    int a=4,b=5;
//int *p=&a, *q=&b;
    cout << "Normal functions" << endl;
    cout << "Normal function product is called and result of 4x5 is "<< product(a,b) << endl;
    cout << "Normal function product is called and result of 4x0 by default is "<< product(a) << endl;
    
    return 0;
}


