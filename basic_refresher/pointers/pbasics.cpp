#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int i=25;
    int *ptr;  // void pointer often used to store object
    ptr = &i;  // store address of float in void pointer
    cout << " int pointer values " << *ptr <<endl;
    cout << " int pointer address   "  << ptr << endl;
    cout << " int pointer address increment to 1   "  << ptr+1 << endl;
    cout << " int pointer increment to 1  and value is "  << *(ptr+1) << endl;
    cout << " int pointer address increment to 2  "  << ptr+2 << endl;
    cout << " int pointer address increment to 2  "  << *(ptr+2) << endl;
   // pointer increment formula is ptr+(n* sizeof(type))
    
return 0;
}