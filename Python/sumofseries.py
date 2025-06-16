'''
Write a Python Program to calculate Sum of Series
   1. 1²+2²+3²+….+n²
   2  1/1! 2/2! 3/3! …1/n!
   3. [1+(1+2)+(1+2+3)+–+(1+2+3+–+n)]
   4. 1 + 1/2 + 1/3 + ... + 1/n. .   
Author: Rachel Anchan
'''
def sum_of_squares(n): #1²+2²+3²+….+n²
    res=0
    for i in range(1,n+1):
        res = res + i**2
    return res
    
def sum_of_factorial(n): #1/1! 2/2! 3/3! …1/n!
    res=0
    fact=1
    for i in range(1,n+1):
        fact = fact*i
        res = res + i/fact
    return res

def sum_of_consecutive(n): #[1+(1+2)+(1+2+3)+–+(1+2+3+–+n)]
    res = 0
    for i in range(1,n+1):
        res = res + i + (i + 1)
    return res

def sum_of_reciprocal(n): #1 + 1/2 + 1/3 + ... + 1/n
    res = 0
    for i in range(1,n+1):
        res = res + 1/i
    return res

n = int(input("Enter a number: "))
print("Sum of Series: ",sum_of_squares(n))
print("Factorial Series: ",sum_of_factorial(n))
print("Consecutive Series: ",sum_of_consecutive(n))
print("Reciprocal Series: ",sum_of_reciprocal(n))





    
