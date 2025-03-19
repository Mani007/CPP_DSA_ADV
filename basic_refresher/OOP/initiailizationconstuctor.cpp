#include <iostream>
using namespace std;
/*
Syntax of initialization list in constructor
1. Syntax: ClassName::ClassName(arg1, arg2,..., argN): initialization list(arg1, arg2,..., argN) {
         constructor body
}
example:

class Point {
    int x, y;
    public:
    Point(int a=0, int b=0) : x(a), y(b) {
        cout << "Point constructor called with (" << a << ", " << b << ")" << endl;
    }
    void printPoint(void){
        cout << "Point are (" << x << ", " << y << ")" << endl;
    }
 };
*/
class Test{
    int a, b;
    public:
    Test(int a, int b) : a(a), b(a+b) {
        cout << "Test constructor called with (" << a << ", " << b << ")" << endl;
        cout<< "a = " << a << ", b = " << b << b;
    }
};
int main() {
cout << "Initialization of list in C++" << endl;

Test obj(5,6); // Test constructor called with (10, 20)

return 0;
}