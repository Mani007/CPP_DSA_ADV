#include <iostream>
using namespace std;
// Fuction accepting references as input

inline int product(int a, int b){
    return a * b;  // Inline function call
}
int main() {
    int a=4,b=5;
//int *p=&a, *q=&b;
    cout << "Inline functions" << endl;
    cout << "Inline function product is called and result of 4x5 is "<< product(a,b) << endl;
    
    return 0;
}


