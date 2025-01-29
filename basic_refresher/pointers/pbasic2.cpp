#include <iostream>
#include <string>
using namespace std;
int ADD(int a, int b);

int ADDREF(int *a, int *b,string *slocal);
int main() {
string str = "YAAHAA";
string *strptr;
strptr = &str;
int ans;
int ansref;
int a = 10;
int b = 20;
cout << "Giving a SUM function call below" << endl;
ans = ADD(4,3); // parameter passed by value
cout << "The ADD of 4 and 3 using function ADD function by value is: " << ans << endl;
cout << "The value of string STR before fuction call is: " << str << endl;
ansref = ADDREF(&a,&b,&str); // parameter passed by reference
cout << "The value of string STR AFTER fuction call is: " << str << endl;
cout << "The ADDREF of 4 and 3 using function ADDREF function by value is: " << ansref << endl;
    

return 0;
}
// Function definition
int ADD(int a, int b) {
return a + b;
}
int ADDREF(int *a, int *b, string *slocal) {
cout << "Local string by address is "<<slocal << endl;
// try to do string modification and in local function 
*slocal = "ABC";
return *a + *b;
}