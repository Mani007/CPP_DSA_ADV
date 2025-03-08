#include <iostream>
using namespace std;
int factorial(int num){
    if(num == 1)
        return 1;
    else
        return(num * factorial(num - 1));
}
int main() {
    int a;
cout << "Recursion in C++" << endl;
cout<< "Enter the number between 1 to 10" << endl;
cin>> a;
cout <<"The factorial of " << a << " is "<< factorial(a)<< endl;
return 0;
}