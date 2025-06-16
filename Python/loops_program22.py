'''
Program 22.	WAP to Print Fibonacci Series 
Author: Rachel Anchan
'''

num1=0 #first number
num2=1 #second number
count=0 #counter variable
no_of_terms = int(input("Enter the number of terms for which you want to print the Fib Series: "))
if no_of_terms <= 0:
   print("Please enter a positive number")
elif no_of_terms == 1:
   print("The Fib Series upto",no_of_terms," term is",num1) # if there is only one term, return num1

else:
   print("The Fib series upto",no_of_terms,"terms is as follows:")
   while(count<no_of_terms):
      print(num1,end=" ")
      next= num1+num2
      num1=num2
      num2=next
      count=count+1

