#include <iostream>
#include <functional> // for functors
#include <algorithm> // for all the stadard STL algos
using namespace std;
// function object is simply a function wrapped in a class so that it is available like an object. In python it is similar to decorators. It is also an application of operator overloading of "()" "
int main() {
cout << "Function objects or functors" << endl;
int arr[] = {2,6,3,1,9,5};
sort(arr,arr+3);  // first 4 elemnets of the array are sorted here
for(int i = 0; i < 5;i++){
    cout << arr[i] << " "<<endl;
}
return 0;
}