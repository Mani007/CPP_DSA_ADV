#include <iostream>
using namespace std;
int add(int a, int b){
    //cout <<  " 2 args " << endl;
    return a + b;
}
int add(int a, int b, int c){
    //cout <<  " 3 args " << endl;
    return a + b + c;
}
int main() {
    int a=4,b=5,c=6;
cout << "Function overloading" << endl;
cout << "The sum of two numbers 4 and 5 is " << add(a,b) << endl;
cout << "The sum of three numbers 4,5 and 6 is " << add(a,b,c) << endl;
return 0;
}