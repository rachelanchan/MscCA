/*
Date: 5 June, 2024
Author: Rachel Anchan

WAP for displaying the diagonal elements in the 
matrix.
*/

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[3][3],i,j;

	cout<<"Enter matrix elements: "<<endl;

	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
				cin>>a[i][j];		
		}
	}
	
	cout<<"The elements are: "<<endl;
	
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
				if(i==j)
				{ cout<<a[i][j];	}	
		}
		cout<<"\n";
	}
	getch();
}

