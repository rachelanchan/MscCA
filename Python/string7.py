'''
Program 7: Write a Python program to arrange string characters such that lowercase letters 
should come first (use lower())
Author: Rachel Anchan
'''

text=input("Enter a string: ") #accepting user input
lower=""
upper=""
for char in text:
    if char.islower(): #condition to check if a character is lowercase or not
        lower=lower+char
    else:
        upper=upper+char
new_string=lower+upper
print("Original String:",text)
print("Updated String:",new_string)

