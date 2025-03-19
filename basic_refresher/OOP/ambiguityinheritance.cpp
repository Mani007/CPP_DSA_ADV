#include <iostream>
using namespace std;
// Ambiguity resolution in inheritance
class Base1{
    public:
    void greet(void){
        cout << "Hello from Base1" << endl;
    }
};

class Base2{
    public:
    void greet(void){
        cout << "Hello from Base2" << endl;
    }
};

class Derived : public Base1, public Base2{
    int a;
    public:
    void greet(void){ // Ambiguity resolution
        Base1::greet(); // This will call the greet() from Base1
    }
};
class Derived1: public Base1{ // single inheritance
    int z;
    // void greet(void){ // Ambiguity overriding in derived class
    //     cout << "Hello from Derived1" << endl;
    // }
};
int main() {
    cout << "Ambiguity in C++ inheritance" << endl;
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived derivedObj;
    derivedObj.greet(); // Ambiguity resolved by MRO (Method Resolution Order)
    Derived1 derived1Obj;
    derived1Obj.greet(); // Ambiguity overridden in derived class
return 0;
}