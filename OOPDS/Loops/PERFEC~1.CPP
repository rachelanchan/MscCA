x/*
Date: 25th May, 2024
Author: Rachel Anchan

WAP to check if a number is a perfect number
*/

#include<iostream.h>
#include<conio.h>
void main()
{       
	clrscr();
	int num,i,sum;
	sum=0;
	cout<<"Enter a number: "<<endl;
	cin>>num;
	
	cout<<"Factors :"<<endl;
	for(i=1; i<=num; i++)
	{		
			if(num%i==0)
			{ 
				sum=sum+i;
			}
	}
	
	if(sum==num)
		cout<<num<<" is a perfect number"<endl;
	
	else
		cout<<num<<" is not a perfect number"<endl;
	
	getch();
}

