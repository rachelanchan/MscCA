'''
Program 3: Create a new string made of the first, middle, and last characters of each input string
Given two strings, s1 and s2, write a program to return a new string made of s1 and s2’s first, middle, and last characters.
Given: s1 = "America"  s2 = "Japan"  Expected Output: AJrpan
Author: Rachel Anchan
'''

def generate_new_string(s1, s2):
    new_string = s1[0] + s2[0] + s1[len(s1)//2] + s2[len(s2)//2] + s1[-1] + s2[-1]
    return new_string

# Example usage
s1 = "America"
s2 = "Japan"
result = generate_new_string(s1, s2)
print(result)
