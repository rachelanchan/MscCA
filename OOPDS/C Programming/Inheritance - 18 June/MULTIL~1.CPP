/*
Date: 18 June, 2024
Author: Rachel Anchan

WAP to use multilevel inheritance.
*/

#include<iostream.h>
#include<conio.h>
class grandparent
{	
	public:
	void get()
	{
		cout<<"This is multilevel inheritance. "<<endl;
	}
};

class parent: public grandparent
{		
};

class child: public parent
{
};

void main()
{ 
	child o1;
	clrscr();
	
	o1.get();
	
	getch();
	
}
	
