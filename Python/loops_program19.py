'''
Program 19:	Python program for Leap Year
Author: Rachel Anchan
'''
year = int(input("Enter a valid year: ")) # accepts a year value from the user 
if(year%400 == 0 and year%100 == 0):
    print(year,"is a leap year")
elif(year%4 == 0 and year%100 != 0):
    print(year,"is a leap year")
else:
    print(year,"is not a leap year")
