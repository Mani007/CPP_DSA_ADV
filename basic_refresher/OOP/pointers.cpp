#include <iostream>
using namespace std;
int main() {
    cout << "Pointers in C++" << endl;
    int var1 = 10;
    int *ptr1 = &var1;
    cout << "Value of var1: " << var1 << endl;
    cout << "Address of var1: " << &var1 << endl;
    cout << "Value of address stored by pointer ptr1: " << ptr1 << endl;
    cout << "Value pointed by ptr1: " << *ptr1 << endl; // dereferencing pointer to its value
    // use of new and delete keyword in c++ for pointers
    int *ptr2 = new int(5); // integer pointer *ptr2 holding address of value 5
    cout << "Address of ptr2: " << ptr2 << endl;
    cout << "Value of ptr2: " << *ptr2 << endl;
    delete ptr2; // free dynamically allocated memory
    ptr2 = nullptr; // set ptr2 to null to prevent dangling pointer
    // array pointers in C++
    int *arr = new int[5]; //integer array of size 5 integers whose index address at arr
    for (int i = 0; i < 5; i++){
        arr[i] = i;
        cout << "Address of arr[" << i << "] = " << &arr[i] << ", Value of arr[" << i << "] = " << arr[i] << endl;
    }
    arr[1]=25; // setting up value in array
    *(arr+3)=30; // setting up value in array using pointer dereferencing 
    delete[] arr; // free dynamically allocated memory for array
    
return 0;
}