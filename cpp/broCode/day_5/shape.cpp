#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    int perimetr;
    int area;
};

class Triangle: public Shape {
public:
    int a;
    int b;
    int c;
    
    Triangle(int a, int b, int c) {
        this->a = a;
        this->b = b;
        this->c = c;
        
        this->perimetr = a + b + c;
        this-> area = sqrt(((perimetr / 2.0) * (perimetr - a) * (perimetr - b) * (perimetr - c)));
    }
};

class Rectangle: public Shape {
public:
    int a;
    int b;
    
    Rectangle(int a, int b) {
        this->a = a;
        this->b = b;
        
        this->perimetr = 2 * (a + b);
        this->area = a * b;
    }
};

int main() {
    cout << "Hello C++!" << endl;
    cout << '\n';
    Rectangle rectangle(15, 15);
    
    Triangle triangle(3, 4, 5);
    
    cout << "Perimetr of rectangle: " << rectangle.perimetr << '\n';
    cout << "Area of rectangle: " << rectangle.area << '\n';
    cout << '\n';
    cout << "Perimetr of triangle: " << triangle.perimetr << '\n';
    cout << "Area of triangle: " << triangle.area << '\n';
    
    
}
