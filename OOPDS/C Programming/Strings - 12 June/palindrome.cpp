/*
Date: 12 June, 2024
Author: Rachel Anchan

WAP to check if a string is palindrome.
*/

#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
	clrscr();

	char str1[10], rev[10];
	int count=0;
	
	cout<<"Enter a string: "<<endl;
	cin>>str1;
	for(int i=0;i<strlen(str1);i++)
		{
			rev=str[i]+rev;
		}
	
	if (strcmp(str1, rev) == 0) 
		{
			cout << "The string \"" << str1 << "\" is a palindrome." << endl;
		} 
	
	else 
		{
			cout << "The string \"" << str1 << "\" is not a palindrome." << endl;
		}
	
	getch();
}