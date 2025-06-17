/*
Date: 5 June, 2024
Author: Rachel Anchan

WAP for the matrix.
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
				cout<<a[i][j]<<"\t";		
		}
		cout<<"\n";
	}
	getch();
}

