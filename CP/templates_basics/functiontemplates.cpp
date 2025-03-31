#include <iostream>
using namespace std;
int funcAVG(int a ,int b){
    return (a+b)/2;
}
int main() {
cout << "Function template" << endl;

int result = funcAVG(5, 10);

cout << "Average of 5 and 10 is: " << result << endl;

double result1 = funcAVG(5.5, 10.5); // This will require use of template
return 0;
}