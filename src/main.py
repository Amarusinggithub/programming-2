"""
Author: Amar Campbell- 2501977
Data: 03/02/2026
"""


def factorial(num):
    if num==0:
        return 1
    else:
        return factorial(num-1)*num

while True:
    num2=factorial(int(input("Enter a number to calculate its factorial:\n")))

    print(f"this is the factorial:{num2}\n")
    
    ans=input("Do you want to continue:\n")
    
    if ans=='n' or ans=="N":
        break