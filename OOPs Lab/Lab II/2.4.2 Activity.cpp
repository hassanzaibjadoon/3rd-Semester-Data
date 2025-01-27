#include <iostream>
using namespace std;

class Complex {
private:
    double re, im;

public:
    Complex();
    Complex(double r, double i);
    Complex input();
    Complex addCom(Complex c1);
    Complex subCom(Complex c1);
    Complex mulCom(Complex c1);
    void show();
};

Complex::Complex(): re(0), im(0) {}

Complex::Complex(double r, double i): re(r), im(i) {}

Complex Complex::input() {
    Complex temp;
    cout << "Enter real and imaginary parts: ";
    cin >> temp.re >> temp.im;
    return temp;
}

Complex Complex::addCom(Complex c1) {
    Complex temp;
    temp.re = this->re + c1.re;
    temp.im = this->im + c1.im;
    return temp;
}

Complex Complex::subCom(Complex c1) {
    Complex temp;
    temp.re = this->re - c1.re;
    temp.im = this->im - c1.im;
    return temp;
}

Complex Complex::mulCom(Complex c1) {
    Complex temp;
    temp.re = this->re * c1.re - this->im * c1.im;
    temp.im = this->re * c1.im + this->im * c1.re;
    return temp;
}

void Complex::show() {
    if (im >= 0)
        cout << re << " + " << im << "i" << endl;
    else
        cout << re << im << "i" << endl;
}

int main() {
    Complex c1, c2, result;

    // Input complex numbers
    c1 = c1.input();
    c2 = c2.input();

    // Addition
    result = c1.addCom(c2);
    cout << "Sum: ";
    result.show();

    // Subtraction
    result = c1.subCom(c2);
    cout << "Difference: ";
    result.show();

    // Multiplication
    result = c1.mulCom(c2);
    cout << "Product: ";
    result.show();

    return 0;
}
