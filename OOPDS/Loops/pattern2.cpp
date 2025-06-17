/*
Date: 25th May, 2024
Author: Rachel Anchan

WAP to display the following pattern:
1
22
333
4444
*/

#include<iostream.h>
#include<conio.h>
void main()
{       
	clrscr();
	int i,j;

	for(i=1; i<=4; i++)
	{		
			for(j=1;j<=i;j++)
			{
				cout<<i;
			}
			
			cout<<"\n";
	}
	
	getch();
}

