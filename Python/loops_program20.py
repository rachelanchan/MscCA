'''
Program 20: WAP to check whether a given number is an Armstrong number or not in Python
Author: Rachel Anchan
'''

num = int(input("Enter a number: ")) # accepts a number from the user 
sum=0 #stores the sum of the digits
copy_of_num=num #stores the value of num to verify if the sum of the cube of each digit = the original number
while(num!=0):
    last_digit=num%10 #extracts the last digit of the number
    sum=sum+(last_digit*last_digit*last_digit) #sums the cube of each digit in each iteration of the loop
    num=num//10 #floor division divides the number and rounds the result off to the nearest whole number

if(copy_of_num == sum):
    print(copy_of_num,"is an Armstrong number")
else:
    print(copy_of_num,"is not an Armstrong number")
