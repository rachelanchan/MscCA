'''
Write a program that keeps name and birthday in a dictionary as key-value pairs. 
The program should display a menu that lets the user search a person’s birthday, add a new name and birthday, 
change an existing birthday, and delete an existing name and birthday.
'''
def display_menu():
    print("1. Search for a birthday")
    print("2. Add a new name and birthday")
    print("3. Change an existing birthday")
    print("4. Delete an existing name and birthday")
    print("5. Exit")

def search_birthday(contacts):
    name = input("Enter the name to search for: ")
    if name in contacts:
        print(f"{name}'s birthday is on {contacts[name]}")
    else:
        print(f"{name} not found in the contacts.")

def add_birthday(contacts):
    name = input("Enter the name: ")
    birthday = input("Enter the birthday: ")
    contacts[name] = birthday
    print(f"{name}'s birthday has been added.")

def change_birthday(contacts):
    name = input("Enter the name whose birthday you want to change: ")
    if name in contacts:
        new_birthday = input("Enter the new birthday: ")
        contacts[name] = new_birthday
        print(f"{name}'s birthday has been updated.")
    else:
        print(f"{name} not found in the contacts.")

def delete_birthday(contacts):
    name = input("Enter the name whose birthday you want to delete: ")
    if name in contacts:
        del contacts[name]
        print(f"{name}'s birthday has been deleted.")
    else:
        print(f"{name} not found in the contacts.")


contacts = {}
    
while True:
    display_menu()
    choice = input("Enter your choice (1/2/3/4/5): ")
    if choice == '1':
        search_birthday(contacts)
    elif choice == '2':
        add_birthday(contacts)       
    elif choice == '3':
        change_birthday(contacts)
    elif choice == '4':
        delete_birthday(contacts)
    elif choice == '5':
        print("Exiting the program.")
        break
    else:
        print("Invalid choice. Please choose a valid option.")


