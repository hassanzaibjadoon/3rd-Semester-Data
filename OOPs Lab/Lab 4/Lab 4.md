# Lab No. 4: Deep Copy & Shallow Copy in a Class

## 4.1 Introduction

Lab 1 introduced basic components of a class such as access specifiers and constructors. In this lab, constructor will be covered in more detail. Constructor is a special function that is automatically called when an object is created. Different types of constructors such as parameterless and parameterized constructors are presented. An object can also be initialized with another object of the same type. This can be done in different ways leading to concept of shallow copy and deep copy in a class. This lab covers both in detail. Also, destructor is introduced. They are called whenever an object is terminated.

## 4.2 Objectives of the Lab

1. Understand and implement parameterless and parameterized constructor in a class.
2. Write a class (C++/Java) with overloaded constructors.
3. Write a test program to use default copy constructor (C++).
4. Understand the difference between a Shallow Copy and a Deep Copy.
5. Understand the concept of dynamic memory allocation.
6. Implement deep and shallow copy in a class (C++/Java).
7. Use and test deep and shallow copy in a class.
8. Understand and implement destructor in a class (C++/Python).

## 4.3 Pre-Lab

### 4.3.1 Overloaded Constructors – Parameterized and Nullary Constructors

1. Constructor is a special function that is called automatically when an object is created.
2. Two types of constructor: Nullary/Parameterless and Parameterized.
   * Nullary/Parameterless Constructors – These do not need parameter for their calling
   * Parameterized Constructors – These need parameters for their calling
3. Constructors can be overloaded.
   * Same class can have a nullary constructor alongside a parameterized constructor

### 4.3.2 Copy Constructor

1. It is a function through which a new object can be created from an existing, created object.
2. C++ provides a default copy constructor to assist in the copying of simple objects. For example, objects that do not use pointers or arrays.
3. Even though, default copy constructor will copy any type of object but it is strongly recommended that the copy constructor be used only for objects that has non-pointer data member.
4. Default copy constructor creates an exact copy where data members are copied one by one to the new object. The original object is maintained in its original state and the copy changes are only exhibited in the newly created object.
5. Two ways to call default copy constructor:
   * `class obj2(obj1);` // Function calling notation
   * `class obj2=obj1;` // Assignment statement notation

### 4.3.3 Example: Overloaded Constructor and Default Copy Constructor

Example code in C++: `complexOverCopyCtor.cpp`

```cpp
#include <iostream>
using namespace std;

class complex {
private:
    double re, im;
public:
    complex(): re(0),im(0) { }
    complex(double r, double i): re(r), im(i) { } // parameterized, overloaded ctor
    void show(){
        cout<<"Complex Number: "<<re<<"+"<<im<<"i"<<endl;
    }
};

int main(){
    complex c1(5,2.5);
    c1.show();

    // use of default copy constructor
    // call by two ways
    complex c2(c1); // 1. function notation
    c2.show();
    complex c3 = c2; // 2. assignment operator
    c3.show();

    return 0;
}
```

**Output:**
*Figure 4.1: Output complexOverCopyCtor.cpp*

### 4.3.4 Custom Copy Constructor

1. Reasons to create a custom copy constructor:
   * Class objects contain pointers.
   * Class objects contain dynamic data members.
   * Copying of only some of the data member is needed to a new object.
2. A copy constructor always receives an object as a parameter, extracts data from it, and stores data in the newly created object.
3. Two syntax of copy constructor are:
   * `class (class& obj);` // copy constructor prototype
   * `class (const class& obj);` // const copy constructor prototype
4. Note that the object copied is provided by obj. Using const keyword means that a copy of an object can be created without any change to the inherent data members even though only some of the data members can be copied.

### 4.3.5 Shallow Copy Constructor

1. It performs member by member copy of one object to another.
2. Default copy constructor is shallow.
3. When a class does not have any dynamic data members then only a shallow copy constructor is needed. Also, when a partial copy of an object is needed i.e. to copy some of the static data members.

