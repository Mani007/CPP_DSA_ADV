#include <iostream>
using namespace std;
int main() {
cout << "Array pointers" << endl;
int arr[5];
int* arrptr;
arrptr = &arr[0];
for (int i = 0; i < 5; i++){
    arr[i] = i;
    cout << "Address of arr[" << i << "] = " << &arr[i] << ", Value of arr[" << i << "] = " << *(arrptr + i) << endl;
}
// cout << "Array pointers" << endl;
return 0;
}