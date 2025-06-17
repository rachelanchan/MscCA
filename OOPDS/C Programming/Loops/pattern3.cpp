/*
Date: 29th May, 2024
Author: Rachel Anchan

WAP to display the following pattern:
A
AB
ABC
ABCD
*/

#include<iostream.h>
#include<conio.h>
void main()
{       
	clrscr();
	int i,j,n;

	cout<<"Enter n: "<<endl;
	cin>>n;
	
	for(i=1; i<=n; i++)
	{		
			char ch='A';
			for(j=1;j<=i;j++)
			{
				cout<<ch;
				ch++;
			}
			
			cout<<"\n";
	}
	
	getch();
}

