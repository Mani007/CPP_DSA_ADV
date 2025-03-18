#include <iostream>
using namespace std;
class Base{
    int data1;// by default private and is not inheritable
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();

};
void Base::setData(void){
    data1 = 10;
    data2 = 20;
}

int Base::getData1(){
    return data1;
}

int Base::getData2(){
    return data2;
}
class Derived: private Base{ // class is derived public from Base class
    int data3;
    public:
        void processData(void);
        void display(void);

};
void Derived::processData(void){
    data3 = data2 * getData1();
}
void Derived::display(void){
    cout<<"The value of data1 in Base class is "<<getData1()<<endl;
    cout<<"The value of data2 in Base class is "<<data2<<endl;
    cout<<"The value of data3 in Derived class is "<<data3<<endl;
}
int main() {
    cout << "Single inheritance" << endl;
    Derived der;
    der.setData(); // Now we cannot call this method here because we made our inheritance private.
    der.processData(); // This function is called from derived class only
    der.display(); // This function is called from derived class only
return 0;
}