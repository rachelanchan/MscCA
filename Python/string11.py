'''
Program 11: Write a program to reverse a given string
Author: Rachel Anchan
'''
text=input("Enter a string: ") #accepting user input
rev="" #to store the reversed string
for i in range(len(text)):
    rev=text[i]+rev

print("Reversed string:",rev)