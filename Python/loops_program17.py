''' 
Program 17: WAP to check whether the given integer is a prime number or not
'''

num = int(input("Enter a number: ")) # accepts a number from the user 
count=0 #counter variable to count the number of factors of the entered number
if(num==1):
    print(num,"is not a prime number")
elif num>1:
    for i in range(2,num):
        if(num%i==0):
            count=count+1
            break
else:
    print(num,"is a negative number")
if(count>0):
    print(num,"is not a prime number")
else:
    print(num,"is a prime number")