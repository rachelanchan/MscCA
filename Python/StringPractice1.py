'''
Write a Python program to create a string made of the middle three characters.
E.g str1 = "JhonDipPeta"  o/p Output  Dip
Author: Rachel Anchan
'''

text=input("Enter a string: ") #accepting user input
new_str=""
middle=len(text)//2 #floor division to round off the integer
print("Mid length:",middle)

new_str=new_str + text[middle-1]+text[middle]+text[middle+1] #len() starts from 1 but index starts from 0
print("New string:",new_str)
