#include <iostream>
using namespace std;
class Shop{
    int id;
    int price;
    public:
    void setData(int id1, int price1) { id = id1; price = price1; } // We need different name for local variables, other wise we need to use the "this" pointer
    void getData(void) {
        cout<<"id: "<<id<<" and price: "<<price<<endl;
    }
};
int main() {
cout << "Class pointer to the array of object" << endl;
    int size=3;
    Shop* shopArray = new Shop[size]; // dynamic memory allocation
    Shop* tempArray = shopArray; // storing initial value of the pointer Very inportant
    //Shop shopArray[size];
    // shopArray[0].setData(1, 500);
    // shopArray[1].setData(2, 700);
    // shopArray[0].getData();
    // shopArray[1].getData();
    // for(int i=0; i<size; i++) {
    //     shopArray->setData(i+1, i*100);
    //     shopArray->getData();
    //     shopArray++; // increment the pointer to the next object in the array
    // }
    int p,q;
    for(int i; i<size; i++) {
    cout<<"Enter the id and price for shop: "<<i+1<<endl;
    cin>>p>>q;
        shopArray->setData(p, q);
        shopArray++;
    }
    for(int i;i<size;i++){
        tempArray->getData();
        tempArray++; // increment the pointer to the next object in the array
    }
    // delete[] shopArray; // de-allocate memory
    
return 0;
}