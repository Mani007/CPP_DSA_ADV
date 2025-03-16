#include <iostream>
using namespace std;
class Number{
    int number;
    public:
    Number(){} // Generalized constructor
    // Number(){ // Default value constructor
    //     number = 0;
    // }
    Number(int num){
        number = num;
    }
    //A copy constructor taking reference of the original Number object
    Number(const Number &obj){ // Copy constructor
        cout<<"Copy constructor called"<<endl;
        number = obj.number;
    }
    // When there is no copy constructor found, compiler will run its default copy constructor 

    void display(void){
        cout << "Number: " << number << endl;
    }
};
int main() {
cout << "Copy constructors" << endl;

Number n1(10); // Constructor with argument

Number n2, n3; // General object using generic constructor
n1.display();
Number n4(n1); // creating n4 object using Default copy constructor by Compiler
n4.display();
n2 = n1;  // This assignment will also invoke our copy constructor
n2.display();

return 0;
}