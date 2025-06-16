''' 
Program 24:	WAP to find Factors of a Number
Author: Rachel Anchan
'''

num = int(input("Enter a number: ")) # accepts a number from the user 
print("The factors of",num,"are as follows: ")
for i in range(1,num+1):
    if(num%i==0):
        print(i,end="  ")
