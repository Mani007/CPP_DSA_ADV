#include <iostream>
using namespace std;
template <class T1,class T2>
int funcAVG(T1 a ,T2 b){
    return (a+b)/2;
}
int main() {
cout << "Function template" << endl;
cout << "Another way to do polymorphism and function overloading" << endl;

int result = funcAVG(5, 10);   // The result will be integer

cout << "Average of 5 and 10 is: " << result << endl;

double result1 = funcAVG(5.5, 10.6); // This will  use of template to make answer double
cout << "The average of 5.5 and 10.6 is "<<result1 << endl;
return 0;
}