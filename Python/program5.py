'''
Program 5: Write a python program to create a function called collatz() which reads as parameter named number.
If the number is even it should print and return number //2 and if the number is odd,
then it should print and return 3*number+1. 
The function should keep calling on that number until the function returns a value 1
Author: Rachel Anchan
'''
def collatz(number):
    list1=[] #to store the number value in each iteration of the loop
    list1.append(number)
    while number != 1:
        if(number%2==0): #condition for even number
            number=number//2
            list1.append(number)
        else: #condition for odd number
            number=3*number+1
            list1.append(number)
    print(list1)

n=int(input("Enter a number: ")) #user input
collatz(n)