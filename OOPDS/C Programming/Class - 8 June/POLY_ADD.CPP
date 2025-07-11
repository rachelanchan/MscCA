/*
Date: 8 June, 2024
Author: Rachel Anchan

WAP in C++ to create a class with a return function for addition using polymorphism.
*/

#include <iostream.h>
#include<conio.h>

class addition {
    public:
        int add(int a, int b) {
            return (a + b);
        }

        float add(float a, float b) {
            return (a + b);
        }

        double add(double a, double b) {
            return (a + b);
        }
};

int main() {
	clrscr();
    addition obj;
    cout << obj.add(5, 3) << "\n";
    cout << obj.add(3.0f, 3.0f) << "\n";
    cout << obj.add(3.0, 4.0) << "\n";
	
	getch();
}
