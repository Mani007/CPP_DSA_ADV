// Function pointer
#include <iostream>
using namespace std;
void foo();
int main() {
cout << "Function pointer and its applications" << endl;
cout<< "Address of function foo is " << foo << endl;
cout<< "Address of function foo is " << &foo << endl;
//cout<< "Output after the function foo is called is " << foo() << endl;
return 0;
}
void foo(){
    cout << "This is function foo" << endl;
}