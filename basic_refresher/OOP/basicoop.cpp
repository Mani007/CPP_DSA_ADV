#include <iostream>
using namespace std;
// Class is template for the object to be created- it does not take any memory unless we initialize it.
// Class composed of data and its related set of functions, to mimic real world scenarios. 
class Employee {
    // Private member variables
    private:
        int id;
        string name;
        double salary;
    // public member variables/functions of the class
    public:
        int a,b;
        void setName(string name); // We can implement these functions here or later in the programs even outside the class
        void setSalary(double salary); // We can implement these functions here or later in the programs even outside the class
        int getSalary(string name){
            cout << "Salary of employee " << name << " is " << salary << endl;
            return salary;
        }
        
};
void Employee::setName(string name){
    this->name = name; // 'this' keyword is used to access the member variables of the current object.
    cout << "Name set to: " << name << endl;
}
void Employee::setSalary(double salary){
    this->salary = salary;
    cout << "Salary set to: " << salary << endl;
}
int main() {
    cout << "Basics of OOP" << endl;
    Employee e1, e2; // Creating two objects of Employee class
    e1.setName("John Doe");
    e1.setSalary(50000);
    e1.a = 10;
    e1.b = 20;
    cout << "Employee 1 salary: " << e1.getSalary("John Doe") << endl;
    e2.setName("Jane Doe");
    e2.setSalary(60000);
    e2.a = 30;
    e2.b = 40;
    cout << "Employee 2 salary: " << e2.getSalary("Jane Doe") << endl;
    cout << "Employee 1 a: " << e1.a << endl;
    cout << "Employee 1 b: " << e1.b << endl;
    cout << "Employee 2 a: " << e2.a << endl;
    cout << "Employee 2 b: " << e2.b << endl;

    return 0;
}