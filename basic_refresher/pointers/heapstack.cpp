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
    int num = 10;
    int* ptr = &num; //
    return ptr; // return address of num
}

void display(){
    int num = 20;
}