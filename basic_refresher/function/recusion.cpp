#include <iostream>
using namespace std;
int factorial(int num){ // Recursive fuction for calculating the factorials
    if(num <= 1)
        return 1;
    else
        return(num * factorial(num - 1));
}
int fabonachi(int num){ // Recursive fuction for calculating the fabonachi series
    if(num <= 1){
        return 1;
    } else 
    return(fabonachi(num - 1) + fabonachi(num - 2));
    }
int main() {
    int a;
cout << "Recursion in C++" << endl;
cout<< "Enter the number between 1 to 10" << endl;
cin>> a;
cout <<"The factorial of " << a << " is "<< factorial(a)<< endl;
cout <<"The fabonachi of " << a << " is "<< fabonachi(a)<< endl;
return 0;
}