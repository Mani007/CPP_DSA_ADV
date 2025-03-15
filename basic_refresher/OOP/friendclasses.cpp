#include <iostream>
using namespace std;
class Complex; // This is called forward declaration of the class, for resolution of later classes. 
class Calculator{
    public:
    int add(int a,int b){
        return a+b;
    }
    int sumRealComplex(Complex , Complex );
    // This function will through an error at compile time. We need to define this function outside the class with scope resolution.
    // int sumRealComplex(Complex o1, Complex o2){ 
    //     return (o1.a+o2.a)
    // }
};

class Complex {
    int a,b;
    friend int Calculator::sumRealComplex(Complex o1,Complex o2); // Giving the class calculator member function acces to private variables.  
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
int Calculator::sumRealComplex(Complex o1, Complex o2){ 
    return (o1.a+o2.a);
}
int main() {
cout << "Friend classes in CPP" << endl;
return 0;
}