/*
Date: 25th May, 2024
Author: Rachel Anchan

WAP for a menu driven program
1. Addition
2. Subtraction
3. Multiplication
4. Division
*/

#include<iostream.h>
#include<conio.h>
void main()
{       
	clrscr();
	int a,b,c, choice;
	cout<<"Enter a and b: "<<endl;
	cin>>a>>b;
	
	cout<<"Enter your choice: \n 1. Addition\n 2. Subtraction\n 3.Multiplication \n 4.Division"<<endl;
	cin>> choice;
	
	switch(choice)
	{
		case 1: c=a+b;
		cout<<"Addition: "<<c<<endl;
		break;
		
		case 2: c=a-b;
		cout<<"Subtraction: "<<c<<endl;
		break;
		
		case 3: c=a*b;
		cout<<"Multiplication: "<<c<<endl;
		break;
		
		case 4: c=a/b;
		cout<<"Division: "<<c<<endl;
		break;
		
		default: cout<<"Enter a valid choice";
	}
	
	getch();
}