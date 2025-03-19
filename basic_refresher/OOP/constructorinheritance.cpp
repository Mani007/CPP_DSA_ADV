#include <iostream>
using namespace std;
// base class constructor is always called first
// in multiple inheritance the base class constructor is called in the order of their appearance.
// in multilevel inheritance the constructor is called based on their order of inheritance.
// constructor of virtual base class is invoked first before the normal class
class Base1{
    protected:
    int num1; 
    public:
    Base1(int a){
        num1 = a;
        cout << "Base1 constructor called with value: " << num1 << endl;
    }
};
class Base2{
    protected:
    int num2; 
    public:
    Base2(int a){
        num2 = a;
        cout << "Base2 constructor called with value: " << num2 << endl;
    }
};

class Derived: public Base2, public Base1{
     protected:
    int num3;
    public:
    Derived(int a, int b, int c): Base1(a), Base2(b){
        num3 = c;
        cout << "Derived constructor called with values: " << num1 << ", " << num2 << ", " << num3 << endl;
    }
};
int main() {
cout << "Constructors in Inheritance" << endl;

Derived d(1,2,3); // Calls Base1 and Base2 constructor in order of appearance

return 0;
}