#include <iostream>
using namespace std;
int main() {
    // We can have implicit(often known as conversion) and explicit typecasting 
    /* Typecasing is often used for big data type to small data type  */
    char grade = 'a';
    int value = grade; // implicit conversion
    cout << "Type casted value of grade "<< value << endl;
    cout << "original value of grade "<< char(value) << endl;
return 0;
}