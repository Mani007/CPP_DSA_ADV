#include <iostream>
using namespace std;
int ADD(int a, int b);
int main() {
int ans;
int ansref;
int a = 10;
int b = 20;
cout << "Giving a SUM function call below" << endl;
ans = ADD(4,3); // parameter passed by value
cout << "The ADD of 4 and 3 using function ADD function by value is: " << ans << endl;
ansref = ADDREF(&a,&b); // parameter passed by value
cout << "The ADD of 4 and 3 using function ADDREF function by value is: " << ansref << endl;
    

return 0;
}
// Function definition
int ADD(int a, int b) {
return a + b;
}
int ADDREF(int *a, int *b) {
return *a + *b;
}