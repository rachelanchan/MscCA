'''
Program 11: WAP to check whether the given integer is a multiple of both 5 and 7
Author: Rachel Anchan
'''
num = int(input("Enter a number: ")) # accepts a number from the user
if(num%5==0 and num%7==0):
    print(num,"is a multiple of both 5 and 7")
else:
     print(num,"is not a multiple of 5 and 7")