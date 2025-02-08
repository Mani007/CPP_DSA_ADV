#include <iostream>
using namespace std;
int main() {
    float f=10.3;
    void *ptr;  // void pointer often used to store object
    ptr = &f;  // store address of float in void pointer
    cout << " void pointer values" << *ptr <<endl;
cout << "New file" << endl;
return 0;
}