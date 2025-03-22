#include <iostream>
using namespace std;
// Polymorphic - One name multiple forms
// Types of polymorphism
//1. Compile time polymorphism
    // - Function overloading
    // - Operator overloading
//2. Runtime polymorphism - linking of function call is deferred to runtime here function binding.
    // - Method overriding
    // - Virtual functions
// Pointers to derived class
class BaseClass{
    public:
    int var_base;
    void display(){
        cout << "Base class display"<<"var_base value is"<<var_base << endl;
    }
};

class DerivedClass: public BaseClass{
    public:
    int var_derived;
    void display(){
        cout << "FROM THE DERIVED CLASS Base class display"<<"var_base value is"<<var_base << endl;
        cout << "Derived class display" << ", var_derived value is "<<var_derived << endl;
    }
};
int main() {
    cout << "Polymorphism basics - derived class pointer" << endl;
    BaseClass *ptr;
    BaseClass obj_base;
    DerivedClass obj_derived;
    ptr = &obj_derived; // We are pointing base class pointer to derived class object
return 0;
}