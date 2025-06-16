'''
Program 6: Write a Python program to append new string in the middle of a given string
Author: Rachel Anchan
'''
text=input("Enter a string: ") #accepting user input
word=input("Enter a string: ")
new_str=""

middle=len(text)//2 #floor division to round off the integer
print("Mid length:",middle)

new_str = new_str + text[0:middle] + word + text[middle:] #len() starts from 1 but index starts from 0
print("New string:",new_str)
