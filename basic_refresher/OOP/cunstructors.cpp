#include <iostream>
using namespace std;
class Complex{
    int real,imag;
    public:
    //Constructor is a special member function with same name as class and it is called whenever the object is created. It is used to initialize the object.
    // Constructor should always be in public class and they invoke automatically. 
    // Constructor does not have return types.
    // We cannot refer to the address of constructor
    Complex(int x, int y);
    void printData(void){
        cout << "Complex number is " << real << "+" << imag <<"i" << endl;
    }
    //Destructor is a special member function with a special name " ~classname" and it is called when an object goes out of scope. It is used to free up any dynamically allocated memory.
};

Complex::Complex(int x, int y){ // Constructor with parameter is called parameterized constructor
    real = x;
    imag = y;
}
int main() {
    cout << "Constructors in CPP" << endl;

//Creating object of Complex class
    Complex c1(2,3),c2(3,4); // Implicit call
    Complex c3 = Complex(4,5); // Explicit call
    c1.printData(); // Output: Real part = 3, Imaginary part = 4
    c2.printData(); 
    c3.printData(); 
return 0;
}