#include <iostream>
using namespace std;
int add2(int a, int b){
    return a + b;
}
int add3(int a, int b, int c){
    return a + b + c;
}
int main() {
    int a=4,b=5,c=6;
cout << "Function overloading" << endl;
cout << "The sum of two numbers 4 and 5 is " << add2(a,b) << endl;
cout << "The sum of three numbers 4,5 and 6 is " << add3(a,b,c) << endl;
return 0;
}