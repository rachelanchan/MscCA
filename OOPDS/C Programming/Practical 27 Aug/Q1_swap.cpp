/*
Date: 27 Aug, 2024
Author: Rachel Anchan
Q1: WAP to accept 2 numbers and swap the numbers without using a 3rd variable.
*/

#include <iostream.h>
#include <conio.h>

void main() {
    int a, b;

    // Accept two numbers from the user
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    // Swap the numbers without using a third variable
    a = a + b;  // add a and b
    b = a - b;  // subtract the new b from the sum, now b is original a
    a = a - b;  // subtract the new b from the sum, now a is original b

    // Display the swapped values
    cout << "After swapping: " << endl;
    cout << "First number: " << a << endl;
    cout << "Second number: " << b << endl;

    getch();
}
