/*
Date: 25th May, 2024
Author: Rachel Anchan

WAP to display factorial of a given number
*/

#include<iostream.h>
#include<conio.h>
void main()
{       
	clrscr();
	int num, fact,i;
	fact=1;
	cout<<"Enter a number: "<<endl;
	cin>>num;
	
	for (i=1; i<=num; i++)
	{
			fact=fact*i;
	}
	
	cout<<"Factorial: "<<fact<<endl;
	getch();
}

