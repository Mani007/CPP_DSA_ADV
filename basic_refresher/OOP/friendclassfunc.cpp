#include <iostream>
using namespace std;
class X{
    int data;
    public:
    void setValue(int value) { data = value; }
    friend void addObj(X,Y);
};
class Y{
    int data;
    public:
    void setValue(int value) { data = value; }
    friend void addObj(X,Y);
};

void addObj(X o1,Y o2){ // we need to declare it as a friend function to make it work.
    cout<< "The sum of data in object X and Y are "<< o1.data+o2.data<<endl;  // We cannot use it like this as data are private members of objects
}
int main() {
cout << "More details on friend class" << endl;
return 0;
}