#include <iostream>
using namespace std;
// To make an abstract base class, you must declare a virtual function that MUST be overridden in the derived classes. Such classes are also known as abstract base class. 
// You cannot create objects directly from the abstract base class. Also it is advisable to not declare a pointer to it.
class Rating{ // Rating is an abstract base class, you cannot create a direct object of this class, you need a derived class for it.
    protected:
    string title;
    float rating;
    public:
    Rating(string t, float r){
        title = t;
        rating = r;
    }
    // declaring a pure virtual function that must be defined in the derived classes.
    virtual void display()=0; // do-nothing function and must be defined in the derived classes. This makes this class as abstract base class 
};

class MovieRating: public Rating{
    int length;
    public:
    MovieRating(string t, float r,int l):Rating(t, r){
        // Constructor for MovieRating class
        length = l;    
    }
    void display(){
        cout << "Title: " << title << ", Rating: " << rating << ", Genre: Movie"<<" and length is "<< length << endl;
    }
};

class SeriesRating: public Rating{
    int episode;
    public:
    SeriesRating(string t, float r,int e):Rating(t, r){
        // Constructor for SeriesRating class 
        episode = e;   
    }
    void display(){
        cout << "Title: " << title << ", Rating: " << rating << ", Genre: Series"<<" total episodes "<< episode << endl;
    }
};
int main() {
cout << "Abstract base class and pure virtual functions" << endl;
return 0;
}