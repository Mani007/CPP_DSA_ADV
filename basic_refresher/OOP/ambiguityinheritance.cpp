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
};
int main() {
    cout << "Ambiguity in C++ inheritance" << endl;
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
return 0;
}