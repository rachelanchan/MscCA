/*
Date: 5 June, 2024
Author: Rachel Anchan

WAP for displaying the multiplication of elements in the matrix.
*/

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int a[2][2],b[2][2],c[2][2],sum,i,j,k;
	sum=0;

	cout<<"Enter matrix A elements: "<<endl;

	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
				cin>>a[i][j];
		}
	}

	cout<<"Enter matrix B elements: "<<endl;

	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
				cin>>b[i][j];
		}
	}

	cout<<"\nMatrix A: "<<endl;

	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
				cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}

	cout<<"\nMatrix B: "<<endl;

	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
				cout<<b[i][j]<<"\t";
		}
		cout<<"\n";
	}

	cout<<"\nThe multiplication of the matrix elements are: "<<endl;

	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{       sum=0;
			for(k=0;k<2;k++)
				{
					sum=sum+a[i][k]*b[k][j];
				}

			c[i][j]=sum;
		}
	}
	
	//print
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
				cout<<c[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	
	getch();
}



