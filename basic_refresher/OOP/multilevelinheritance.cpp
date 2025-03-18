#include <iostream>
using namespace std;
class Student{
    protected:
    int roll_no;
    public:
     void set_roll_no(int);
     void display_roll_no(void);
};

void Student::set_roll_no(int r) {
    roll_no = r;
}
void Student::display_roll_no(void) {
    cout << "Roll No.: " << roll_no << endl;
}
class Exam: public Student{
    protected:
    float math;
    float science;
    public:
    void setMark(float mat,float sci);
    void displayMarks(void);
};

void Exam::setMark(float mat,float sci) {
    math = mat;
    science = sci;
}

void Exam::displayMarks(void) {
    cout << "The makrs of "<< roll_no <<"is "<<"Maths: " << math << ", Science: " << science << endl;
}

class Result: public Exam{
    float percentage;
    public:
    void calculatePercentage(void);
    void displayResult(void);
};

void Result::calculatePercentage(void) {
    percentage = (math + science) / 2;
}

void Result::displayResult(void) {
    cout << "The result of "<< roll_no <<" is "<<"Percentage: " << percentage << endl;
}
int main() {
cout << "Multilevel inheritance" << endl;
return 0;
}