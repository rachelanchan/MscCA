/*
Date: 12 June, 2024
Author: Rachel Anchan

WAP for using all string functions.
*/

#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
	clrscr();

	char str1[10], str2[10], ch ;
	cout<<"Enter string 1: "<<endl;
	cin>>str1;

	cout<<"Enter string 2: "<<endl;
	cin>>str2;
	
	cout<<"Enter character to be searched: "<<endl;
	cin>>ch;

	cout<<"String 1 Length: "<<strlen(str1)<<endl;
		cout<<"String 1 Length: "<<strlen(str2)<<"\n"<<endl;

	
	//strcpy(str1,str2);
	//cout<<"String Copy: "<<str1<<endl;
	
	
	//strcat(str1,str2);
	//cout<<"String Concat: "<<str1<<endl;
	
	cout<<"String Compare: "<<strcmp(str1,str2)<<endl;
	
	if(strchr(str1,ch))
	{
		cout<<"Character found: \n"<<endl;
	}
	else{
		cout<<"Character not found \n"<<endl;
	}
	
	// strstr
	cout<<"Enter string 1: "<<endl;
	cin>>str1;
	cout<<"Enter string 2: "<<endl;
	cin>>str2;
	if(strstr(str1,str2))
		{
			cout<<"String found: \n"<<endl;
		}
	else{
		cout<<"String not found \n"<<endl;
	}
	
	getch();
}