#include <iostream>
using namespace std;
class Area {
    public:
        void setDim(double len, double brth) {
            length = len;
            breadth = brth;
        }
        double getArea() const {
            return length * breadth;
        }
    private:
        double length;
        double breadth;
};
int main() {
    double length, breadth;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;
    Area rect;
    rect.setDim(length, breadth);
    double area = rect.getArea();
    cout << "The area of the rectangle is: " << area << endl;
    return 0;
}
