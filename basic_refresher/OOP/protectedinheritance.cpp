#include <iostream>
using namespace std;
class Base{
    protected:
        int b;
    private:
        int a;
    public:
};
/*

In protected inheritance, the protected members of the base class are accessible to the derived class. The private members of the base class are not accessible to the derived class. However, the derived class can access the public members of the base class.
            public-derivation   private-derivation  protected-derivation
1. private       not inherited       not-inherited       not inherited
2. protected      protected           private             protected
3. public         public              private             protected
*/
class Derived: public Base{
    // protected:
    
    public:
    int z=10;
    void show(){
        cout << "Derived class: b = " << b << endl; // allowed as b is protected
        //cout << "Derived class: a = " << a << endl; //Not Allowed since "a" is private and is not accessible in Derived class.
        cout << "Derived class: z = " << z << endl;
    }
};
int main() {
cout << "Protected inheritance" << endl;
    Derived d;
    //d.a = 10; //Not Allowed since "a" private and is protected in Derived class.
    //d.b = 20; //Not Allowed since "b" is protected and is public in Base class.
    d.z = 30; //Allowed since "z" is public and is accessible in Derived class.
    d.show(); //Allowed since "show" is public in Derived class.
    
return 0;
}