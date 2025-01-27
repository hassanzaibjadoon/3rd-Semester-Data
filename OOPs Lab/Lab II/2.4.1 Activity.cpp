#include <iostream>
using namespace std;

class Complex {
private:
    double re, im;

public:
    Complex();
    Complex(double r, double i);
    void input();
    void addCom(Complex c1, Complex c2);
    void subCom(Complex c1, Complex c2);
    void mulCom(Complex c1, Complex c2);
    void show();
};

Complex::Complex(): re(0), im(0) {}

Complex::Complex(double r, double i): re(r), im(i) {}

void Complex::input() {
    cout << "Enter real and imaginary parts: ";
    cin >> re >> im;
}

void Complex::addCom(Complex c1, Complex c2) {
    re = c1.re + c2.re;
    im = c1.im + c2.im;
}

void Complex::subCom(Complex c1, Complex c2) {
    re = c1.re - c2.re;
    im = c1.im - c2.im;
}

void Complex::mulCom(Complex c1, Complex c2) {
    re = c1.re * c2.re - c1.im * c2.im;
    im = c1.re * c2.im + c1.im * c2.re;
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
    c1.input();
    c2.input();

    // Addition
    result.addCom(c1, c2);
    cout << "Sum: ";
    result.show();

    // Subtraction
    result.subCom(c1, c2);
    cout << "Difference: ";
    result.show();

    // Multiplication
    result.mulCom(c1, c2);
    cout << "Product: ";
    result.show();

    return 0;
}
