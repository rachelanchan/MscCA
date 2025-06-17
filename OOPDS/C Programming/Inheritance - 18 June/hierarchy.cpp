/*
Date: 18 June, 2024
Author: Rachel Anchan

WAP to use hierarchy inheritance.
*/

#include<iostream.h>
#include<conio.h>
class animal
{	
	public:
	void geta()
	{
		cout<<"This is an animal. "<<endl;
	}
};

class dog: public animal
{			
	public:
	void getd()
	{
		cout<<"This is a dog."<<endl;
	}
};

class cat: public animal
{			
	public:
	void getc()
	{
		cout<<"This is a cat."<<endl;
	}
};

void main()
{ 
	dog d;
	cat c;
	
	clrscr();
	
	d.geta();
	d.getd();
	
	c.geta();
	c.getc();
	
	getch();
	
}
	
