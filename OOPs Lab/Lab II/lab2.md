# Lab No.2: Passing and Returning Objects from Member Functions [Part 2]

## 2.1 Introduction
This lab has been designed to give in-depth knowledge about class objects and their usage as arguments and return types in class member functions. It is also discussed how these member functions can be effectively tested using test cases.

---

## 2.2 Objectives of the Lab

1. Understand how class objects can be passed and returned from class member functions.
2. Write a class with member functions having objects as arguments.
3. Write a class with member functions that return objects.
4. Test member functions effectively using given test cases.

---

## 2.3 Pre-Lab

### 2.3.1 Objects as Function Arguments
1. A member function has direct access to all other members of the class – public or private.
2. A function has indirect access to other objects of the same class that are passed as arguments.

---

### 2.3.2 Example Code: `complexObjfun.cpp`

```cpp
#include <iostream>
using namespace std;

class Complex {
private:
    double re, im;

public:
    Complex();
    Complex(double r, double i);
    void addCom(Complex c1, Complex c2);
    void show();
};

Complex::Complex(): re(0), im(0) {}

Complex::Complex(double r, double i): re(r), im(i) {}

void Complex::addCom(Complex c1, Complex c2) {
    re = c1.re + c2.re;
    im = c1.im + c2.im;
}

void Complex::show() {
    cout << re << "+" << im << "i" << endl;
}

int main() {
    Complex c1(3, 2.5), c2(5, 3), c;
    c.addCom(c1, c2);
    cout << "First Complex Number: "; c1.show();
    cout << "Second Complex Number: "; c2.show();
    cout << "Sum of two Complex Numbers: "; c.show();
    return 0;
}
2.3.3 Returning Objects from Functions
Objects can be returned from functions just like normal primitive type variables.

2.3.4 Example Code in C++: complexRetObjfun.cpp
cpp
Copy
Edit
#include <iostream>
using namespace std;

class Complex {
private:
    double re, im;

public:
    Complex();
    Complex(double r, double i);
    Complex negate();
    void show();
};

Complex::Complex(): re(0), im(0) {}

Complex::Complex(double r, double i): re(r), im(i) {}

Complex Complex::negate() {
    Complex temp;
    temp.re = -re;
    temp.im = -im;
    return temp;
}

void Complex::show() {
    if (im > 0)
        cout << re << " + " << im << "i" << endl;
    else
        cout << re << im << "i" << endl;
}

int main() {
    Complex c1(3, 2.5), c2;
    c2 = c1.negate();
    cout << "Complex Number: "; c1.show();
    cout << "Negation of Complex Number: "; c2.show();
    return 0;
}
2.3.5 Example Code in Java: complexObjfun.java
java
Copy
Edit
package lab2s1;

public class complexObjfun {
    private double re, im;

    public complexObjfun() {
        this.re = 0;
        this.im = 0;
    }

    public complexObjfun(double r, double i) {
        this.re = r;
        this.im = i;
    }

    public void addCom(complexObjfun c1, complexObjfun c2) {
        this.re = c1.re + c2.re;
        this.im = c1.im + c2.im;
    }

    public complexObjfun negate() {
        complexObjfun temp = new complexObjfun();
        temp.re = -1.0 * this.re;
        temp.im = -1.0 * this.im;
        return temp;
    }

    public void show() {
        if (im > 0)
            System.out.println(this.re + "+" + this.im + "i");
        else {
            System.out.print(this.re);
            System.out.println(this.im + "i");
        }
    }
}
2.3.6 Example Code in Python: complexObjfun.py
python
Copy
Edit
class complex:
    def __init__(self):
        self.re = 0.0
        self.img = 0.0

    def __init__(self, r, i):
        self.re = r
        self.img = i

    def addCom(self, num1, num2):
        self.re = num1.re + num2.re
        self.img = num1.img + num2.img

    def negate(self):
        self.re = -self.re
        self.img = -self.img
        return self

    def show(self):
        if self.img > 0:
            print(self.re, "+", self.img, "i")
        else:
            print(self.re, self.img, "i")

c1 = complex(3, 2.5)
print("First Complex Number: ")
c1.show()
c2 = complex(5, 3)
print("Second Complex Number: ")
c2.show()
c = complex(0, 0)
print("Sum of two Complex Numbers: ")
c.addCom(c1, c2)
c.show()
c = c1.negate()
print("Negation of Complex Number: ")
c.show()
2.4 Activities
2.4.1 Activity: Complex Arithmetic Operations
Perform arithmetic with complex numbers. Add the following methods to the Complex class:

Input Method:
input(): Take complex number real and imaginary parts from the user at runtime.
Subtraction Method:
subCom(Complex c1, Complex c2): Subtracts two complex numbers.
Multiplication Method:
mulCom(Complex c1, Complex c2): Multiplies two complex numbers.
Demonstrate usage in the main() function by performing the operations and displaying the results.

2.4.2 Activity: Return Type of Functions
Modify the addCom(), subCom(), and mulCom() functions to return the results instead of modifying the current object. The return type for each function should be Complex.

2.5 Testing
Activity 2.4.1 Test Cases
Input/Action	Output
Call input() for c1 and c2	Complex Numbers Input
Call show() after input for c1	Displays the first complex number
Call addCom() with c1 and c2	Displays the sum
Call subCom() with c1 and c2	Displays the difference
Call mulCom() with c1 and c2	Displays the product
2.6 Tools
Code::Blocks for C++
Visual Studio Code for Python
2.7 References
Class notes.
"Object-Oriented Programming in C++" by Robert Lafore (Chapter 6).
"How to Program C++" by Deitel & Deitel (Chapter 6).
"Programming and Problem Solving with Java" by Nell Dale & Chip Weems.
"Murach’s Python Programming" by Michael Urban & Joel Murach.
