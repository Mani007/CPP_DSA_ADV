#include <iostream>
using namespace std;
int ADD(int a, int b);
int main() {
int ans;
cout << "Giving a SUM function call below" << endl;
ans = ADD(4,3); //
cout << "The sum of 4 and 3 using function SUM is: " << ans << endl;
    

return 0;
}
// Function definition
int ADD(int a, int b) {
return a + b;
}