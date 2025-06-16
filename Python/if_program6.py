'''
WAP in python to find the largest of 2 numbers
Author: Rachel Anchan
'''

#accept 2 numbers from the user as input
num1=float(input("Enter a number: "))
num2=float(input("Enter a number: "))

#condition to check the larger of the number
if(num1>num2):
    print(num1,"is greater than",num2)
else:
    print(num2,"is greater than",num1)