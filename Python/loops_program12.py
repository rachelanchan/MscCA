'''
Program 12: WAP to display all the multiples of 3 within the range 10 to 50
Author: Rachel Anchan
'''

print("The multiples of 3 within the range of 10 to 50 are as follows:")
for i in range(10,51):
    if(i%3==0):
        print(i,end=" ")