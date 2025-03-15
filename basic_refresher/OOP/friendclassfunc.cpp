#include <iostream>
using namespace std;

class X; // Forward declaration of class X its needed

class Y; // Forward declaration of class Y its needed
class X{
    int data;
    public:
    void setValue(int value) { data = value; }
    void printData(void){
        cout<< "Data in object X is "<< data<<endl;  
    }
    friend void addObj(X,Y);
    friend void exchangeData(X&,Y&); // We need to declare it as a friend function to make it work.
};
class Y{
    int data;
    public:
    void setValue(int value) { data = value; }
    void printData(void){
        cout<< "Data in object Y is "<< data<<endl;  
    }
    friend void addObj(X,Y);
    friend void exchangeData(X&,Y&); // We need to declare it as a friend function to make it work.
};

void addObj(X o1,Y o2){ // we need to declare it as a friend function to make it work.
    cout<< "The sum of data in object X and Y are "<< o1.data+o2.data<<endl;  // We cannot use it like this as data are private members of objects
}
void exchangeData(X &o1,Y &o2){ 
    int temp = o1.data;
    o1.data = o2.data;
    o2.data = temp;
    cout<< "After swapping, data in object X is "<< o1.data<<endl;
    cout<< "After swapping, data in object Y is "<< o2.data<<endl;
}
int main() {
    cout << "More details on friend class" << endl;
    X objX;
    Y objY;
    objX.setValue(5);
    objX.printData();
    objY.setValue(10);
    objY.printData();
    addObj(objX,objY); // Here, we can use addObj function as it is a friend of both X and Y classes.
    exchangeData(objX,objY); // Here, we can use exchangeData function as it is a friend of both X and Y classes.
return 0;
}