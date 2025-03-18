#include <iostream>
using namespace std;
// multiple inheritance syntax
// class derived class name: visiblity-mode baseClass1, visiblity-mode baseClass2
class Base1{
    protected:
    int x;
    public:
    void base1int(int a){
        x = a;
    }
};
class Base2{
    protected:
    int y;
    public:
    void base2int(int b){
        y = b;
    }
};

class Derived: public Base1, public Base2{
    int sum;
    public:
    int add(void){
        sum = x + y;
        return sum;
    }
    void display(){
        cout << "classBase1 x: " << x << endl;
        cout << "classBase2 y: " << y << endl;
        cout << "classDerived sum of x+y is : " << add() << endl;
    }
};
int main() {
cout << "Multiple inheritance" << endl;
    Derived obj;
    obj.base1int(5);
    obj.base2int(10);

    obj.display();

return 0;
}