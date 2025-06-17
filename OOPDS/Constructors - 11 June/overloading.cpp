/*
Date: 11 June, 2024
Author: Rachel Anchan

WAP for using  constructor overloading.
*/

#include<iostream.h>
#include<conio.h>
class add
{
	public:
	add(int a, int b)
	{
		cout<<a+b<<endl;
	}
	
	add(float x, float y)
	{
		cout<<x+y<<endl;
	}
	
	add(int p, float q)
	{
		cout<<p+q<<endl;
	}
};

void main()
{       
	clrscr();
	add obj(5,6), obj2(6.4, 4.2), obj3(10, 5.4);
	getch();
}