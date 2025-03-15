#include <iostream>
using namespace std;
class Complex {
    int a,b;
    public:
        void setData(int x,int y){
            a = x;
            b = y;
        }
        // void addComplex(Complex c1,Complex c2){
        //     a = c1.a + c2.a;
        //     b = c1.b + c2.b;
        // }
        friend Complex sumComplex(Complex x,Complex y); // Making private members available to a function called sumComplex
        void displayComplex(void){
            cout <<"The Complex number is "<< a << " + " << b << "i" << endl;
        }
        void displayComplexSum(void){
            cout <<"The Complex number SUM is "<< a << " + " << b << "i" << endl;
        }
};
Complex sumComplex(Complex o1,Complex o2){
    Complex sumC;
    sumC.setData((o1.a+o2.a),(o1.b+o2.b));  // You are trying to access private data of a class
    return sumC;

}
int main() {
cout << "Understanding friend functions in CPP" << endl;
    Complex c1,c2,c3;
     c1.setData(3,4);
     c1.displayComplex();
     c2.setData(1,2);
     c2.displayComplex();
    // c3.addComplex(c1,c2);
    // c3.displayComplexSum();

    c3 = sumComplex(c1,c2);
    c3.displayComplexSum();

    
return 0;
}