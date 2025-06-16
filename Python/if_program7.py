'''
WAP in python to find the largest of 3 numbers
Author: Rachel Anchan
'''

#accept 3 numbers from the user as input

num1=float(input("Enter the first number: "))
num2=float(input("Enter the second number: "))
num3=float(input("Enter the third number: "))

#if condition to check which number is the largest
if(num1>=num2) and (num1>=num3):
    print("The largest number is",num1)
elif(num2>=num1) and (num2>=num3):
    print("The largest number is",num2)
else:
    print("The largest number is",num3)