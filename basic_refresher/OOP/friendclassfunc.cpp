#include <iostream>
using namespace std;
class X{
    int data;
    public:
    void setValue(int value) { data = value; }
};
class Y{
    int data;
    public:
    void setValue(int value) { data = value; }
};

int addObj(X o1,Y o2){
    cout<< "The sum of data in object X and Y are "<< o1.data+o2.data<<endl;  // We cannot use it like this as data are private members of objects
}
int main() {
cout << "More details on friend class" << endl;
return 0;
}