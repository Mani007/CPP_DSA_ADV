#include <iostream>
using namespace std;
class Base{
    int x,y,z;
    public:
    Base(int a =0 ,int b = 0,int c =0){
        x = a;
        y = b;
        z = c;
    }
    void show(){
        cout << "The value are "<<"x = " << x << ", y = " << y << ", z = " << z << endl;
    }
};
int main() {
cout << "Default parameter in constructor" << endl;
    Base obj1; // default base value
    cout<<"Constructor with default base value"<< endl;
    obj1.show();
    Base obj2(10,20,30); // setting up value
    cout<<"Constructor with setting the base value"<< endl;
    obj2.show();
    Base obj3(10,20); // setting up value
    cout<<"Constructor with setting the base value and default value for z"<< endl;
    obj3.show();
    //Base obj4(x=10,y=0,z=20); // this will not work as x,y,z are private members of the class
return 0;
}