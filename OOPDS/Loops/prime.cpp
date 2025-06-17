/*
Date: 29th May, 2024
Author: Rachel Anchan

WAP to display if a number is a prime number.
*/

#include<iostream.h>
#include<conio.h>
void main()
{       
	clrscr();
	int num, flag, i;
	flag=0;
	
	cout<<"Enter a number: "<<endl;
	cin>>num;
	
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			flag=1;
			break;
		}
	}
	
	if(flag==0)
	{
		cout<<num<<" is a prime number."<<endl;
	}
	
	else
	{
		cout<<num<<" is not a prime number."<<endl;
	}
	getch();
}

