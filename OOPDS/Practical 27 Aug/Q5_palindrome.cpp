/*
Date: 27 Aug, 2024
Author: Rachel Anchan
PRN: 23030142013

Q5: WAP to accept a string and check whether the gievn string is palindrome.
*/

#include <iostream.h>
#include <conio.h>
#include <string.h>

void main() {
    clrscr();

    char str[100], rev[100];

    cout << "Enter a string: ";
    cin >> str;

    // Copy the original string to rev
    strcpy(rev, str);

    // Reverse the copied string
    strrev(rev);

    if (strcmp(str, rev) == 0) {
        cout << "The string \"" << str << "\" is a palindrome." << endl;
    } else {
        cout << "The string \"" << str << "\" is not a palindrome." << endl;
    }

    getch();
}
