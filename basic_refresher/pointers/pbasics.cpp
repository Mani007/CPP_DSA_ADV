#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    char c='A';
    char *ptr;  // void pointer often used to store object
    ptr = &c;  // store address of float in void pointer
    cout << " char pointer values " << *ptr <<endl;
    cout << " char pointer address   " << std::dec << ptr << endl;
   
    
return 0;
}