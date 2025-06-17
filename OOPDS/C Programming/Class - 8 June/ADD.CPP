/*
Date: 8 June, 2024
Author: Rachel Anchan

WAP in C++ to create a class with a return function for addition.
*/

#include<iostream.h>
#include<conio.h>
class addition
{	
			public:
			int add(int a, int b, int c=5)
			{
				return (a+b+c);
			}
};

void main()
		{
				clrscr();
				
				addition obj;
				cout<<obj.add(5,3,6)<<"\n";
				cout<<obj.add(3,3);
				 
				getch();	
		}
