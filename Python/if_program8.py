'''
Write a program that asks the user to enter a length in centimeters. 
If the user  enters a negative length, the program should tell the user that the entry is invalid. 
Otherwise, the program should convert the length to inches and print out  the result. 
There are 2.54 centimeters in an inch.

Author: Rachel Anchan
'''

length=float(input("Enter a length value in centimeters: ")) #accept the length from the user

if(length<0):
    print("Your value is invalid")
else:
    inches=float(length/2.54) #formula to convert cm to inches
    print(length,"cm = ",inches,"inches")