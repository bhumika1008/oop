#include <iostream>
#include<math.h>
using namespace std;

// Base class
class Polygon {
protected:
    double width, height;
public:
    void getdata(){
    	cout<<"Enter the width and height: ";
    	cin>>width>>height;
	}
};

// Derived class for Rectangle
class Rectangle : public Polygon {
public:
    double calculateArea() {
        return width * height;
    }
    double calculatePerimeter() {
        return 2 * (width + height);
    }
};

// Derived class for Triangle (assuming right-angled triangle)
class Triangle : public Polygon {
public:
    double calculateArea() {
        return 0.5 * width * height;
    }
    double calculatePerimeter() {
        // assuming right-angled triangle: sides are width, height, hypotenuse
        double hypotenuse = sqrt(width * width + height * height);
        return width + height + hypotenuse;
    }
};

// Main function to test
int main() {
    Rectangle rect;
    Triangle tri;

    rect.getdata();
    cout << "Rectangle Area: " << rect.calculateArea() << endl;
    cout << "Rectangle Perimeter: " << rect.calculatePerimeter() << endl;

    tri.getdata();
    cout << "Triangle Area: " << tri.calculateArea() << endl;
    cout << "Triangle Perimeter: " << tri.calculatePerimeter() << endl;

    return 0;
}

