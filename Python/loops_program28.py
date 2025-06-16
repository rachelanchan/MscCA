'''
Program 28:	WAP to check if a number is a Palindrome Number
Author: Rachel Anchan
'''
num = int(input("Enter a number: ")) # accepts a number from the user 
num_stored=num; #storing a copy of the number as num is used in the while loop
rev=0 #stores the reverse of the number
while(num!=0):
    last_digit=num%10 #extracts the last digit of the number
    rev=(rev*10) + last_digit #reverses the digit
    num=num//10 #floor division divides the number and rounds the result off to the nearest whole number

print("The reverse of",num_stored,"is:",rev)
if(rev==num_stored):
    print(num_stored,"is a palindrome number")
else:
    print(num_stored,"is not a palindrome number")
