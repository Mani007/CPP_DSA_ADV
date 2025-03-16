#include <iostream>
using namespace std;
class Bankdeposit{
    int principle,year;
    float rate,amount;
    public:
    Bankdeposit(){} // Generalized constructor in case you want to initialize your object later.
    Bankdeposit(int p, int y, float r=0.04){
        principle = p;
        year = y;
        rate = r;
        amount = principle;
        for (int i = 0; i <year; i++){

            amount = amount *(1+rate);
        }
    }
    void show(void){
        cout << "Amount after " << year << " years: " << amount << endl;
    }
};
int main() {
    cout << "Interest calculator" << endl;
    int p,t;
    float r;

    cout << "Enter the principal amount: ";
    cin >> p;

    cout << "Enter the rate of interest (in 0.0X): ";
    cin >> r;

    cout << "Enter the time period in years: ";
    cin >> t;

    Bankdeposit bd(p,t,r);

    bd.show();
return 0;
}