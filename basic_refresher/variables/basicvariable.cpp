#include <iostream>
using namespace std;
int main() {
    // All possible primitive data types
    int age = 25;
    char grade = 'a';
    float PI = 3.14;
    bool x= false;
    double j = 0.5;
    cout << "Size of (integer Age) is " << sizeof(age) << " Bytes" << endl;  // Integer takes 4 bytes in C++
    cout << "Value of (integer Age) is " << age << endl;  // Integer takes 4 bytes in C++
    cout << "Size of (char grade) is " << sizeof(grade) << " Bytes" << endl;  // char takes 1 bytes in C++
    cout << "Value of (char grade) is " << grade << endl;
    cout << "Size of (float PI) is " << sizeof(PI) << " Bytes" << endl;  // float takes 4 bytes in C++
    cout << "Value of (float PI) is " << PI << endl;
    cout << "Size of (bool x) is " << sizeof(x) << " Bytes" << endl;  // boolean takes 1 bytes in C++
    cout << "Value of (bool x) is " << x << endl;
    cout << "Size of (double j) is " << sizeof(j) << " Bytes" << endl;  // double takes 8 bytes in C++
    cout << "Value of (double j) is " << j << endl;
return 0;
}