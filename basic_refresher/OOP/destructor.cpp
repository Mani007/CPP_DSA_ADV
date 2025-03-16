#include <iostream>
using namespace std;
int count=0;
class Number{
    int value;
    
    public:
    Number(){}; // Generalized constructor
    Number(int v){
        value = v;
        count++;
        cout << "Object created with value: " << value << " and the object count is: " << count << endl;
    }
    ~Number(){
        cout << "Object with value: " << value << " and the object count NOW is: " << --count << " destroyed" << endl;
    }
};
// Destructor never take any argument nor it returns any value. Often it is called by the compiler when object is not in use aka garbage collector.
int main() {
    cout << "Destructor in C++" << endl;
    Number n1(10);
    {
        cout<<"Entering this block of code"<< endl;
        Number n2(20), n3(25);
        cout<<"Exiting this block of code"<< endl;
    }
    cout << "Main function ends" << endl;
 

return 0;
}