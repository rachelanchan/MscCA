/*
Date: 1 June, 2024
Author: Rachel Anchan

WAP to accept and find maxcount of array elements.
*/

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[10],i, maxcount=0,j ,count;

	cout<<"Enter the array elements: "<<endl;

	for (i=0; i<10; i++)
	{
			cin>>a[i];
	}

	for(i=0;i<10;i++)
	{
		for(j=i+1; j<10;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
	}
	if(maxcount<count)
	{
	maxcount=count;
	}
	cout <<"Max count: "<<maxcount<<endl; 
	getch();
}

