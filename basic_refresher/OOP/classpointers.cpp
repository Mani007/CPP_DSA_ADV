#include <iostream>
using namespace std;
class Complex{
    int real, imaginary;
    public:
    Complex(int r, int i) {
        real = r;
        imaginary = i;
    }
    void display(void) {
        cout <<"The complex number is "<< real << " + " << imaginary << "i" << endl;
    }
};
int main() {
    cout << "Class pointers and arrow operator" << endl;
    Complex c1(2,5);
    c1.display();
return 0;
}