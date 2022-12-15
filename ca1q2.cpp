/*

Create a class named Shape with a function that prints "This is a shape". 
Create another class named Polygon inheriting the Shape class with the same function that prints "Polygon is a shape". 
Create two other classes named Rectangle and Triangle having the same function 
which prints "Rectangle is a polygon" and "Triangle is a polygon" respectively. 
Again, make another class named Square having the same function which prints "Square is a rectangle".
Now, try calling the functions by the object of each of these classes.

*/


#include <iostream>
using namespace std;

class Shape{
    public:
        void show_class(){
            cout<<"\nThis is a shape.";
        }
};

class Polygon: public Shape{
    public:
        void show_class(){
            cout<<"\nPolygon is a shape.";
        }
};

class Rectangle: public Polygon{
    public:
        void show_class(){
            cout<<"\nRectangle is a Polygon.";
        }
};

class Triangle: public Polygon{
    public:
        void show_class(){
            cout<<"\nTriangle is a Polygon.";
        }
};

class Square: public Rectangle{
    public:
        void show_class(){
            cout<<"\nSquare is a Rectangle.\n";
        }
};

int main()
{
    Shape S;
    Polygon P;
    Rectangle R;
    Triangle T;
    Square Sq;
    
    S.show_class();
    P.show_class();
    R.show_class();
    T.show_class();
    Sq.show_class();
    return 0;
} 