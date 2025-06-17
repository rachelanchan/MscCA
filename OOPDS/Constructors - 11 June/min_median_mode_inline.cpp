/*
Date: 11 June, 2024
Author: Rachel Anchan

WAP to calculate mean, median, mode of 3 numbers using inline functions.
*/

#include<iostream.h>
#include<conio.h>
	
	inline int mean(int a, int b, int c)
	{
		return (a+b+c)/3;
	}
	
	inline int median(int a, int b, int c)
	{	
		int arr[]={ a,  b,  c};
		return arr[((3+1)/2)+1];
	}
	
	inline int mode(int a, int b, int c)
	{
		if (a == b || a == c)
			return a;
		if (b == c)
			return b;
    return -1; // Return -1 if there's no mode (no number is repeated)
	
	}
	
void main()
{       
	clrscr();
	cout<<"Mean: "<<mean(3,4,5)<<endl;
	cout<<"Median: "<<median(5,10,15)<<endl;
	cout<<"Mode: "<<mode(5,5,1)<<endl;

	getch();
}