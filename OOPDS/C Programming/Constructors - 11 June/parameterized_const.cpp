/*
Date: 11 June, 2024
Author: Rachel Anchan

WAP for using a parameterized constructor.
*/

#include<iostream.h>
#include<conio.h>
class add
{
	public:
	add(int a, int b)
	{
		cout<<a+b;
	}
};

void main()
{       
	clrscr();
	add obj(5,6);
	getch();
}