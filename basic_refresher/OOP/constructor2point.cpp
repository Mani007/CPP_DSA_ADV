#include <iostream>
#include <math.h>
using namespace std;
class Point;

class Point{
    int x,y,z;
    public:
    friend int Distance3D(Point p1, Point p2);
    Point(int a, int b, int c) {
        x = a;
        y = b;
        z = c;
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

int main() {
cout << "Constructor example - 3D points" << endl;
    Point p1(1, 2, 3);
    p1.printPoint();
    Point p2(4, 5, 6);
    p2.printPoint();
    cout << "Distance between p1 and p2 is " << Distance3D(p1, p2) << endl;
 

return 0;
}