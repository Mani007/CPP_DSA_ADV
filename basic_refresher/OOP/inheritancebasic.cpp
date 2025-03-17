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
        Employee(){}; // Generalized constructor helps in inheritance 
        Employee(int your_id, float your_salary){ // Constructor
            // Make sure to use different names for class variable and local variables
            id = your_id;
            salary = your_salary;
        }
        void displayEmployeeDetails(void){
            cout<<"Called using employee details class"<<endl;
            cout << "Employee id: " << id << ", Salary: " << salary << endl;
        }
};
// Syntax for inheritance
// class {{derivedClassName}}: {{visiblityMode}} {{BaseClassName1}} {
    // body of derived class
//};
// public inheritance = base class public member will become public member of derived class.
// private inheritance = base class public member will become private member of derived class. Default visiblity mode is private.
// Private members are never inherited
// Creating a manager derived class
class Manager: public Employee{
    int department_no;
    public:
        Manager(){}; // Generalized constructor helps in inheritance  // If we don't provide any constructor, compiler will provide a default constructor.
        Manager(int your_id, float your_salary, int your_department): Employee(your_id,your_salary){ // Constructor
            department_no = your_department;
        }
        void diaplayManager(void){
            // cout << "Employee id: " << id << ", Salary: " << salary << ", Department: " << department_no << endl; // We cannot do this as id and salary are private member of employee class
            displayEmployeeDetails();
            cout<<"Now display manager is called"<<endl;
            cout << "Department of manager is :  " << department_no << endl;
        }
};
int main() {
    cout << "Inheritance Basic CPP" << endl;
    Employee emp1(7,2000.0);
    Employee em2(2,3000.0);
    emp1.displayEmployeeDetails();
    em2.displayEmployeeDetails();
    Manager m1(1,5000.0,10); // Constructor of manager class with employee constructor is inherited and called by manager class
    Manager m2; // Manager class useing generalized constructor
    m1.displayEmployeeDetails(); // Calls displayEmployeeDetails from Employee class
    m1.diaplayManager(); // Calls diaplayManager from Manager class
    m2 = Manager(3,4500.0,20); // Creating object using different constructor method later in the program.
    m2.displayEmployeeDetails();
    m2.diaplayManager(); // Calls diaplayManager from Manager class
    return 0;
}