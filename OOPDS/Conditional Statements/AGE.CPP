//WAP to check whether the user is eligible to vote based on age input

#include<iostream.h>
#include<conio.h>
void main()
{       
	clrscr();
	int age;
	cout<<"Enter your age: "<<endl;
	cin>>age;
	
	if(age>=18)
	{
		cout<<"Eligible"<<endl;
		
	}
	
	else{
		cout<<"Not eligible"<<endl;
	}
	
	getch();
}
