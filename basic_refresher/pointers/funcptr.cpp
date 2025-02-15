// Function pointer
#include <iostream>
using namespace std;
void foo(); // function defintion declaration 
int algebra(int,int); 
int main() {
cout << "Function pointer and its applications" << endl;
cout<< "Address of function foo is " << foo << endl;
cout<< "Address of function foo is " << &foo << endl;
//cout<< "Output after the function foo is called is " << foo() << endl;
void (*ptr)(); // Declaration of fuction pointer ptr which return void type and accepts no arguments. 
int (*algptr)(int,int); // Declaration of fuction pointer algptr which return int type and accepts two int types.
int result; //
algptr = algebra; // Storing the function address
//ptr = &foo;   // Storing the function address
ptr = foo; // A better way of storing the function address
ptr();  // Calling the function through function pointer
result = algptr(3,4); 
cout << "algptr result = " << result << endl;
cout << "Address of function foo using pointer ptr is " << ptr<<endl; // checking address of function foo
cout << "Address of function algebra using pointer algptr is " << algptr <<endl; // checking address of function algptr
cout << "value of function algebra using pointer algptr is " << algptr(5,10)<<endl; // checking address of function algptr
return 0;
}
void foo(){
    cout << "This is function foo called from function pointer" << endl;
}
int algebra(int arg1, int arg2){
    return arg1 + arg2;
}