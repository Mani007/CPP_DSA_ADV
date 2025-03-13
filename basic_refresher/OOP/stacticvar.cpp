#include <iostream>
using namespace std;
class Employee {
    int id;
    int count;
    public:
        void setID(void) {
            cout<<"Enter the id of the employee "<< endl;
            cin>>id;
        }
        void displayID(void) {
            cout<<"The id of the employee is "<< id << endl;
        }
};
int main() {
    cout << "Static variable in OOP" << endl;
    Employee emp1, emp2;
    emp1.setID();
    emp1.displayID();
    emp2.setID();
    emp2.displayID();
return 0;
}