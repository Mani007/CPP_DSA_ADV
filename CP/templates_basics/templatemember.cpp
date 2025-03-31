#include <iostream>
using namespace std;
template <class T>
class Base{
    public:
        T data;
        Base(T d){
            data = d;
        }
        void show(); // function declaration 
};
// function definitions
template <class T>  // We are required to pass this template as well
void Base<T>::show(){
    cout << "The value using show function is: " << data << endl;
}

// Overloading of template function
void func(int a){
    cout << "The value using func function where input is int type is: " << a << endl;
}

template <class T>
void func(T a){
    cout << "The value using func function where input is template type is: " << a << endl;
}
int main() {
cout << "Member function and overloading of template function" << endl;
    // Base<int> obj1(10);
    // obj1.show();
    // Base<float> obj2(10.5);
    // obj2.show();
    // Base<char> obj3('a');
    // obj3.show();
    // cout<<"The value using cout is: " << obj1.data<<endl;
    // cout<<"The value using cout is: " << obj2.data<<endl;
    // cout<<"The value using cout is: " << obj3.data<<endl;
    func(10);  // highest priority is given to exact function definition
    func(10.5);
    func('a');
    

return 0;
}