'''
Ask the user for a temperature. Then ask them what unit  the temperature is in, Celsius or Fahrenheit,
Your program should convert the temperature  to the other unit. 
The conversions are F = 9/5 C + 32 and C = 5/9(F − 32).

Author: Rachel Anchan
'''

temp=float(input("Enter the temperature value: ")) #accept the temperature value from the user
unit=input("Enter the unit the temperature is in - C for Celsius or F for Fahrenheit: ")

if unit=='c' or unit =='C':
    result=(9/5)*temp + 32  #converting degree Celsius temperature to Fahrenheit
    print("The Celsius equivalent of",temp,"C is: ",result,"F")  #printing the Fahrenheit equivalent of Celsius
elif unit=='f' or unit=='F':
    result=5/9 *(temp-32)
    print("The Fahrenheit equivalent of",temp,"F is: ",result,"C")
else:
    print("Invalid")


