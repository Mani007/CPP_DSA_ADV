#include <iostream>
using namespace std;
/* Classs structure - need for virtual base class
Student -> Test
Student -> Sport
Sport,test->Result
 */
class Student{
    protected:
    int roll_no;
    public:
    void setrollnum(int roll){
        roll_no = roll;
    }
    void printroll(void){
        cout << "your Roll No: " << roll_no << endl;
    }
};
class Test: virtual public Student{
    protected:
    float phy,math;
    public:
    void setmarks(float p, float m){
        phy = p;
        math = m;
    }
    void printmarks(void){
        cout << "Physics: " << phy << ", Mathematics: " << math << endl;
    }
};
class Sport: virtual public Student{
    protected:
    float score;
    public:
    void setscore(float s){
        score = s;
    }
    void printscore(void){
        cout << "Score: " << score << endl;
    }
};
class Result: public Test,public Sport{
    private:
    float total;
    public:
    void displayres(void){
        total = phy + math + score;
        printroll();
        printmarks();
        printscore();
        cout << "your Total marks is : " << total << endl;
    }
};
int main() {
cout << "Virtual base class" << endl;
    Result res;
    res.setrollnum(123);
    res.setmarks(78, 90);
    res.setscore(80);
    res.displayres();
    
return 0;
}