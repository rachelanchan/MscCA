'''
Program 14: Write a Python program to search a specific word in a string. (use ‘in’ operator)
Author: Rachel Anchan
'''
text=input("Enter a string: ") #accepting user input
word=input("Enter a word to be searched in the string: ") #accepting user input

if word in text:
    print(word,f'is present in "{text}"') #formatted string literal
else:
    print(word,f'is not present in "{text}"') #formatted string literal