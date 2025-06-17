/*
Date: 25th May, 2024
Author: Rachel Anchan

WAP to calculate x raised to y
*/

#include<iostream.h>
#include<conio.h>
void main()
{       
	clrscr();
	int x,y,pow,i;
	cout<<"Enter numbers x and y: "<<endl;
	cin>>x>>y;
	
	pow=1;
	for(i=1; i<=y; i++)
	{		
			pow=pow*x;
	}
	
	cout<<"Power :"<<pow<<endl;
	
	getch();
}

