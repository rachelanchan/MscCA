'''
Program 26:	WAP to find the GCD of Two Numbers
Author: Rachel Anchan
'''

num1 = int(input("Enter the first number: ")) # accepts the first number from the user 
num2 = int(input("Enter the second number: ")) # accepts the second number: from the user 

if num1 > num2:
    range_value=num1
else:
    range_value=num2

for i in range(1,range_value+1):
    if(num1%i == 0 and num2%i == 0):
        gcd=i

print("The GCD of",num1,"and",num2,"is:",gcd)