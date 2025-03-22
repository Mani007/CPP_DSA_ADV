#include <iostream>
#include <cstring>
using namespace std;
class Rating{
    protected:
    string title;
    float rating;
    public:
    Rating(string t, float r){
        title = t;
        rating = r;
    }
     void display(){
        cout << "Title: " << title << ", Rating: " << rating << endl;
    }
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
    cout << "Virtual function creation rules" << endl;
    // A virtual function must be declared in the base class and overridden in the derived class.
    // A derived class must have at least one virtual function to override.
    // A class can have multiple virtual functions but only one non-virtual function.
    // Virtual functions can be overridden using the "override" and "final" keywords.
    // A class cannot have a virtual constructor or destructor.
    // Virtual functions can be called using a pointer or a reference to the base class.
    Rating* ptr[2];
    MovieRating movie("Inception", 8.9, 150);
    SeriesRating series("Game of Thrones", 9.3, 85);
    // ptr = &movie;
    // ptr->display(); // Calls the display() function of MovieRating class
    // ptr = &series;
    // ptr->display(); // Calls the display() function of SeriesRating class
    ptr[0] = &movie;
    ptr[1] = &series;
    ptr[0]->display(); // Calls the display() function of MovieRating object
    ptr[1]->display(); // Calls the display() function of SeriesRating object
return 0;
}