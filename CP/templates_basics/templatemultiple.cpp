#include <iostream>
using namespace std;
// class template with multiple parameters
template <class T1,class T2>
class Base{
    T1 a;
    T2 b;
    public:
    Base(T1 x, T2 y){
        a = x;
        b = y;
    }
    void show(){
        cout << "The value are "<<"a = " << a << ", b = " << b << endl;
    }
};
int main() {
cout << "Templates with multiple parameter" << endl;
    Base<int, float> obj1(10, 5.5);
    cout<<"Constructor with int and float"<< endl;
    obj1.show();
    Base<float, double> obj2(5.5, 10.0);
    cout<<"Constructor with float and double"<< endl;
    obj2.show();
return 0;
}