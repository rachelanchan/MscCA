'''
Program 6: WAP to find Sum of Digits in a Number.
Author: Rachel Anchan
'''

num = int(input("Enter a number: ")) # accepts a number from the user 
sum=0 #stores the sum of the digits
while(num!=0):
    last_digit=num%10 #extracts the last digit of the number
    sum=sum+last_digit #sums each digit in each iteration of the loop
    num=num//10 #floor division divides the number and rounds the result off to the nearest whole number

print("The sum of the digits is:",sum)
