/*
Date: 3 July, 2024
Author: Rachel Anchan

create a base class shape, derive 3 classes circle, sphere and cylinder from shape class. 
Write a C++ program to calculate area of circle, sphere and cylinder using pure virtual function
*/
#include <iostream.h>
#include <math.h>
#include <conio.h>

// Base class
class Shape {
public:
    virtual double area() = 0; // Pure virtual function
};

// Derived class for Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() { // No override keyword
        return M_PI * radius * radius; // Area of circle: πr²
    }
};

// Derived class for Sphere
class Sphere : public Shape {
private:
    double radius;
public:
    Sphere(double r) : radius(r) {}
    double area() { // No override keyword
        return 4 * M_PI * radius * radius; // Surface area of sphere: 4πr²
    }
};

// Derived class for Cylinder
class Cylinder : public Shape {
private:
    double radius, height;
public:
    Cylinder(double r, double h) : radius(r), height(h) {}
    double area() { // No override keyword
        return 2 * M_PI * radius * (radius + height); // Surface area of cylinder: 2πr(r + h)
    }
};

void main() {
    // Create objects for Circle, Sphere, and Cylinder
    Circle circle(5.0);
    Sphere sphere(5.0);
    Cylinder cylinder(5.0, 10.0);

    clrscr();

    // Calculate and display the area for each shape
    cout << "Area of Circle: " << circle.area() << endl;
    cout << "Surface Area of Sphere: " << sphere.area() << endl;
    cout << "Surface Area of Cylinder: " << cylinder.area() << endl;

    getch();
}