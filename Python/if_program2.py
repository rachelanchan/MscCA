'''
WAP in python to perform arithmetic operations on 2 numbers provided by the user
Author: Rachel Anchan
'''

#Accept 2 numbers as input from the user
num1=float(input("Enter the first number: "))
num2=float(input("Enter the second number: "))

#Addition of the 2 numbers
add=num1+num2

#Subtraction of the 2 numbers
diff=num1-num2

#Multiply the 2 numbers
mul=(num1)*(num2)

#Division of the 2 numbers
div=num1/num2

#Display the sum
print(num1,"+",num2,"=",add)

#Display the difference
print(num1,"-",num2,"=",diff)

#Display the product
print(num1,"x",num2,"=",mul)

#Display the division
print(num1,"/",num2,"=",div)