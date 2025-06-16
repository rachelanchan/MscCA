''' 
Program 21:	WAP to Count the Number of Digits in a Number
Author: Rachel Anchan
'''

num = int(input("Enter a number: ")) # accepts a number from the user 
count=0 #counts the number of digits
temp=num #stores a copy of num 
while(num!=0):
    last_digit=num%10 #extracts the last digit of the number
    count=count+1 #counts each digit in each iteration of the loop
    num=num//10 #floor division divides the number and rounds the result off to the nearest whole number

print("The number of digits in the number",temp,"is",count)