'''
Program 4: Write a python program with a function for given a simple list of objects like 
string or integers as a parameter, checks whether there are duplicate elements in the 
list and return True of False accordingly. 
The input list should not be changed.
Author: Rachel Anchan
'''
def duplicate(int_list):
    new_list = set() # to store the checked list elements
    for item in int_list:
        if item in new_list:
            return True
        new_list.add(item)
    return False
        
list_items=[1,2,1,3,4,5]
print(duplicate(list_items))

list_items=["red","purple","blue","yellow"]
print(duplicate(list_items))