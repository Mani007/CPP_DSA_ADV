#include <iostream>
using namespace std;
int main() {
    float f=10.3;
    float *ptr;  // void pointer often used to store object
    ptr = &f;  // store address of float in void pointer
    cout << " float pointer values " << *ptr <<endl;
cout << " float pointer address " << ptr << endl;
return 0;
}