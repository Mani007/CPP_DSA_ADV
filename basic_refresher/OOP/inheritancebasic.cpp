#include <iostream>
using namespace std;
//Inheritance make code DRY and creates reusability and testability
// Primarily we have 4 different types of inheritance apart from simple/single inheritance(base->derive). EXTENDING the functionality. Is a/has a relationship
//1. Multiple inheritance(multiple base -> derived)
//2. Hierarchical inheritance(base -> multiple derived)
//3. Multilevel inheritance(base1->base2->baseN->derived)
//4. Hybrid inheritance(mix of different above inheritance) - one of the parent class is not the base class.

// Base class
class Employee {
    int id;
    float salary;
    public:
        //Employee(){}; // Generalized constructor 
        Employee(int id, float salary){ // Constructor
            // Make sure to use different names for class variable and local variables
            id = id;
            salary = salary;
        }
        void displayEmployeeDetails(void){
            cout << "Employee id: " << id << ", Salary: " << salary << endl;
        }
};
// Syntax for inheritance
// class {{derivedClassName}}: {{visiblityMode}} {{BaseClassName1}} {
    // body of derived class
//};
// Creating a manager derived class
// class Manager: public Employee{
//     int department;
//     public:
// };
int main() {
    cout << "Inheritance Basic CPP" << endl;
    Employee emp1(7,2.5);
    //Employee em2(2,3000.0);
    emp1.displayEmployeeDetails();
    //em2.displayEmployeeDetails();
    return 0;
}