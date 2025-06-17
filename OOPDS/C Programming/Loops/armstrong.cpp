/*
Date: 29th May, 2024
Author: Rachel Anchan

WAP to display if a number is an Armstrong number.
*/

#include<iostream.h>
#include<conio.h>
void main()
{       
	clrscr();
	int num, digit, sum;
	sum=0;
	
	cout<<"Enter a number: "<<endl;
	cin>>num;
	
	int copy=num;
	
	while(num!=0)
	{
		digit=num%10;
		sum=sum+(digit*digit*digit);
		num=num/10;
	}
	
	if(copy==sum)
	{
		cout<<copy<<" is an Armstrong number."<<endl;
	}
	
	else
	{
		cout<<copy<<" is not an Armstrong number."<<endl;

	}
	getch();
}

