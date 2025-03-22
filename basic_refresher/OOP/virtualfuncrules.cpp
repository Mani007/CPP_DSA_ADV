#include <iostream>
#include <cstring>
using namespace std;
class Rating{
    protected:
    char title[30];
    float rating;
    public:
    Rating(char* t, float r){
        strcpy(title, t);
        rating = r;
    }
    virtual void display(){
        cout << "Title: " << title << ", Rating: " << rating << endl;
    }
};

class MovieRating: public Rating{
    int length;
    public:
    MovieRating(char* t, float r,int l):Rating(t, r){
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
    SeriesRating(char* t, float r,int e):Rating(t, r){
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
    Rating* ptr;
    char *name = new char[30];
    name = "Inception";
    MovieRating movie(name, 8.9, 150);
    name = "Game of Thrones";
    SeriesRating series(name, 9.3, 85);
    ptr = &movie;
    ptr->display(); // Calls the display() function of MovieRating class
    ptr = &series;
    ptr->display(); // Calls the display() function of SeriesRating class
    
return 0;
}