### 4.3.6 Example: Custom Shallow Copy Constructor

Example code in C++: `complexCustCopySCtor.cpp`

```cpp
#include <iostream>
using namespace std;

class complex{
private:
    double re, im;
public:
    complex(): re(0),im(0) { }
    complex(double r, double i): re(r), im(i) { }
    complex(const complex &c){ // custom copy constructor - Shallow
        cout << "\nIn Custom Copy Constructor [Shallow]" << endl;
        re = c.re; im = c.im;
    }
    void show(){
        cout<<"Complex Number: "<<re<<"+"<<im<<"i"<<endl;
    }
};

int main(){
    complex c1(5,2.5);
    c1.show();
    // use of default copy constructor
    // call by two ways
    complex c2(c1); // 1. function notation
    c2.show();
    complex c3 = c2; // 2. assignment operator
    c3.show();
    return 0;
}
```

**Output:**
*Figure 4.2: Output complexCustCopySCtor.cpp*

### 4.3.7 Deep Copy Constructor

1. It is designed to handle pointers and dynamic data members.
2. Consider a class that has a pointer data member. When a shallow copy constructor is called, it copies the pointer data member to the new object. It might be thought that this is what being wanted but in fact it is wrong because copying a pointer means that the data and the address to which the pointer is pointing is copied. Thus, resulting into two objects that are pointing to the same memory location as shown in Figure 4.3a. It must be noted that two objects should have their own distinct identity and distinct memory as shown in Figure 4.3b.

### 4.3.8 Example: Custom Deep Copy Constructor

Example code in C++: `complexCustCopyDCtor.cpp`

```cpp
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Student{
private:
    char* name; // dynamic character array
    int age;
    float gpa;
public:
    Student(): name(""),age(0),gpa(0.0) { }
    Student(char n[], int a, float g): name(n),age(a),gpa(g) {}
    Student(const Student &s){ // custom copy constructor - Deep
        cout << "\nIn Custom Copy Constructor [Deep]" << endl;
        int len = strlen(s.name); // step 1: find length of input array
        name = new char[len+1]; // step 2: create name of length n + 1 ('/0')
        strcpy(name,s.name); // step 3: copy using strcpy
        age = s.age;
        gpa = s.gpa;
    }
    ~Student(){
        cout << "Terminating object." << endl;
        delete[] name;
    }
    void show(){
        cout<<"Student Data"<<endl;
        cout<<"Name: "<<name<<"\tAddress: "<<(void *)name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"GPA: "<<gpa<<endl<<endl;
    }
};

int main(){
    Student s1("Ali Ahmad Khan",21,3.5);
    s1.show();

    Student s2(s1); s2.show();
    Student s3 = s1; s3.show();

    return 0;
}
```

**Output:**
*Figure 4.4: Output complexCustCopyDCtor.cpp*

[Content continues with Java and Python examples...]

## 4.5 Activities

Complete the activity in C++. Python is encouraged. Java not required.

### 4.5.1 Activity

#### C++
Create a class called employee. This class maintains information about name (char*), department (char*), salary (double), and period of service in years (double).

1. Provide a parameterless constructor to initialize the data members to some fixed values.
2. Provide a 4-argument parameterized constructor to initialize the members to values sent from calling function.
   * (You have to make dynamic allocation for both name and department data members in constructor.)
3. Provide a copy-constructor that performs the deep copy of the data members.
4. Provide an input function that takes all the values from user during run-time.
5. Provide a show function that shows all the information about a specific employee to user.
6. Provide a destructor to free the memory allocated to name and department in constructor.

Write all the member function outside a C++ class. Write a driver program to test the functionality of the above-mentioned class.

[Content continues with test cases and references...]

## 4.7 References

1. Class notes
2. Object-Oriented Programming in C++ by Robert Lafore (Chapter 6)
3. How to Program C++ by Deitel & Deitel (Chapter 7)
4. Programming and Problem Solving with Java by Nell Dale & Chip Weems
5. Murach's Python Programming by Micheal Urban & Joel Murach
