#include <iostream>
using namespace std;
class Point{
    int x,y,z;
    public:
    Point(int a, int b, int c) {
        x = a;
        y = b;
        z = c;
    }
    void printPoint(void){
        cout << "Point in 3D are (" << x << ", " << y << ", " << z << ")" << endl;
    }
};
int main() {
cout << "Constructor example - 3D points" << endl;
    Point p1(1, 2, 3);
    p1.printPoint();
    
return 0;
}