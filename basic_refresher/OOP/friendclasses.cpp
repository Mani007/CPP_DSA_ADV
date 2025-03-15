#include <iostream>
using namespace std;
class Complex; // This is called forward declaration of the class, for resolution of later classes. 
class Calculator{
    public:
    int add(int a,int b){
        return a+b;
    }
    int sumRealComplex(Complex , Complex );
    int sumCompComplex(Complex , Complex );
    // This function will through an error at compile time. We need to define this function outside the class with scope resolution.
    // int sumRealComplex(Complex o1, Complex o2){ 
    //     return (o1.a+o2.a)
    // }
};

class Complex {
    int a,b;
    //friend int Calculator::sumRealComplex(Complex o1,Complex o2); // Giving the class calculator member function access to private variables.  
    //friend int Calculator::sumCompComplex(Complex o1,Complex o2); // Giving the class calculator member function access to private variables.  
    friend class Calculator; // Making the entire class as friend class
    public:
        void setData(int x,int y){
            a = x;
            b = y;
        }
        // void addComplex(Complex c1,Complex c2){
        //     a = c1.a + c2.a;
        //     b = c1.b + c2.b;
        // }
        //friend Complex sumComplex(Complex x,Complex y); // Making private members available to a function called sumComplex
        void displayComplex(void){
            cout <<"The Complex number is "<< a << " + " << b << "i" << endl;
        }
        void displayComplexSum(void){
            cout <<"The Complex number SUM is "<< a << " + " << b << "i" << endl;
        }
};
int Calculator::sumRealComplex(Complex o1, Complex o2){  // We defined this function after declaring the complex class, and hence we declared the function outside the class.
    return (o1.a+o2.a);
}
int Calculator::sumCompComplex(Complex o1,Complex o2){ 
    return (o1.b+o2.b);
}
int main() {
    cout << "Friend classes in CPP" << endl;
    Complex i1,i2;
    i1.setData(2,3);
    i2.setData(3,2);
    i1.displayComplex();
    i2.displayComplex();
    Calculator calc;
    cout << "Sum of real part of two complex numbers: " << calc.sumRealComplex(i1,i2) << endl;
    cout << "Sum of complex part of two complex numbers: " << calc.sumCompComplex(i1,i2) << endl;
    
    return 0;
}