#include <iostream>
using namespace std;
int main() {
cout << "Arithmetic operators" << endl;
int num1,num2;
cout << "Please enter first number: "<< endl;
cin >> num1;
cout << "Please enter second number: "<< endl;
cin >> num2;

cout << "Addition: " << num1 + num2 << endl;
cout << "Subtraction: " << num1 - num2 << endl;
cout << "Multiplication: " << num1 * num2 << endl;
cout << "Division: " << num1 / num2 << endl;
cout << "Modulo: " << num1 % num2 << endl;
cout << "int division give int result not the float " << 5 / 2 << endl;
cout << "int division give float if " << 5.5 / 2 << endl;
cout << "Relational operators for > " << (num1 > num2) << endl; // make sure you put brackets during operations returns 0 or 1 as false and true value respectively 
cout << "Relational operators for >= " << (num1 >= num2) << endl; // make sure you put brackets during operations
cout << "Relational operators for < " << (num1 < num2) << endl;
cout << "Relational operators for <= " << (num1 <= num2) << endl;
cout << "Relational operators for not equal " << (num1 != num2) << endl; 

return 0;
}