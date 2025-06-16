'''
Program 14: WAP to display the given integer in reverse manner
Author: Rachel Anchan
'''
num = int(input("Enter a number: ")) # accepts a number from the user 
num_stored=num; #storing a copy of the number as num is used in the while loop
rev=0 #stores the reverse of the digits
while(num!=0):
    last_digit=num%10 #extracts the last digit of the number
    rev=(rev*10) + last_digit #reverses the digit
    num=num//10 #floor division divides the number and rounds the result off to the nearest whole number

print("The reverse of",num_stored," is:",rev)
