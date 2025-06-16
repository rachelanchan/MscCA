'''
Program 16: WAP to display all integers within the range 100-200 whose sum of digits is an even number
Author: Rachel Anchan
'''
for i in range(100,201):
    j=i
    sum=0 #stores the sum of the digits
    while(i!=0):
        last_digit=i%10
        sum=sum+last_digit
        i=i//10
    if(sum%2==0):
        print("The sum of digits of the number",j,"is",sum,".The sum is even.")