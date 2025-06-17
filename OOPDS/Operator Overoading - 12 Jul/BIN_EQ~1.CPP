

/*
Date: 12 Jul, 2024
Author: Rachel Anchan

//Concept of Polymorphism

WAP for binary overloading in C++ to overload 'equal to' operator ("==")
for checking if 2 strings are equal or not.
*/

#include<iostream.h>
#include<conio.h>
#include<string.h>
class str
{   public:
    char s1[20];
    str(char x[])
    {
	strcpy(s1,x);
    }

    int operator ==(str o1)
    {
	int p=strcmp(s1,o1.s1);


	     return p;

    }
}; //class

void main()
{
    str o1("hello"),o2("hello");
    clrscr(); // after declaration
    int y=(o1==o2);
    cout<<y;
    if(y==0)
    {
	cout<<"The strings are equal.";
    }

    else
    {
	cout<<"The strings are unequal.";
    }

	getch();
}