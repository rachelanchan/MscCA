/*
Date: 8 June, 2024
Author: Rachel Anchan

WAP for using a class to print student details.
*/

#include<iostream.h>
#include<conio.h>
class student
{	
			int rollno;
			char sname[20], addr[20];
	
			public:
			void get()
			{
				cin>>rollno>>sname>>addr;
				cout<<"Roll No: "<<rollno<<" Name: "<<sname<<" Address: "<<addr<<endl;
			}
};
			void main()
			{
				int n, i;
				student obj[100];
				
				cout<<"Enter the number of students: "<<endl;
				cin>>n;
				
				cout<<"Enter student  details: \n"<<endl;
				for(i=0;i<n;i++)
					{
						obj[i].get();
					}	
				getch();	
			}

