'''
Program 13: WAP to find the average of 10 numbers using while loop
Author: Rachel Anchan
'''
sum=0
for i in range(0,10):
    n=int(input("Enter a number: "))
    sum=sum+n
avg=float(sum/10)
print("The sum of the numbers is:",sum)
print("The average of the numbers is:",avg)
