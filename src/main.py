'''
Author: Amar Campbell -2501977
Date: 26/01/2026
Description: Programming-2 Worksheet-1-Q-4
'''
# Constants
FIRST_HUNDRED= 0.50 
NEXT_HUNDRED= 0.75 
MORE_HUNDRED= 1.00 

# variables
total_bill=0


print("Electricity Limited\n")

# Prompt user for units
units=int(input("Enter the number of units used:\n"))

tier= units-100

if units <= 100:
    total_bill=units*FIRST_HUNDRED
elif units <= 200:
    total_bill = (100*FIRST_HUNDRED)+ (units-100) * NEXT_HUNDRED
else:
    total_bill = (100 * FIRST_HUNDRED) + (100 * NEXT_HUNDRED) + (units -200)* MORE_HUNDRED


print(f"This is your total bill:${total_bill}")
