#include <iostream>
#include <cmath>
using namespace std;
class Triangle {
public:
    Triangle() : side1(0.0), side2(0.0), side3(0.0) {}
    Triangle(double side1, double side2, double side3) :
        side1(side1), side2(side2), side3(side3) {
        if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
            cout << "Error: Invalid triangle. Sides violate triangle inequality." << endl;
            exit(1);
        }
    }
    void setDetails() { 
        cout << "Enter a: ";
        cin >> side1;
        cout << "Enter b: ";
        cin >> side2;
        cout << "Enter c: ";
        cin >> side3;
    }
    double getSemiPerimeter() const {
        return (side1 + side2 + side3) / 2.0;
    }
    double getArea() const {
        double s = getSemiPerimeter();
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
    double getPerimeter() const {
        return side1 + side2 + side3;
    }
    private:
        double side1;
        double side2;
        double side3;
};
int main() {
    Triangle triangle;
    triangle.setDetails();
    double area = triangle.getArea();
    double perimeter = triangle.getPerimeter();
    cout << "Area of the triangle: " << area << endl;
    cout << "Perimeter of the triangle: " << perimeter << endl;
    return 0;
}
