#include <iostream>
using namespace std;
class A{
    int a; // This is a class variable not a local variable
    public:
    A& setData(int a){  // returning the reference variable of the object
        this->a=a; // "this" is a class self referential pointer as priority is always given to local variables and hence use of this pointer will differentiate from the variable we are talking about
        return *this;  // Another use of this pointer to return reference variable of current object 
    }
    void getData(void){
        cout<<"The value of a is "<<a<<endl;
    }
};
// Check the concept of reference variable and reference variable in function return in the basics of C++
int main() {
    cout << "This pointer in C++" << endl;
    A x;
    x.setData(5).getData();  // Because we have self referential pointer we can do method chaining for object
    //x.getData();
return 0;
}