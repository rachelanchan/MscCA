'''
Program 7: WAP to check whether the given integer is a multiple of 5
Author: Rachel Anchan
'''

num = int(input("Enter a number: ")) # accepts a number from the user
if(num%5==0 or num%5==5):
    print(num,"is a multiple of 5")
else:
    print(num,"isn't a multiple of 5")