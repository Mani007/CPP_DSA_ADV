#include <iostream>
using namespace std;
class Complex{
    int real, imaginary;
    public:
    Complex(){}; // Generalized constructor
    Complex(int r, int i) {
        real = r;
        imaginary = i;
    }
    void setData(int r, int i){
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
    Complex *cptr = new Complex[5]; // array of object with Complex 
    //(*cptr).display(); // using pointer dereference for pointer
    //cptr->display(); // using arrow operator for pointer
    for (int i = 0; i < 5; i++){
        cptr->setData(i,i+1);
        cptr->display();
        cptr++; // incrementing pointer to next object
    }
    //cptr->display(); // using arrow operator for pointer
    cout << "Complex array address is by pointer cptr is "<< cptr << endl;
    //c1.display();
    delete [] cptr; // to avoid memory leakage

    //cptr->display(); // using arrow operator for pointer
    //cout << "Complex c1 address is by pointer cptr is "<< cptr << endl;
    //c1.display();
return 0;
}