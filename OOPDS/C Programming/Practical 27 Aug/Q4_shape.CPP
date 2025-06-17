/*
Date: 27 Aug, 2024
Author: Rachel Anchan

Q4: WAP to create a class Shape.
Derive three different classes Circle, Sphere and Cylinder from Shape.
Write a C++ program to calculate area of circle, sphere and cylinder using pure virtual function.
*/

#include <iostream.h>
#include <conio.h>
#include <math.h>

class Shape {
public:
    // Pure virtual function for calculating area
    virtual void calculateArea() = 0;
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    void calculateArea() {
        float area = 3.14 * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }
};

class Sphere : public Shape {
private:
    float radius;

public:
    Sphere(float r) : radius(r) {}

    void calculateArea() {
        float area = 4 * 3.14 * radius * radius;
        cout << "Surface Area of Sphere: " << area << endl;
    }
};

class Cylinder : public Shape {
private:
    float radius, height;

public:
    Cylinder(float r, float h) : radius(r), height(h) {}

    void calculateArea() {
        float area = 2 * 3.14 * radius * (radius + height);
        cout << "Surface Area of Cylinder: " << area << endl;
    }
};

void main() {
    clrscr(); // Clear the screen

    Circle circle(11.0);
    Sphere sphere(6.0);
    Cylinder cylinder(5.1, 10.0);

    // Calculate and display areas
    circle.calculateArea();
    sphere.calculateArea();
    cylinder.calculateArea();

    getch(); // Wait for a key press before closing the console
}
