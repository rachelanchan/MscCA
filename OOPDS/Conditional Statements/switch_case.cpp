//WAP to display the number using SWITCH

#include<iostream.h>
#include<conio.h>
void main()
{       
	clrscr();
	int num;
	cout<<"Enter your number: "<<endl;
	cin>>num;
		
		switch(num)
		{
			case 10:cout<<"Ten";
			break;
			
			case 20:cout<<"Twenty";
			break;
			
			case 30:cout<<"Thirty";
			break;
			
			default:cout<<"Enter a valid number";
			
		}
		
	getch();
}
