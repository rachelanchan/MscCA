def main():
    player_records = {}  # Dictionary to store player records

    num_players = int(input("Enter the number of players: "))

    for _ in range(num_players):
        name = input("Enter player's name: ")
        age = int(input("Enter player's age: "))
        rank = int(input("Enter player's rank: "))
        player_records[name] = (age, rank)

    # Calculate the average age of all players
    total_age = sum(age for age, _ in player_records.values())
    average_age = total_age / num_players

    # Find the player with the highest rank
    max_rank_player = sorted(player_records, key=lambda k: player_records[k][2])

    print("Player Records:")
    for name, (age, rank) in player_records.items():
        print(f"Name: {name}, Age: {age}, Rank: {rank}")

    print(f"Average Age of Players: {average_age}")
    print(f"Player with Highest Rank: {max_rank_player}")
    print(f"Details of Player with Highest Rank: Age: {player_records[max_rank_player][0]}, Rank: {player_records[max_rank_player][1]}")

if __name__ == "__main":
    main()
