#include <iostream>
using namespace std;
/* Templates or Generics are generalized classes 
*/
class Vector1{
    public:
    int *arr;
    int size;
    Vector1(int n){
        size = n;
        arr = new int[size];
    }
    int sum(Vector1 &v){
        int sum = 0;
        for(int i = 0; i < size; i++)
            sum += arr[i] + v.arr[i];
        return sum;
    }
};
int main() {
cout << "Templates in CPP" << endl;

    Vector1 v1(3);
    v1.arr[0] = 1;
    v1.arr[1] = 2;
    v1.arr[2] = 3;

    Vector1 v2(3);
    v2.arr[0] = 4;
    v2.arr[1] = 5;
    v2.arr[2] = 6;
    cout << "Sum of vectors v1 and v2: " << v1.sum(v2) << endl;
return 0;
}