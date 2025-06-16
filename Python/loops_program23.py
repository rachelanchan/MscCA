''' 
Program 23:	WAP to Find the Sum of Fibonacci Series Numbers
Author: Rachel Anchan
'''

num1=0 #first number
num2=1 #second number
count=0 #counter variable
sum=0 #to print the sum of the Fib series
no_of_terms = int(input("Enter the number of terms for which you want to print the Fib Series: "))
if no_of_terms <= 0:
   print("Please enter a positive number")

else:
   print("The Fib series upto",no_of_terms,"terms is as follows:")
   for i in range(0,no_of_terms):
      print(num1,end=" ")
      sum=sum+num1
      next=num1+num2

      num1=num2
      num2=next
   print("\nThe sum of the Fib series upto",no_of_terms,"terms is",sum)