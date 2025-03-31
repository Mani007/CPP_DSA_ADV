#include <iostream>
using namespace std;
/* Templates or Generics are generalized classes 
*/
template <class T>  // T can be anything int,float, object etc. 
class Vector1{
    public:
    T *arr; // passing the template variable here
    int size;
    Vector1(int n){
        size = n;
        arr = new T[size];  // passing the template variable here
    }
    T sum(Vector1 &v){  // passing the template variable here
        T sum = 0;
        for(int i = 0; i < size; i++)
            sum += arr[i] + v.arr[i];
        return sum;
    }
    T dotproduct(Vector1 &v){ // passing the template variable here
        T sum = 0;  // passing the template variable here as it returns T as output
        for(int i = 0; i < size; i++){
            sum += this->arr[i] * v.arr[i]; // this refer to current object and v refer to object we have passes to the function.this is also called as self referential pointer.
        }
        return sum;
    }
};
int main() {
cout << "Templates in CPP" << endl;

    Vector1 <int>v1(3);
    //v1->arr =12; // We cannot use this as we do not have pointer for the object as we have not allocated memory using new keyword syntax. ERROR: has non-pointer type vector1
    v1.arr[0] = 1;
    v1.arr[1] = 2;
    v1.arr[2] = 3;

    Vector1 <int>v2(3);
    v2.arr[0] = 4;
    v2.arr[1] = 5;
    v2.arr[2] = 6;
    cout << "Sum of vectors v1 and v2: " << v1.sum(v2) << endl;
    cout << "Dot product of vectors v1 and v2: " << v1.dotproduct(v2) << endl;
    
return 0;
}