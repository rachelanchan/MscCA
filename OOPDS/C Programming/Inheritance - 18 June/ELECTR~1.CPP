/*
Date: 25 June, 2024
Author: Rachel Anchan

WAP to use multilevel inheritance.
*/

#include<iostream.h>
#include<conio.h>
class electronicdevice
{
	public:
	electronicdevice()
	{
		cout<<"I am an electronic device. "<<endl;
	}
};

class computer: public electronicdevice
{
	public:
	computer()
	{
		cout<<"This is a computer system.";
	}
};

class linux: public computer
{   
	public:
	linux()
	{
		cout<<"This is a linux based system.";
	}
};

void main()
{ 
	clrscr();
	linux o1;
	//o1.linux();	
	
	getch();
	
}
	
