'''
Program 13: Write a program to count the number of letters in a word. (use len())
Author: Rachel Anchan
'''

text=input("Enter a string: ") #accepting user input
count=0
text=text.strip() #to remove whitspaces at the start and end of the string
for char in range(len(text)):
    if len(text)>0 and text[char].isalpha():
        count+=1


print("Number of letters:",count)