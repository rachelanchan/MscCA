'''
Program 9: Write a Python program to find all occurrences of a substring in a 
given string by ignoring the case
Author: Rachel Anchan
'''

text=input("Enter a string: ") #accepting user input
word=input("Enter a substring : ") #accepting user input
index=[]
for i in range(len(text)):
    if text.startswith(word,i):
        index.append(i)


print("The index of the word in the entered string is as follows:")
print("Entered string:",text)
print("Entered word:",word,)
print("Index:",index)