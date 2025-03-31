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
template <class T>
void Base<T>::show(){
    cout << "The value using show function is: " << data << endl;
}
int main() {
cout << "Member function and overloading of template function" << endl;
    Base<int> obj1(10);
    obj1.show();
    Base<float> obj2(10.5);
    obj2.show();
    Base<char> obj3('a');
    obj3.show();
    cout<<"The value using cout is: " << obj1.data<<endl;

return 0;
}