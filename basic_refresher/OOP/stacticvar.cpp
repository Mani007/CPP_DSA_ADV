#include <iostream>
using namespace std;
class Employee {
    int id;
// Static variables are not the property of object but property of class.
    static int count; // With Static member of the class
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
        static void getCount(void){
            cout<<"Total number of employees created is "<< count << endl;
        }
};
int Employee:: count =1000; // Static variable of the class declared outside. Default value is zero.
 
int main() {
    cout << "Static variable in OOP" << endl;
    // emp1 and emp2 shares the same static variables. 
    Employee emp1, emp2;
    emp1.setID();
    emp1.displayID();
    Employee::getCount(); // Accessing static member function directly.
    // static function is run directly from the class
    emp2.setID();
    emp2.displayID();
    Employee::getCount(); // Accessing static member function directly.
return 0;
}