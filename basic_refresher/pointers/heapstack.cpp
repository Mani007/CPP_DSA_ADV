#include <iostream>
using namespace std;
int* digit();
void display();
int main() {
cout << "Difference between heap and stack memory allocation" << endl;
int *ptr ;
ptr = digit();

cout << "Value of num using ptr: " << *ptr << endl;
display();
cout << "Value of num after calling display function: " << *ptr <<endl; // value of num is not changed because display function creates a new local variable num.
return 0;
}

int* digit(){
    int *num;
    num = (int*)malloc(sizeof(int)); 
    *num = 10; // assign value of num to dynamically allocated memory
    return num; // return address of num
}

void display(){
    int num1;
    num1 =20;
    cout << "Value of num1 inside display function: " << num1 << endl; // value of num1 is changed because it is a local variable
}