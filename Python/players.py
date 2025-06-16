'''
WAP in python that manages player records
Allows user to input details of players one by pne: name, age, rank
Use the name of each player as the key in the dictionary and store their age and rank as a tuple value.
Calculate and print the average age of all players and find the player's highest rank and print  their details.
'''
# Create an empty dictionary to store student records
players = {}

# Input student records
for i in range(2):
    name = input(f"Enter the name of student {i+1}: ")
    age = int(input(f"Enter the age of student {i+1}: "))
    rank = int(input(f"Enter the rank of student {i+1}: "))
    players[name] = (age,rank)

print(players)

total_age = 0
for name, (age,rank) in players.items():
    total_age += age
average_age = total_age / len(players)
print("Average age of all players:", average_age)

# Find player with highest rank
highest_rank = 0
highest_rank_player = ''
max_rank_player = sorted(players, key=lambda k: players[k][2])

'''for name, (age, rank) in players.items():
    if highest_rank > rank:
        highest_rank = rank
        highest_rank_player = name
        ''' 

print("Player with highest rank:", max_rank_player)
print("Details:", players[max_rank_player])

'''
# Sort the dictionary by marks in descending order
sorted_records = sorted(student_records.items(),key=lambda x:x[1], reverse=True)

# Display the top 5 students with highest marks
print("\nTop 3 students in decreasing order of marks obtained:")
for i in range(3):
    print(sorted_records[i][0], ":", sorted_records[i][1])
    '''