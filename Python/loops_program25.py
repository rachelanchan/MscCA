'''
Program 25:	WAP to find the Factorial of a Number
Author: Rachel Anchan
'''

num = int(input("Enter a number: ")) # accepts a number from the user 
fact=1 #to store the factorial of num
for i in range(1,num+1):
    fact=fact*i

print("The factorial of",num,"is:",fact)
