'''
Program 3: Write a Python program that performs the following operations on a given input string:
length, uppercase, lowercase, Count the number of vowels in the string, 
Count the number of consonants in the string, Reverse the string, print total number of words in the string, 
Capitalizes the first letter of each word in the string
Author: Rachel Anchan
'''

text=input("Enter a string: ") #accepting user input
vowel_count, consonant_count, words = 0, 0, 0
rev="" #to store the reversed string

print("Length of string: ",len(text))
print("Uppercase:",text.upper())
print("Lowercase:",text.lower())

for char in text:
    #condition to count the number of vowels in the string
    if char == "a" or char=="e" or char == "i" or char=="o" or char=="u" or char == "A" or char=="E" or char == "I" or char=="O" or char=="U": 
        vowel_count = vowel_count + 1
    elif char == ' ':
        continue
    else: # condition to count the number of consonants in the string
        consonant_count = consonant_count + 1
print("Vowel count: ",vowel_count)
print("Consonant count: ",consonant_count)

for i in range(len(text)): 
    rev=text[i]+rev # reversing the string
print("Reversed string:",rev)

words = len(text.split())
print("Number of words: ",words)

print("Capitalize the first letter of each word: ",text.title())