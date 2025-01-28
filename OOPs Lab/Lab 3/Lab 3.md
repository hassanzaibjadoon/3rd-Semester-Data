# Lab No. 3: Boosting OOP Proficiency: Exploring Static Components & Object Relationships [Part 3]

## 3.1 Introduction

This lab is designed to cover important topics such as static class components, `const` members, and objects. It highlights the differences between static and non-static components and explores the complexities of objects in connection to pointers and objects embedded within other objects. The lab provides theoretical insights and practical experience through useful test cases to enhance the understanding of these key computing concepts.

## 3.2 Objectives of the Lab

1. Understand static class components and how they differ from non-static components in memory allocation and function scope.
2. Examine how C++ `const` members and objects affect data integrity, immutability, and object behavior.
3. Compare objects and pointers in C++, evaluate their functionality, memory management implications, and understand the complexity of objects embedded within other objects.
4. Create and execute effective test cases to ensure mastery of static class components, `const` members, static/non-static components, objects, and pointers.

## 3.3 Pre-Lab

### 3.3.1 Static Class Members

1. Static class members are class-wide and not specific to any instance.
2. They can be accessed without creating a class instance as they are shared by all instances.

### 3.3.2 Example Code: `staticMembers.cpp`

```cpp
#include <iostream>
using namespace std;

class MyClass {
private:
    static int staticVariable;  // Private static variable

public:
    static void setStaticVariable(int value) {
        staticVariable = value;
    }
    static int getStaticVariable() {
        return staticVariable;
    }
};

int MyClass::staticVariable = 0;  // Initialization of the private static variable

int main() {
    MyClass::setStaticVariable(10);
    cout << "Value of private static variable: " << MyClass::getStaticVariable() << endl;

    // Uncomment to see compilation error:
    // cout << MyClass::staticVariable << endl;

    return 0;
}
```

**Output:**
*Figure 3.2: Output staticVsNonStatic.cpp*

### 3.3.3 Const Members and Objects

* Const Members: Initialized once and remain constant throughout the object's lifetime.
* Const Objects: Prevent modification of their data members after initialization.

### 3.3.4 Example Code: `constMembers.cpp`

```cpp
#include <iostream>
using namespace std;

class MyClass {
private:
    static int privateStaticVariable;  // Private static variable
    const int constMember;             // Const member variable

public:
    MyClass(int value) : constMember(value) {}
    static void setPrivateStaticVariable(int value) {
        privateStaticVariable = value;
    }
    static int getPrivateStaticVariable() {
        return privateStaticVariable;
    }
    int getConstMember() {
        return constMember;
    }
};

int MyClass::privateStaticVariable = 0;

int main() {
    MyClass::setPrivateStaticVariable(10);
    cout << "Value of private static variable: " << MyClass::getPrivateStaticVariable() << endl;

    MyClass obj(5);
    cout << "Value of const member: " << obj.getConstMember() << endl;

    return 0;
}
```

**Output:**
*Figure 3.3: Output constMembers.cpp*

### 3.3.5 Objects vs. Pointers and Objects Inside Objects

* **Objects:** Instances of a class capable of directly invoking member functions.
* **Pointers:** Indirect access to objects, enabling dynamic memory allocation using `->`.
* **Objects Inside Objects:** Allow constructing complex structures by including objects as members of other classes.

### 3.3.6 Example Code: `objectWithinObject.cpp`

```cpp
#include <iostream>
using namespace std;

class InnerClass {
public:
    int innerVariable;
};

class MyClass {
private:
    static int privateStaticVariable;  // Private static variable
    InnerClass innerObj;               // Object inside the class

public:
    static void setPrivateStaticVariable(int value) {
        privateStaticVariable = value;
    }
    static int getPrivateStaticVariable() {
        return privateStaticVariable;
    }

    void setInnerVariable(int value) {
        innerObj.innerVariable = value;
    }
    int getInnerVariable() {
        return innerObj.innerVariable;
    }
};

int MyClass::privateStaticVariable = 0;

int main() {
    MyClass obj1;
    obj1.setInnerVariable(5);
    cout << "Value of inner variable using object: " << obj1.getInnerVariable() << endl;

    MyClass* obj2 = new MyClass();
    obj2->setInnerVariable(10);
    cout << "Value of inner variable using pointer: " << obj2->getInnerVariable() << endl;

    delete obj2;
    return 0;
}
```
