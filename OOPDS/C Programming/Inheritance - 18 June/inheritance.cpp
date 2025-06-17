/*
Date: 18 June, 2024
Author: Rachel Anchan

WAP to use single inheritance.
*/

#include<iostream.h>
#include<conio.h>
class person
{ 
		int id;
		char name[20];

		public:
		void getp()
		{
			cout<<"Enter person details: "<<endl;
			cin>>id>>name;
		}

		void setp()
		{
			cout<<id<<" "<<name;
		}
};

class student: private person
{ 		
		int marks;
		public: 
		void gets()
		{ 
			getp();
			cout<<"Enter marks: "<<endl;
			cin>>marks;
		}  
		
		void sets()
		{
			setp();
			cout<<marks<<endl;
		}
		
};

void main()
		{
			clrscr();
			student s;
			s.gets();
			s.sets();
			getch();  // Wait for a key press
		}
			
