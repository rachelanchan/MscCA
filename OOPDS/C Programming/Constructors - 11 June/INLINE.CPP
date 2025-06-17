/*
Date: 11 June, 2024
Author: Rachel Anchan

WAP to use inline functions to calulate cube and square of 3 and 5.
*/

#include<iostream.h>
#include<conio.h>

	inline int cube(int s)
	{
		return s*s*s;
	}
	
	inline int square(int r)
	{
		return r*r;
	}
	
int main()
{       
	clrscr();
	cout<<"The cube of 3 is: "<<cube(3)<<endl;
	cout<<"The square of 5 is: "<<square(5)<<endl;
	
	getch();
}