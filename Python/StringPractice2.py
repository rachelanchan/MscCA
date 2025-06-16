'''
Program 2: Given two strings, s1 and s2. Write a program to create a new string s3 by appending s2 in the middle of s1.
Given: s1 = "Atul" s2 = "Patil" Expected Output:  AtPatilul
Author: Rachel Anchan
'''
text=input("Enter string 1: ") #accepting user input
word=input("Enter string 2: ")
new_str=""

middle=len(text)//2 #floor division to round off the integer
print("Mid length:",middle)

new_str = new_str + text[0:middle] + word + text[middle:] #len() starts from 1 but index starts from 0
print("New string:",new_str)
