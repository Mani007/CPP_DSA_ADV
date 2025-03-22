#include <iostream>
using namespace std;
class BaseClass{
    public:
    int var_base;
    // run time polymorphism is achieved
    virtual void display(){ // making function virtual such that if derived class reference pointer (pointing to base class) calls for display then run the display function in derived class only. Virtual function donates their priority.
        cout << "Base class display "<<" var_base value is "<<var_base << endl;
    }
};

class DerivedClass: public BaseClass{
    public:
    int var_derived;
    void display(){
        cout << "FROM THE DERIVED CLASS Base class display"<<"var_base value is "<<var_base << endl;
        cout << "Derived class display" << ", var_derived value is "<<var_derived << endl;
    }
};
int main() {
    cout << "Virtual function and run time polymorphism" << endl;
    BaseClass *baseptr;
    BaseClass obj_base;
    DerivedClass obj_derived;
    baseptr = &obj_derived; // base class pointer referring to derived class object
    baseptr->var_base=34;
    baseptr->display(); // this will run display function of base class although it is referring to derived class
return 0;
}