#include<iostream>

class Complex {
    int real, imag;

public:
    Complex(int r = 0, int i =0) {
        real = r;
        imag = i;
    }
    
    Complex operator + (Complex const &obj) {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }

    void display() {
        std::cout << real << " + i" << imag << std::endl;
    }
    friend Complex operator - (Complex const &c1, Complex const &c2);
};

Complex operator - (Complex const &c1, Complex const &c2) {
    return Complex(c1.real - c2.real, c1.imag - c2.imag);
}

int main() {
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
    std::cout << "The result of addition is: ";
    c3.display();
    std::cout << "The result of subtraction is: ";
    c4.display();
    return 0;
}
