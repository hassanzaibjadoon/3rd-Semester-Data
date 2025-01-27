// Activity 0.3.2: Student Structure

#include <iostream>
#include <cstring>
using namespace std;

struct Student {
    char NAME[50];
    int AGE;
    float CGPA;

    // No-argument constructor
    Student() {
        strcpy(NAME, "");
        AGE = 0;
        CGPA = 0.0;
    }

    // Three-argument constructor
    Student(char n[], int a, float c) {
        strcpy(NAME, n);
        AGE = a;
        CGPA = c;
    }

    // Function to display student details
    void show() {
        cout << "Name: " << NAME << "\n";
        cout << "Age: " << AGE << "\n";
        cout << "CGPA: " << CGPA << "\n";
    }
};

int main() {
    // Create Student s1 using the three-argument constructor
    Student s1("Ali Khan", 22, 3.12);

    // Create Student s2 and assign values directly
    Student s2;
    strcpy(s2.NAME, "Ramiz Shah");
    s2.AGE = 21;
    s2.CGPA = 3.5;

    // Display details of s1 and s2
    cout << "Student 1 details:\n";
    s1.show();

    cout << "\nStudent 2 details:\n";
    s2.show();

    return 0;
}
