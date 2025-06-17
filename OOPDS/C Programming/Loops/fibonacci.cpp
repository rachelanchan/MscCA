/*
Date: 29th May, 2024
Author: Rachel Anchan

WAP to display the fibonacci series.
*/

#include<iostream.h>
#include<conio.h>
void main()
{       
	clrscr();
	int num, a, b, sum,i;
	sum=0;
	a=0; 
	b=1;
	
	cout<<"Enter a number: "<<endl;
	cin>>num;
	
	cout<<"Fibonacci Series: ."<<endl;
	cout<<a<<", "<<b<<", ";
	for(i=3;i<=num;i++)
	{		
		    sum=a+b;
			a=b;
			b=sum;
			
			cout<<sum<<", ";
	}
		
	getch();
}

