#include <iostream>
using namespace std;
class Employee {
    int id;
    int salary;
    public:
    void setId(void){
        salary = 200;
        cout << "Please enter the id "<< endl;
        cin >> id;
    }
    void getId(void){
        cout << "Employee id: " << id << endl;
        cout << "Employee salary: " << salary << endl;
    }
};
int main() {
    cout << "Array of objects" << endl;
    Employee e[5];
    for(int i = 0; i < 5 ; i++){
        e[i].setId();
    }
    for(int i = 0; i < 5 ; i++){
        e[i].getId();
    }
    return 0;
}