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
    //Complex c1(2,5);
    //Complex *cptr = &c1;
    Complex *cptr = new Complex(2,5); // another way of creating object
    (*cptr).display(); // using pointer dereference for pointer
    //cptr->display(); // using arrow operator for pointer
    cout << "Complex c1 address is by pointer cptr is "<< cptr << endl;
    //c1.display();
return 0;
}