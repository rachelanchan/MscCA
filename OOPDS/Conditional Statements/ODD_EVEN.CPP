//WAP to check whether the given number is even or odd

#include<iostream.h>
#include<conio.h>
void main()
{       
	clrscr();
	int num;
	cout<<"Enter your number: "<<endl;
	cin>>num;
	
	if(num%2==0)
	{
		cout<<num<<" is even"<<endl;
		
	}
	
	else{
		cout<<num<<" is odd"<<endl;
	}
	
	getch();
}
