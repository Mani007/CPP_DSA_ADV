// Function pointer
#include <iostream>
using namespace std;
void foo();
int main() {
cout << "Function pointer and its applications" << endl;
cout<< "Address of function foo is " << foo << endl;
cout<< "Address of function foo is " << &foo << endl;
//cout<< "Output after the function foo is called is " << foo() << endl;
void (*ptr)(); // Declaration of fuction pointer ptr which return void type and accepts no arguments. 
ptr = &foo;   // Storing the function address
ptr();  // Calling the function through function pointer 
cout << "Address of function foo using pointer ptr is " << ptr<<endl; // checking address of function foo
return 0;
}
void foo(){
    cout << "This is function foo called from function pointer" << endl;
}