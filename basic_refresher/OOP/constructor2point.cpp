#include <iostream>
#include <math.h>
using namespace std;
class Point;

class Point{
    int x,y,z;
    public:
    friend int Distance3D(Point p1, Point p2);
    friend int Distance2D(Point p1, Point p2);
    Point(int a, int b, int c) {
        x = a;
        y = b;
        z = c;
    }
    Point(int a, int b){ // constructor overloading for point in 2D
        x = a;
        y = b;
        z = 0;
    }
    void printPoint(void){
        cout << "Point in 3D are (" << x << ", " << y << ", " << z << ")" << endl;
    }
};
int Distance3D(Point p1, Point p2){
    int dx = p2.x - p1.x;
    int dy = p2.y - p1.y;
    int dz = p2.z - p1.z;
    return sqrt(dx*dx + dy*dy + dz*dz);
}
int Distance2D(Point p1, Point p2){
    int dx = p2.x - p1.x;
    int dy = p2.y - p1.y;
    return sqrt(dx*dx + dy*dy);
}

int main() {
cout << "Constructor example - 3D points" << endl;
    Point p1(1, 2);
    p1.printPoint();
    Point p2(4, 5);
    p2.printPoint();
    cout << "Distance between p1 and p2 is " << Distance2D(p1, p2) << endl;
 

return 0;
}