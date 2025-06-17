/*
Date: 1 June, 2024
Author: Rachel Anchan

WAP to merge two arrays.
*/

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[5],i,k ,b[5],c[10];
	k=0;
	
	cout<<"Enter Array 'A' elements: "<<endl;

	for (i=0; i<5; i++)
	{
			cin>>a[i];
	}
	cout<<"Enter Array 'B' elements: "<<endl;

	for (i=0; i<5; i++)
	{
			cin>>b[i];
	}
	i=0;
	while(i<5)
	{
		c[k]=a[i];
		i++;
		k++;		
	}
	i=0;
	while(i<5)
	{
		c[k]=b[i];
		k++;
		i++;
	}
	
	cout<<"The array 'C' elements: "<<endl;
	
	for (i=0; i<k; i++)
	{
			cout<<" "<<c[i];
 
	}
	
	getch();
}

