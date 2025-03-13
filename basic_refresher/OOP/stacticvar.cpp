#include <iostream>
using namespace std;
class Employee {
    int id;
    int count =0; // Without Static member of the class
    public:
        void setID(void) {
            cout<<"Enter the id of the employee "<< endl;
            cin>>id;
            count++; // Incrementing the static member count.
        }
        void displayID(void) {
            cout<<"The id of the employee is "<< id << endl;
            cout<<"Total number of employees created is "<< count << endl;
        }
};
//int Employee:: count; // Static variable of the class declared outside. Default value is zero. 
int main() {
    cout << "Static variable in OOP" << endl;
    Employee emp1, emp2;
    emp1.setID();
    emp1.displayID();
    emp2.setID();
    emp2.displayID();
return 0;
}