'''
Program 1: Write a Python program to calculate the length of a string.
Author: Rachel Anchan
'''

text=input("Enter a string: ")
counter=0 # counter variable to count the number of character in a string
for i in text:
    counter=counter+1

print("The entered string is:",text)
print("The length of the string:",counter)