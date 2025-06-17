/*
Date: 25 June, 2024
Author: Rachel Anchan

WAP in C++ to create base class Employee (ecode, name, salary).
get()

Derive 2 child classes:
fulltime(dailywages, no_of_days)			getf(), putf()
parttime(no_of_hours, hourlywages)			getp(), putp()

Accept the details of employees and calculate the salary.
*/

#include<iostream.h>
#include<conio.h>
class employee
{

	public:
	int ecode, salary;
	char ename[20];

	public:
	void get()
	{
		cout<<"Enter employee details "<<endl;
		cin>>ecode>>ename;
	}
};

class fulltime: public employee
{
	public:
	int dailywages, no_of_days;

	public:
	void getf()
	{
		cout<<"Enter fulltime employee salary details: "<<endl;
		cin>>dailywages>>no_of_days;

		salary=dailywages*no_of_days;
	}

	void putf()
	{
		cout<<"Full employee time details are  "<<ecode<<ename<<salary<<endl;
	}
};

class parttime: public employee
{
	public:
	int no_of_hours, hourlywages;

	public:
	void getp()
	{
		cout<<"Enter part-time employee salary details: "<<endl;
		cin>>hourlywages>>no_of_hours;

		salary=hourlywages*no_of_hours;
	}


	void putp()
	{
		cout<<"Part-time employee time details are  "<<ecode<<ename<<salary<<endl;
	}
};

void main()
{	

	clrscr();
	fulltime o1[10];
	parttime o2[10];
	
	int i,n;
	cout<<"Enter no of employees: "<<endl;
	cin>>n;
	
	for(i=0;i<n;i++) //for full-time
	{
		o1[i].get();
		o1[i].getf();
	}
	
	for(i=0;i<n;i++)
	{
		o1[i].putf();
	}
	
	
	//for part-time
	for(i=0;i<n;i++)
	{
		o2[i].get();
		o2[i].getp();
	}
	
	for(i=0;i<n;i++)
	{
		o2[i].putp();
	}
	
	getch();
	
}
	
