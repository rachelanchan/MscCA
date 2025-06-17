/*
Date: 29th May, 2024
Author: Rachel Anchan

WAP to display: 1!+2!+3!+......
*/

#include<iostream.h>
#include<conio.h>
void main()
{       
	clrscr();
	int num, fact,i,j;
	sum=0;
	
	cout<<"Enter the value of n: "<<endl;
	cin>>num;
	
	for (i=1; i<=num; i++)
	{	
		fact=1;
		for(j=1;j<=i;j++)
		{
			fact=fact*j;
		}
		sum=sum+fact; 
	}
	
	cout<<"Factorial Sum:  "<<sum<<endl;
	getch();
}

