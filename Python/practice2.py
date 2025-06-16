'''
Write a program that keeps student's name and his marks in a dictionary as key-value pairs. 
The program should store records of 10 students 
and display students name and marks of five students in decreasing order of marks obtained.
'''
# Create an empty dictionary to store student records
student_records = {}

# Input student records
for i in range(5):
    name = input(f"Enter the name of student {i+1}: ")
    marks = float(input(f"Enter the marks of student {i+1}: "))
    student_records[name] = marks

# Sort the dictionary by marks in descending order
sorted_records = sorted(student_records.items(),key=lambda x:x[1], reverse=True)

# Display the top 5 students with highest marks
print("\nTop 3 students in decreasing order of marks obtained:")
for i in range(3):
    print(sorted_records[i][0], ":", sorted_records[i][1])