/*
Date: 29th May, 2024
Author: Rachel Anchan

WAP to display the reverse of a given number
*/

#include<iostream.h>
#include<conio.h>
void main()
{       
	clrscr();
	int num, digit, rev;
	rev=0;
	
	cout<<"Enter a number: "<<endl;
	cin>>num;
	
	while(num!=0)
	{
		digit=num%10;
		rev=(rev*10)+digit;
		num=num/10;
	}
	
	cout<<"Reverse: "<<rev<<endl;
	getch();
}

