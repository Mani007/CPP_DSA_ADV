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

    void display(void){
        cout << "Number: " << number << endl;
    }
};
int main() {
cout << "Copy constructors" << endl;

Number n1(10); // Constructor with argument

Number n2, n3; // General object using generic constructor
n1.display();
Number n4(n1); // creating n4 object using copy constructor
n4.display();
// Copy constructor should exactly copy n1 
return 0;
}