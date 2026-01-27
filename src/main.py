'''
Author: Amar Campbell- 2501977
Data: 27/01/2026
Description: Worksheet 2 Question 3
'''

totalPayroll=0.00
weeklySalary=0.00
aboveThreshold=0
THRESHOLD=80000

for i in range (40):
    weeklySalary=float(input(f"Please enter employee number {i+1} weekly salary:\n $"))
    totalPayroll+=weeklySalary
    if weeklySalary< THRESHOLD:
        continue
    aboveThreshold+=1


print(f"This is the total payroll cost: ${totalPayroll}\n")
print(f"The number of employees with salary above $80,000: {aboveThreshold}\n")



        
        
        
