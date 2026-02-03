"""
Author: Amar Campbell- 2501977
Data: 03/02/2026
"""
grades=[]

def average(grades)-> float:
    total=0.00
    for i in range(3):
        total +=grades[i]
    average = total / 3
    return average

for i in range (3):
    grades.append(float(input("Enter your test score:\n")))


mean= average(grades)

print(f"this is your average: {mean}\n")
