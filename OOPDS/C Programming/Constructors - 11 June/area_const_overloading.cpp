/*
Date: 11 June, 2024
Author: Rachel Anchan

WAP to calculate area of a circle, area of a rectangle and area of a triangle using constructor overloading.
*/

#include<iostream.h>
#include<conio.h>
class area
{
	public:
	area(float radius)
	{
		cout<<"Area of circle is: "<<3.142*radius*radius<<endl;
	}
	
	area(int length, int breadth)
	{
		cout<<"Area of rectangle is: "<<length*breadth<<endl;
	}
	
		area(int base, float height)
	{
		cout<<"Area of triangle is: "<<(1/2)*base*height<<endl;
	}
};

void main()
{       
	clrscr();
	area obj(5), obj2(6, 4), obj3(10, 5);
	getch();
}