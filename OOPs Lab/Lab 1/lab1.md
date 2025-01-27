# Lab No. 0: Revision of Structured Programming

This lab focuses on revising structured programming concepts such as decision-making, iterations, functions, structures, arrays, and pointers. It acts as a pre-lab for Object-Oriented Programming, emphasizing the importance of functions and pointers.

---

## Objectives

- Reinstate the concepts of structured programming:
  1. Decision making
  2. Iterations
  3. Functions
  4. Structures and Arrays
  5. Pointers

---

## Activities

### **Activity 0.3.1: Calculate Average**
Write a program to calculate the average of a set of numbers entered by the user.

#### Steps:
1. Implement a function `calculateAverage()` that takes an integer array and its size as arguments. It should calculate and return the average of the numbers in the array.
2. In the `main()` function:
   - Ask the user to input the number of values.
   - Allocate an integer array of the specified size.
   - Accept values from the user into the array.
   - Call `calculateAverage()` to calculate the average.
3. Display the calculated average.

#### Sample Input/Output:
```
Enter the number of values to average: 2
Enter 2 integer values, one by one:
Value 1: 4
Value 2: 5
The average of the entered values is: 4.5
```

---

### **Activity 0.3.2: Student Structure**
Create a structure `Student` with the following attributes:
- **NAME**: Character array (size 50)
- **AGE**: Integer
- **CGPA**: Floating-point number

#### Steps:
1. Define a no-argument constructor and a three-argument constructor for initialization.
2. Include a `show()` method to display the attributes.
3. In `main()`:
   - Create two `Student` objects (`s1` and `s2`).
   - Use the three-argument constructor to initialize `s1`.
   - Directly assign values to `s2`.
   - Display both using `show()`.

#### Sample Input/Output:
```
Student 1 details:
Name: Ali Khan
Age: 22
CGPA: 3.12

Student 2 details:
Name: Ramiz Shah
Age: 21
CGPA: 3.5
```

---

### **Activity 0.3.3: Random Data Generation and Sum**
Write a program to generate random integers, store them in an array, and calculate their sum using pointer notation.

#### Steps:
1. In `main()`:
   - Ask the user for the array length.
   - Use `rand()` to generate random integers (range: 0 to 100).
   - Store values using pointer notation.
   - Display the generated values and their sum.

#### Sample Input/Output:
```
Enter the length of the array: 3
Generated data: 35 47 89
Sum of the generated data: 171
```

---

### **Activity 0.3.4: Transpose of a Matrix**
Write a program to find the transpose of an NxN matrix using dynamic memory allocation.

#### Steps:
1. Declare the matrix and its transpose using `calloc()`.
2. Populate the matrix using user input.
3. Use pointers to calculate and store the transpose.
4. Display the transpose.
5. Free allocated memory at the end.

#### Sample Input/Output:
```
Enter the size of the square matrix (NxN): 2
Matrix contents:
5 9
4 3

Transpose:
5 4
9 3
```

---
