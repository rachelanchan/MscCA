/*
Date: 12 June, 2024
Author: Rachel Anchan

WAP for using the friend function  in 2 classes.

NOT IN SYLLABUS
*/

#include<iostream.h>
#include<conio.h>
class B;
class A
{
		int x;
	
	public:
		void getdata(int i)
		{
			x=i;
		}
		friend void min(A,B); //friend function
};

class B
{
	
}

int main()
{       
	clrscr();
	

	getch();
}
