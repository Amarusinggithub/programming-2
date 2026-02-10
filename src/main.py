"""
Author: Amar Campbell- 2501977
"""

import random

num_ques = 10
correct = num_ques

def multiplication( num1:int, num2:int):
    return num1 * num2


def calculate_percentage( ) -> float:
    return correct / num_ques


def check_ans(  rand:int,   result:int,   ans:int):
    global correct
    if result==ans :
        match rand:
            case 1:
                print("Very good!")
            case 2:
                print("\nExcellent!\n")
            case 3:
                print("\nNice work!\n")
            case 4:
                print("\nKeep up the good work!\n")
            case _:
                print("\nVery good!\n")
    else:
        match rand:
            case 1:
                correct -= 1
                print("\nNo. Please try again.\n")
            case 2:
                correct -= 1
                print("\nWrong. Try once more.\n")
            case 3:
                correct -= 1
                print("\nDon't give up!\n")
            case 4:
                correct -= 1
                print("\nNo. Keep trying.\n")
            case _:
                correct -= 1
                print("\nInvalid Input. Please try again\n")


for i in range (10):
    rand = random.randint(1, 4) 
    num1 = random.randint(1, 10)  
    num2 = random.randint(1, 10)  
    result=multiplication( num1,  num2)
    ans = int(input((f"\nHow much is {num1} times {num2}?\n ")))
    check_ans(rand, result, ans)


percent: float = calculate_percentage()
print(f"Your score is {correct}/{num_ques} which is {percent:.1%}\n.")
print("\nThank you for participating.\n")
correct = num_ques
