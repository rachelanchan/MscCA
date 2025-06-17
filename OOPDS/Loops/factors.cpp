/*
Date: 25th May, 2024
Author: Rachel Anchan

WAP to display factors of a number
*/

#include<iostream.h>
#include<conio.h>
void main()
{       
	clrscr();
	int num,i;
	cout<<"Enter a number: "<<endl;
	cin>>num;
	
	cout<<"Factors :"<<endl;
	for(i=1; i<=num/2; i++)
	{		
			if(num%i==0)
			{ 
				cout<<i<<endl;
			}
	}
	
	getch();
}

