'''
Write a Python program to count all letters, digits, and special symbols from 
a given string (use isalpha(),isdigit()).
Author: Rachel Anchan
'''
text=input("Enter a string: ") #accepting user input
alpha, digit, special = 0, 0, 0
for char in text:
    if char.isalpha(): #condition to check if a character is an alphabet
        alpha+=1
    elif char.isdigit(): #condition to check if a character is a digit
        digit+=1
    elif char.isspace():
        continue
    else: #condition to check if a character is special
        special+=1 

print("Alphabet count", alpha)
print("Numeric count:", digit)
print("Special character count:", special)

