/*
Date: 25th May, 2024
Author: Rachel Anchan

WAP for a menu driven program
c --> area of circle
t --> area of triangle
s --> area of square
r --> area of rectangle
*/

#include<iostream.h>
#include<conio.h>
void main()
{       
	clrscr();
	char choice;
	float r, area, base, height,len, breadth;
	
	cout<<"Enter your choice: \n  c. for area of circle\n t. area of triangle\n s. area of square \n r. area of rectangle"<<endl;
	cin>> choice;
	
	switch(choice)
	{
		case 'c': cout<<"Enter radius: "<<endl;
		cin>>r;
		area=3.14*r*r;
		cout<<"Area of circle: "<<area<<endl;
		break;
		
		case 't': cout<<"Enter base: "<<endl;
		cin>>base;
		cout<<"Enter height: "<<endl;
		cin>> height;
		
		area=(1/2)*base*height;
		cout<<"Area of triangle: "<<area<<endl;
		break;
		
		case 's': cout<<"Enter length: "<<endl;
		cin>>len;
		area=len*len;
		cout<<"Area of square: "<<area<<endl;
		break;
		
		case 'r': cout<<"Enter length: "<<endl;
		cin>>len;
		cout<<"Enter breadth: "<<endl;
		cin>>breadth;
		area=len*breadth;
		cout<<"Area of rectangle: "<<area<<endl;
		break;
		
		default: cout<<"Enter a valid choice";
	}
	
	getch();
}

