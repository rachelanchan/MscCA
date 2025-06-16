'''
Write a program that checks if given word is palindrome or not.  
'''

def palindrome(word):
    rev=""
    for char in word:
        rev=char+rev
    if(word == rev):
        print(word,"is a palindrome")
    else:
        print(word,"is not palindrome")


text=input("Enter a string: ")
palindrome(text)