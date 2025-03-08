#include <iostream>
using namespace std;
// Fuction accepting references as input
int & swap(int &a,int &b){   // returning a reference variable
    int temp =a;
    a = b;
    b = temp;
    return a;
}
int main() {
    int a=4,b=5;
//int *p=&a, *q=&b;
    cout << "Inline functions" << endl;
    int reff = 10;
    int &reffvar = reff; // reffvar is a reference variable storing the address of reff variable
    cout << "Call by value and call by reff " << endl;  // 2,3 are actual function parameters
    cout << "Current value of a is "<< a << " and value of b is "<< b << endl;
    swap(a, b) = 225; // this will swap a,b using reference variables
    cout << "NEW value of a is "<< a << " and value of b is "<< b << endl;
    return 0;
}


