/*
Date: 18 June, 2024
Author: Rachel Anchan

WAP to use single inheritance.
*/

#include<iostream.h>
#include<conio.h>

class person
{
    int id;
    char name[20];

    public:
    void getp()
    {
        cout << "Enter person details (ID and Name): " << endl;
        cin >> id >> name;
    }
	
	public:
    void setp()
    {
        cout << "Person Details: " << id << " " << name << endl;
    }
};

class student: private person
{
    int marks;

    public:
    void gets()
    {
        getp();
        cout << "Enter marks: " << endl;
        cin >> marks;
    }
	
	public:
    void sets()
    {
        setp();
        cout << "Marks: " << marks << endl;
    }
};

void main()
{
    clrscr();  
	
    student s;
    s.gets();
    s.sets();
	
    getch();  
}
