'''
Program 1: Write a Python function that computes the harmonic sum of n. Accept n from user.
Harmonic Sum = (1/2) + (1/4) + (1/8) + (1/16) + ….. + (1/2n)  
Author: Rachel Anchan
'''
import math
def function_harmonic(): #function to calculate harmonic series sum
    n=int(input("Enter a number upto which the harmonic sum must be calculated: "))
    sum=0.0
    for i in range(1,n+1):
        sum = sum + 1/math.pow(2,i)

    print("Harmonic sum of",n,"is: ",sum)

#calling function_harmonic 
function_harmonic()
