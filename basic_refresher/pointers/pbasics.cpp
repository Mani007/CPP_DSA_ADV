#include <iostream>
using namespace std;
int main() {
    int f=43;
    int *ptr;  // void pointer often used to store object
    ptr = &f;  // store address of float in void pointer
    cout << " int pointer values " << *ptr <<endl;
    cout << " int pointer address " << ptr << endl;
    cout << " int pointer VALUE type casted to float " << *(char* )ptr << endl;
    cout << " int pointer ADDRESS type casted to float " << (char* )ptr << endl;
    // Please note that the pointer pointing to the same location but dereferencing two different types of values 
    
return 0;
}