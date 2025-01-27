# Lab No.1: Object Programming Essentials [Part 1]

## 1.1 Introduction
In the previous course on procedural programming, we learned how to design programs using a sequence of instructions. However, object-oriented programming (OOP) offers a paradigm shift, modeling programs as a collection of objects and their interactions. OOP extends modular programming by hiding implementation details and exposing interfaces, allowing for scalable and reusable programs.

This lab introduces classes, objects, constructors, and access specifiers to help understand OOP fundamentals.

---

## 1.2 Objectives of the Lab

1. Understand the purpose and advantages of OOP.
2. Learn about Classes and Objects.
3. Develop a basic class with data members and member functions.
4. Use access specifiers to control access to class members.
5. Create simple and overloaded constructors.
6. Manipulate data through Class Objects and Member Functions.
7. Practice with classes and objects in C++.

---

## 1.3 Pre-Lab

### 1.3.1 Class Overview
1. A Class is:
   - A set of homogeneous objects.
   - An Abstract Data Type (ADT) describing a new data type.
   - A blueprint for creating objects.
2. Data Members and Member Functions:
   - **Data Members:** Variables of either fundamental or user-defined data types.
   - **Member Functions:** Provide the interface to manipulate data.
3. Access Specifiers:
   - **Private:** Accessible only by class members.
   - **Protected:** Accessible by class members and derived classes.
   - **Public:** Accessible from anywhere.

---

## 1.4 Activities

### 1.4.1 Activity: LightBulb Class
Create a class named `LightBulb` with the following features:

1. **Data Member:** `isOn` (Boolean) to indicate whether the bulb is on or off.
2. **Constructor:**
   - No-parameter constructor sets `isOn` to `false` (initially off).
3. **Mutator Methods:**
   - `turnOn()`: Turns the bulb on.
   - `turnOff()`: Turns the bulb off.
4. **Accessor Method:**
   - `getState()`: Returns the current state of the bulb (const).
5. **Show Method:**
   - Displays whether the bulb is ON or OFF (const).

Demonstrate usage in the `main()` function by toggling the bulb's state and displaying it.

---

### 1.4.2 Activity: GPSCoordinates Class
Create a class named `GPSCoordinates` representing latitude and longitude with these features:

1. **Data Members:** `latitude` and `longitude` (double).
2. **Constructors:**
   - No-argument constructor initializes both values to `0`.
   - Two-argument constructor initializes with given latitude and longitude.
3. **Getter Methods:**
   - `getLatitude()` and `getLongitude()` (const).
4. **Setter Methods:**
   - `setLatitude(double)` and `setLongitude(double)`.
5. **Display Method:**
   - Displays the coordinates in `(latitude, longitude)` format (const).

Demonstrate usage in the `main()` function by initializing and updating coordinates.

---

## 1.5 Testing

### Activity 1.4.1 Test Cases

| Input/Action                                      | Output                     |
|--------------------------------------------------|----------------------------|
| Call `show()` to view current state              | The light bulb is now OFF. |
| Call `turnOn()`                                  | The light bulb is now ON.  |
| Call `show()` after turning on                   | The light bulb is now ON.  |
| Call `turnOff()`                                 | The light bulb is now OFF. |
| Call `show()` after turning off                  | The light bulb is now OFF. |

### Activity 1.4.2 Test Cases

| Input/Action                                  | Output                           |
|----------------------------------------------|----------------------------------|
| Call `display()` for default `location1`     | Location 1: (0, 0)              |
| Set `latitude = 33.6844`, `longitude = 71.0975` | Updated Location 1: (33.6844, 71.0975) |
| Use two-argument constructor for `location2` | Location 2: (33.6844, 73.0479)  |

---

## 1.6 Tools

1. [Code::Blocks for C++](http://www.codeblocks.org/downloads/26)
2. [Visual Studio Code for Python](https://code.visualstudio.com/download)

---

## 1.7 References

1. Class notes.
2. "Object-Oriented Programming in C++" by Robert Lafore (Chapter 6).
3. "How to Program C++" by Deitel & Deitel (Chapter 6).
4. "Programming and Problem Solving with Java" by Nell Dale & Chip Weems.
5. "Murach’s Python Programming" by Michael Urban & Joel Murach.
