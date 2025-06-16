''' 
Program 27:	WAP to find the LCM of Two Numbers
Author: Rachel Anchan
'''
num1 = int(input("Enter the first number: ")) # accepts the first number from the user 
num2 = int(input("Enter the second number: ")) # accepts the second number: from the user 

if num1 > num2:
    greater=num1
else:
    greater=num2

while(True):
    if(greater%num1 == 0 and greater%num2 == 0):
        lcm=greater
        break
    greater=greater+1
print("The LCM of",num1,"and",num2,"is:",greater)