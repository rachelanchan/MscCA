/*
Date: 1 June, 2024
Author: Rachel Anchan

WAP to accept and display array elements
*/

#include<iostream.h>
#include<conio.h>
void main()
{       
	clrscr();
	int arr[10],i;
	
	cout<<"Enter the array elements: "<<endl;
	
	for (i=1; i<=10; i++)
	{	
			cin>>arr[i];
 
	}
	
	cout<<"The array elements: "<<endl;
	
	for (i=1; i<=10; i++)
	{
			cout<<" "<<arr[i];
 
	}
	
	getch();
}

