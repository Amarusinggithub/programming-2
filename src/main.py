"""
Name: Amar Campbell - 2501977
Date: 17/02/2026
Description: lab test 1
"""

import random

# variables
arr_of_things_bought = []
arr_of_the_cost_things_bought = []
did_select_seat = False
did_select_destination = False


def select_destination():
    """
    This function prompts the user to select their destination
    and then return the base price
    """
    invalid = True
    while invalid:
        invalid = False
        print("\n1. New York.\n")
        print("2.  Toronto.\n")
        print("3.  London.\n")
        print("4.  Miami.\n")
        option = int(input("\nPlease select your base destination: (1,2,3,4):\n"))

        match option:
            case 1:
                return 45000

            case 2:
                return 35000
            case 3:
                return 75000

            case 4:
                return 40000

            case _:
                invalid = True
                print("Invalid Input. Please try Again.")


def choose_seat_class():
    """
    This function prompts the user to select the seat upgrade
    """
    invalid = True
    while invalid:
        invalid = False
        print("\n1. Economy.\n")
        print("2.  Business.\n")
        print("3.  First Class.\n")
        option = int(input("\nPlease select a seat cost: (1,2,3):\n"))

        match option:
            case 1:
                return 10

            case 2:
                return 20000
            case 3:
                return 40000
            case _:
                invalid = True
                print("Invalid Input. Please try Again.")


def add_extra_luggage():
    """
    This function prompts the user for the number of extra
    luggage and return the cost
    """
    invalid = True
    while invalid:
        invalid = False
        number_of_luggages = int(
            input(
                "\nPlease enter the number of extra luggage (the maximum is three (3)):\n"
            )
        )
        if number_of_luggages < 0 or number_of_luggages > 3:
            invalid = True
            continue

        match number_of_luggages:
            case 0:
                return 0.00
            case 1:
                return 0.00
            case 2:
                return 7000
            case 3:
                return 14000


def select_meal():
    """
    This function prompts the user to select their
    meal plan and return the cost
    """
    invalid = True
    while invalid:
        invalid = False
        print("\n1. Standard.\n")
        print("2.  Vegetarian.\n")
        print("3.  Vegan.\n")
        print("4.  Premium.\n")
        option = int(input("\nPlease your meal plan: (1,2,3,4):\n"))

        match option:
            case 1:
                return 0.00

            case 2:
                return 2000
            case 3:
                return 2500
            case 4:
                return 4000
            case _:
                invalid = True
                print("Invalid Input. Please try Again.")


def checkout(subtotal):
    """
    This the function that calculates the total cost of all items and print the receipt
    """
    # local variables
    TAX = 0.12
    DISCOUNT = 0.07
    FLAT_FEE = 6000
    total = subtotal
    if not did_select_destination or not did_select_seat:
        print("You must select a seat price and destination before checkout")
        return False

    if total > 100000:
        total = total - (total * DISCOUNT)

    # add tax and flat fee
    total = total + (TAX * total) + FLAT_FEE

    print("RECIEPT")
    print("Cost      Price")
    for i in range(len(arr_of_the_cost_things_bought)):
        print(f"{arr_of_things_bought[i]}    ${arr_of_the_cost_things_bought[i]}\n")

    # checks if user won a free flight
    if random.randint(1, 50) == 25:
        total = 0.00
        print(" You won free flight chance")
        print(f" Your final total is ${total} ")
    else:
        print(f" Your final total is ${total} ")

    return True


def main():
    """
    This is the main function that runs the entire program
    """
    global did_select_destination, did_select_seat
    while True:
        print("Welcome to The Airline Ticket Reservation System.\n")
        print("\n1.Select Destination.\n")
        print("2.  Choose Seat Class.\n")
        print("3.  Add Extra Luggage.\n")
        print("4.  Select Meal.\n")
        print("5.  Checkout.\n")
        print("6.  Exit.\n")
        option = int(input("\nSelect an option (1,2,3,4,5,6):\n"))

        match option:
            case 1:
                # This adds base price to array
                did_select_destination = True
                base_price: float = select_destination()
                match base_price:
                    case 45000:
                        arr_of_the_cost_things_bought.append(base_price)
                        arr_of_things_bought.append("New York")
                    case 35000:
                        arr_of_the_cost_things_bought.append(base_price)
                        arr_of_things_bought.append("Toronto")
                    case 75000:
                        arr_of_the_cost_things_bought.append(base_price)
                        arr_of_things_bought.append("London")
                    case 40000:
                        arr_of_the_cost_things_bought.append(base_price)
                        arr_of_things_bought.append("Miami ")
                    case _:
                        print("Invalid Destination cost.")
            case 2:
                # This adds seat  class upgrade cost to array
                did_select_seat = True
                seat_class_cost: float = choose_seat_class()
                match seat_class_cost:
                    case 10:
                        arr_of_the_cost_things_bought.append(seat_class_cost)
                        arr_of_things_bought.append("Economy")
                    case 20000:
                        arr_of_the_cost_things_bought.append(seat_class_cost)
                        arr_of_things_bought.append("Business")
                    case 40000:
                        arr_of_the_cost_things_bought.append(seat_class_cost)
                        arr_of_things_bought.append("First Class")
                    case _:
                        print("Invalid seat cost")
            case 3:
                # This add cost of the extra luggage arrays
                cost_of_luggage = add_extra_luggage()
                match cost_of_luggage:
                    case 0.00:
                        arr_of_the_cost_things_bought.append(cost_of_luggage)
                        arr_of_things_bought.append("Extra Luggage (0-1 bags)")
                    case 7000:
                        arr_of_the_cost_things_bought.append(cost_of_luggage)
                        arr_of_things_bought.append("Extra Luggage (2 bags)")
                    case 14000:
                        arr_of_the_cost_things_bought.append(cost_of_luggage)
                        arr_of_things_bought.append("Extra Luggage (3 bags)")
                    case _:
                        arr_of_the_cost_things_bought.append(0.00)
                        arr_of_things_bought.append("No Extra Luggage")

            case 4:
                # This returns class upgrade cost  adds to arrays
                meal_cost = select_meal()
                match meal_cost:
                    case 0.00:
                        arr_of_the_cost_things_bought.append(meal_cost)
                        arr_of_things_bought.append("Standard Meal")
                    case 2000:
                        arr_of_the_cost_things_bought.append(meal_cost)
                        arr_of_things_bought.append("Vegetarian Meal")
                    case 2500:
                        arr_of_the_cost_things_bought.append(meal_cost)
                        arr_of_things_bought.append("Vegan Meal")
                    case 4000:
                        arr_of_the_cost_things_bought.append(meal_cost)
                        arr_of_things_bought.append("Premium Meal")
                    case _:
                        arr_of_the_cost_things_bought.append(0.00)
                        arr_of_things_bought.append("No Meal")

            case 5:
                # This calculates and prints the final cost and end loop if successful.
                subtotal = sum(arr_of_the_cost_things_bought)
                successful: bool = checkout(subtotal)

                if successful:
                    # Exit the program on successful checkout
                    break
            case 6:
                # Exit the program
                break
            case _:
                print("Invalid Input. Please try Again.")

if __name__ == "__main__":
    main()
