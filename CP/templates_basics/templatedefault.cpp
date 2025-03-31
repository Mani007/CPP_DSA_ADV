#include <iostream>
using namespace std;
template <class T1=int,class T2=float>
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
cout << "Templates with default types" << endl;
    Base<> obj1(10, 20.5); // default int, float
    cout<<"Default type template with default types"<< endl;
    obj1.show();
    Base<int, double> obj2(10, 20.5); // int, double
    cout<<"Default type template with different types"<< endl;
    obj2.show();
return 0;
}