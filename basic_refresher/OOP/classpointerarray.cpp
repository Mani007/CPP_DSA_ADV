#include <iostream>
using namespace std;
class Shop{
    int id;
    int price;
    public:
    void setData(int id1, int price1) { id = id1; price = price1; } // We need different name for local variables, other wise we need to use the "this" pointer
    int getData(void) {
        cout<<"id: "<<id<<"price: "<<price<<endl;
    }
};
int main() {
cout << "Class pointer to the array of object" << endl;
    int size=2;
    Shop* shopArray = new Shop[size]; // dynamic memory allocation
    //Shop shopArray[size];
    // shopArray[0].setData(1, 500);
    // shopArray[1].setData(2, 700);
    // shopArray[0].getData();
    // shopArray[1].getData();
    for(int i=0; i<size; i++) {
        shopArray[i].setData(i+1, i*100);
        shopArray[i].getData();
    }
    delete[] shopArray; // de-allocate memory
    
return 0;
}