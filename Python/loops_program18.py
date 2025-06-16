''' 
Program 18: WAP to generate the prime numbers from 1 to N
Author: Rachel Anchan
'''

num = int(input("Enter a number: ")) # accepts a number from the user 
count=0 #counter variable to count the number of factors of the entered number
print("The prime numbers between 1 and",num,"are as follows:")
for i in range(2,num+1):
    if(i>1):
        for j in range(2,i):
            if(i%j==0):
                break
        else:
            print(i,end=" ")