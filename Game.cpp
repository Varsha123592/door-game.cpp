def game():
    door = input("Select a door - red door or yellow door: ")

    if door.lower() == "red door":
        number = int(input("Select a number from 1 to 5: "))

        if number in [1, 4]:
            numbers_list = []
            for i in range(3):
                num = int(input(f"Enter number {i + 1} from 1 to 100: "))
                numbers_list.append(num)
            if sum(numbers_list) > 130 and sum(numbers_list) < 1079:
                print("You win!")
            else:
                print("You lost.")
        elif number in [2, 3, 5]:
            print("You lost.")
        else:
            print("Invalid input. Try again.")

    elif door.lower() == "yellow door":
        number = int(input("Enter a number from 6 to 10: "))

        if number % 2 == 0:
            numbers_list = []
            for i in range(3):
                num = int(input(f"Enter random number {i + 1} from 1 to 100: "))
                numbers_list.append(num)
            if sum(numbers_list) > 130 and sum(numbers_list) < 1079:
                print("You win!")
            else:
                print("You lost.")
        else:
            print("You lost.")

    else:
        print("Invalid input. Try again.")


game()
