#include <iostream>
#include <cmath>

class Area {
public:
  static double calculateSemiPerimeter(double a, double b, double c) {
    return (a + b + c) / 2.0;
  }

  double area(double a, double b, double c) const {
    double s = calculateSemiPerimeter(a, b, c);
    return sqrt(s * (s - a) * (s - b) * (s - c));
  }

  double area(int a, int b, int height) const {
    return 0.5 * static_cast<double>(height) * (a + b);
  }

  double area(double diagonal1, double diagonal2) const {
    return 0.5 * diagonal1 * diagonal2;
  }
};

int main() {
  double t1 = 3.0;
  double t2 = 4.0;
  double t3 = 5.0;
  Area triangle;
  double t_area = triangle.area(t1, t2, t3);
  std::cout << "Area of triangle: " << t_area << std::endl;

  int tb1 = 6;
  int tb2 = 8;
  int th = 4;
  Area trapezium;
  double tr_area = trapezium.area(tb1, tb2, th);
  std::cout << "Area of trapezium: " << tr_area << std::endl;

  double rd1 = 7.0;
  double rd2 = 9.0;
  Area rhombus;
  double r_area = rhombus.area(rd1, rd2);
  std::cout << "Area of rhombus: " << r_area << std::endl;

  return 0;
}
