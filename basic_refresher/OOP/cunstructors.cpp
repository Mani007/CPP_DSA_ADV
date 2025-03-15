#include <iostream>
using namespace std;
class Complex{
    int real,imag;
    public:
    //Constructor is a special member function with same name as class and it is called whenever the object is created. It is used to initialize the object.
    Complex(int x, int y);
    void printData(void){
        cout << "Real part = " << real << ", Imaginary part = " << imag << endl;
    }
    //Destructor is a special member function with a special name " ~classname" and it is called when an object goes out of scope. It is used to free up any dynamically allocated memory.
};

Complex::Complex(int x, int y){
    real = x;
    imag = y;
}
int main() {
    cout << "Constructors in CPP" << endl;

//Creating object of Complex class
    Complex c1(3, 4);
    c1.printData(); // Output: Real part = 3, Imaginary part = 4
return 0;
}