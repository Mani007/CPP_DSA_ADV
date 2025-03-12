#include <iostream>
using namespace std;
class Shop {
    int itemId[10];
    int itemPrice[10];
    int counter;
    public:
        void initCount(void) { counter=0;}
        void setPrice(void);
        void displayPrice(void);
};

void Shop::setPrice(void){
    cout<<"Enter id of Item  with count is "<< counter << endl;
    cin>>itemId[counter];
    cout<< "Enter price of item with count is "<< counter <<endl;
    cin>>itemPrice[counter];
    counter++;
}
void Shop::displayPrice(void){
    for(int i; i< counter;i++){
        cout<<"The price of item with id: "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}
int main() {
    cout << "Memory allocation in object" << endl;
    Shop dukan;
    dukan.initCount();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();
    return 0;
}