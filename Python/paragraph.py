'''
WAP to accept a paragraph from user and print it in reverse order of words. 
Don't perform reverse of each word.
Author: Rachel Anchan
'''

text = input("Enter a sentence: ")
splitted_text=text.split()[::-1]
word_list=[]
for word in splitted_text:
    word_list.append(word)

print(" ".join(word_list))
