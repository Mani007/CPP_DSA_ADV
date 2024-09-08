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
cout << "Logical operators for not " << !(num1 != num2) << endl;   // Logical not operator
cout << "Logical operators for and && " << ((num1 < num2) && (5>2)) << endl;  // logical and operator, pay attention to brackets
cout << "Logical operators for or || " << ((num1 < num2) || (5>2)) << endl;  // logical or operator, pay attention to brackets
cout << "Unary operator for ++ is num++ " << (num1++) << endl; // first progress then update value of num1 
cout << "Unary operator for ++ is ++num " << (++num1) << endl; // first update the value of num1 then progress
cout << "Unary operator for ++ is num=+1 " << (num1=+1) << endl; // increment the value of num1 and update it
cout << "Unary operator for ++ is num=-1 " << (num1=-1) << endl; // increment the value of num1 and update it
cout << "Unary operator for ++ is num+=1 " << (num1+=1) << endl; // increment the value of num1 and update it
cout << "Unary operator for -- is num+=1 " << (num1-=1) << endl; // decrement the value of num1 and update it
return 0;
}