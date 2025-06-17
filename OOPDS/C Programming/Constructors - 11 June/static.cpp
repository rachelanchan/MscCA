/*
Date: 11 June, 2024
Author: Rachel Anchan

WAP to use a static class.
*/

#include<iostream.h>
#include<conio.h>
	static class add
	{
		public:
		static int a=5;
		static void f1()
		{
			cout<<"This is a static class function."<<endl;
		}
		
	};
	
	void main()
	{		
			clrscr();
			cout<<"Static data member is:  "<<add::a<<endl;
			cout<<add::f1();
			getch();
	}

/* 
#include <iostream>

class Add
{
public:
    static int a;
    static void f1()
    {
        std::cout << "This is a static class function." << std::endl;
    }
};

// Define the static member outside the class
int Add::a = 5;

int main()
{
    std::cout << "Static data member is: " << Add::a << std::endl;
    Add::f1();
    return 0;
}

*/