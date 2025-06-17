/*
Date: 29th May, 2024
Author: Rachel Anchan

WAP to display the digits of a given number
*/

#include<iostream.h>
#include<conio.h>
void main()
{       
	clrscr();
	int num, digit;
	
	cout<<"Enter a number: "<<endl;
	cin>>num;
	
	cout<<"Digits:  "<<endl;
	while(num!=0)
	{
		digit=num%10;
		cout<<digit<<"\t";
		
		num=num/10;
		
	}
	
	getch();
}

