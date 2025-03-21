#include <iostream>
using namespace std;
class A{
    int a;
    public:
    void setData(int a){  // we cannot declare the variable name same as class variable. To make this work we need to use "this" pointer  
        a=a;
    }
    void getData(void){
        cout<<"The value of a is "<<a<<endl;
    }
};

int main() {
    cout << "This pointer in C++" << endl;
    A x;
    x.setData(5);
    x.getData();
return 0;
}