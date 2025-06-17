/*
Date: 27 Aug, 2024
Author: Rachel Anchan
PRN: 23030142013

Q3: WAP to perform addition of 2 integers, float and double number using 
function overloading in C++.
*/

#include<iostream.h>
#include<conio.h>

class Q3_overloading
{
	public:
	int add(int a, int b)
	{
		return(a+b);
	}
	float add(float x, float y)
	{
		return(x+y);
	}
	double add(double p, double q)
	{
		return(p+q);
	}
	
};

	void main()
	{
		Q3_overloading obj;

		clrscr();
		cout<<obj.add(2,3)<<endl;
		cout<<obj.add(3.14,3.14)<<endl;
		cout<<obj.add(4.55555,6.5555)<<endl;
		
		getch();
	}

