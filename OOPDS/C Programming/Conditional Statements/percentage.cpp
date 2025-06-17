//WAP to display the class of a student

#include<iostream.h>
#include<conio.h>
void main()
{       
	clrscr();
	float percent;
	cout<<"Enter your percentage: "<<endl;
	cin>>percent;
	
		if(percent>=70)
			{
				cout<<"Student scored in distinction"<<endl;
			}
		
		else if(percent>=60 && percent<70)
			{
				cout<<"Student scored in first class"<<endl;
			}
		
		else if(percent>=50 && percent<60)
			{
				cout<<"Student scored in second class"<<endl;
			}
		
		else if(percent>=40 && percent<50)
			{
				cout<<"Student scored in pass class"<<endl;
			}
			
		else{
			cout<<"Student has failed"<<endl;
		}
	
	getch();
}
