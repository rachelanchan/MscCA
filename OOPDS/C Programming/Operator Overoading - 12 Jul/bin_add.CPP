/*
Date: 12 Jul, 2024
Author: Rachel Anchan

//Concept of Polymorphism 

WAP for binary overloading in C++ for addition of two numbers.
*/

#include<iostream.h>
#include<conio.h>
class test
{	
    int num;
    public:
    test()
    {
    }

    test(int x)
    {
        num=x;
    }

    void operator +(test);
}; //class

void test::operator+(test o1) //scope resolution
    {
        int m=num+o1.num;
        cout<<"Addition of two integers: "<<m<<endl;
    }
void main()
{ 
	
	test t1(5),t2(4);
    clrscr(); // after declaration
    t1+t2;
	
	getch();
	
}